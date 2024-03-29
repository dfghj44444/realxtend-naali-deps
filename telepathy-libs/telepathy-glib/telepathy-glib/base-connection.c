/*
 * base-connection.c - Source for TpBaseConnection
 *
 * Copyright (C) 2005-2008 Collabora Ltd.
 * Copyright (C) 2005-2008 Nokia Corporation
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

/**
 * SECTION:base-connection
 * @title: TpBaseConnection
 * @short_description: base class for #TpSvcConnection implementations
 * @see_also: #TpBaseConnectionManager, #TpSvcConnection
 *
 * This base class makes it easier to write #TpSvcConnection implementations
 * by managing connection status, channel factories and handle tracking.
 * A subclass should often not need to implement any of the Connection
 * methods itself.
 *
 * However, methods may be reimplemented if needed: for instance, Gabble
 * overrides RequestHandles so it can validate MUC rooms, which must be done
 * asynchronously.
 */

/**
 * TpBaseConnectionProc:
 * @self: The connection object
 *
 * Signature of a virtual method on #TpBaseConnection that takes no
 * additional parameters and returns nothing.
 */

/**
 * TpBaseConnectionStartConnectingImpl:
 * @self: The connection object
 * @error: Set to the error if %FALSE is returned
 *
 * Signature of an implementation of the start_connecting method
 * of #TpBaseConnection.
 *
 * On entry, the implementation may assume that it is in state NEW.
 *
 * If %TRUE is returned, the Connect D-Bus method succeeds; the
 * implementation must either have already set the status to CONNECTED by
 * calling tp_base_connection_change_status(), or have arranged for a
 * status change to either state DISCONNECTED or CONNECTED to be signalled by
 * calling tp_base_connection_change_status() at some later time.
 * If the status is still NEW after returning %TRUE, #TpBaseConnection will
 * automatically change it to CONNECTING for reason REQUESTED.
 *
 * If %FALSE is returned, the error will be raised from Connect as an
 * exception. If the status is not DISCONNECTED after %FALSE is returned,
 * #TpBaseConnection will automatically change it to DISCONNECTED
 * with a reason appropriate to the error; NetworkError results in
 * NETWORK_ERROR, PermissionDenied results in AUTHENTICATION_FAILED, and all
 * other errors currently result in NONE_SPECIFIED.
 *
 * All except the simplest connection managers are expected to implement this
 * asynchronously, returning %TRUE in most cases and changing the status
 * to CONNECTED or DISCONNECTED later.
 *
 * Returns: %FALSE if failure has already occurred, else %TRUE.
 */

/**
 * TpBaseConnectionCreateHandleReposImpl:
 * @self: The connection object
 * @repos: An array of pointers to be filled in; the implementation
 *         may assume all are initially NULL.
 *
 * Signature of an implementation of the create_handle_repos method
 * of #TpBaseConnection.
 */

/**
 * TpBaseConnectionCreateChannelFactoriesImpl:
 * @self: The implementation, a subclass of TpBaseConnection
 *
 * Signature of an implementation of the create_channel_factories method
 * of #TpBaseConnection.
 *
 * Returns: a GPtrArray of objects implementing #TpChannelFactoryIface
 * which, between them, implement all channel types this Connection
 * supports.
 */

/**
 * TpBaseConnectionCreateChannelManagersImpl:
 * @self: The implementation, a subclass of TpBaseConnection
 *
 * Signature of an implementation of the create_channel_managers method
 * of #TpBaseConnection.
 *
 * Returns: a GPtrArray of objects implementing #TpChannelManager
 * which, between them, implement all channel types this Connection
 * supports.
 */

/**
 * TpBaseConnectionGetUniqueConnectionNameImpl:
 * @self: The implementation, a subclass of TpBaseConnection
 *
 * Signature of the @get_unique_connection_name virtual method
 * on #TpBaseConnection.
 *
 * Returns: a name for this connection which will be unique within this
 * connection manager process, as a string which the caller must free
 * with #g_free.
 */

/**
 * TpBaseConnectionClass:
 * @parent_class: The superclass' structure
 * @create_handle_repos: Fill in suitable handle repositories in the
 *  given array for all those handle types this Connection supports.
 *  Must be set by subclasses to a non-%NULL value; the function must create
 *  at least a CONTACT handle repository (failing to do so will cause a crash).
 * @create_channel_factories: Create an array of channel factories for this
 *  Connection. At least one of this or @create_channel_managers must be set by
 *  subclasses to a non-%NULL value; in new code, setting this to %NULL and
 *  using channel managers exclusively is recommended.
 * @get_unique_connection_name: Construct a unique name for this connection
 *  (for example using the protocol's format for usernames). If %NULL (the
 *  default), a unique name will be generated. Subclasses should usually
 *  override this to get more obvious names, to aid debugging and prevent
 *  multiple connections to the same account.
 * @connecting: If set by subclasses, will be called just after the state
 *  changes to CONNECTING. May be %NULL if nothing special needs to happen.
 * @connected: If set by subclasses, will be called just after the state
 *  changes to CONNECTED. May be %NULL if nothing special needs to happen.
 * @disconnected: If set by subclasses, will be called just after the state
 *  changes to DISCONNECTED. May be %NULL if nothing special needs to happen.
 * @shut_down: Called after disconnected() is called, to clean up the
 *  connection. Must start the shutdown process for the underlying
 *  network connection, and arrange for tp_base_connection_finish_shutdown()
 *  to be called after the underlying connection has been closed. May not
 *  be left as %NULL.
 * @start_connecting: Asynchronously start connecting - called to implement
 *  the Connect D-Bus method. See #TpBaseConnectionStartConnectingImpl for
 *  details. May not be left as %NULL.
 * @interfaces_always_present: A strv of extra D-Bus interfaces which are
 *  always implemented by instances of this class, which may be filled in
 *  by subclasses. The default is to list no additional interfaces.
 *  Individual instances may detect which additional interfaces they support
 *  and signal them before going to state CONNECTED by calling
 *  tp_base_connection_add_interfaces().
 * @create_channel_managers: Create an array of channel managers for this
 *  Connection. At least one of this or @create_channel_factories must be set
 *  by subclasses to a non-%NULL value.
 *  Since: 0.7.15
 *
 * The class of a #TpBaseConnection. Many members are virtual methods etc.
 * to be filled in in the subclass' class_init function.
 *
 * In addition to the fields documented here, there are three gpointer fields
 * which must currently be %NULL (a meaning may be defined for these in a
 * future version of telepathy-glib), and a pointer to opaque private data.
 */

/**
 * TP_INTERNAL_CONNECTION_STATUS_NEW:
 *
 * A special value for #TpConnectionStatus, used within GLib connection
 * managers to indicate that the connection is disconnected because
 * connection has never been attempted (as distinct from disconnected
 * after connection has started, either by user request or an error).
 *
 * Must never be visible on the D-Bus - %TP_CONNECTION_STATUS_DISCONNECTED
 * is sent instead.
 */

/**
 * TpBaseConnection:
 * @parent: Fields shared by the superclass.
 * @bus_name: A D-Bus well-known bus name, owned by the connection manager
 *  process and associated with this connection. Set by
 *  tp_base_connection_register; should be considered read-only by subclasses.
 * @object_path: The object-path of this connection. Set by
 *  tp_base_connection_register; should be considered read-only by subclasses.
 * @status: Connection status - may either be a valid TpConnectionStatus or
 *  TP_INTERNAL_CONNECTION_STATUS_NEW. Should be considered read-only by
 *  subclasses: use tp_base_connection_change_status() to set it.
 * @self_handle: The handle of type %TP_HANDLE_TYPE_CONTACT representing the
 *  local user. Must be set nonzero by the subclass before moving to state
 *  CONNECTED. Since 0.7.15, setting this property directly is
 *  deprecated, in favour of tp_base_connection_set_self_handle(); if this
 *  property is set directly, the connection must ensure it holds a reference
 *  to the handle. Changing this property directly having moved to state
 *  CONNECTED is very strongly discouraged, as this will prevent the
 *  SelfHandleChanged signal being emitted.
 *
 * Data structure representing a generic #TpSvcConnection implementation.
 *
 * In addition to the fields documented here, there are four gpointer fields
 * which must currently be %NULL (a meaning may be defined for these in a
 * future version of telepathy-glib), and a pointer to opaque private data.
 */

/**
 * TpChannelManagerIter:
 * @see_also: tp_base_connection_channel_manager_iter_init(),
 *            tp_base_connection_channel_manager_iter_next()
 *
 * An iterator over the #TpChannelManager objects known to a #TpBaseConnection.
 * It has no public fields.
 *
 * Since: 0.7.15
 */

/**
 * TP_BASE_CONNECTION_ERROR_IF_NOT_CONNECTED:
 * @conn: A TpBaseConnection
 * @context: A DBusGMethodInvocation
 *
 * If @conn is not in state #TP_CONNECTION_STATUS_CONNECTED, complete the
 * D-Bus method invocation @context by raising the Telepathy error
 * #TP_ERROR_DISCONNECTED, and return from the current function (which
 * must be void). For use in D-Bus method implementations.
 */


#include <telepathy-glib/base-connection.h>

#include <string.h>

#include <dbus/dbus-glib-lowlevel.h>

#include <telepathy-glib/channel-factory-iface.h>
#include <telepathy-glib/channel-manager.h>
#include <telepathy-glib/connection-manager.h>
#include <telepathy-glib/contacts-mixin.h>
#include <telepathy-glib/dbus-properties-mixin.h>
#include <telepathy-glib/dbus.h>
#include <telepathy-glib/exportable-channel.h>
#include <telepathy-glib/gtypes.h>
#include <telepathy-glib/interfaces.h>
#include <telepathy-glib/svc-generic.h>
#include <telepathy-glib/util.h>

#define DEBUG_FLAG TP_DEBUG_CONNECTION
#include "telepathy-glib/debug-internal.h"

static void conn_iface_init (gpointer, gpointer);
static void requests_iface_init (gpointer, gpointer);

G_DEFINE_ABSTRACT_TYPE_WITH_CODE(TpBaseConnection,
    tp_base_connection,
    G_TYPE_OBJECT,
    G_IMPLEMENT_INTERFACE (TP_TYPE_SVC_CONNECTION,
      conn_iface_init);
    G_IMPLEMENT_INTERFACE (TP_TYPE_SVC_DBUS_PROPERTIES,
      tp_dbus_properties_mixin_iface_init);
    G_IMPLEMENT_INTERFACE (TP_TYPE_SVC_CONNECTION_INTERFACE_REQUESTS,
      requests_iface_init));

enum
{
    PROP_PROTOCOL = 1,
    PROP_SELF_HANDLE,
};

/* signal enum */
enum
{
    INVALID_SIGNAL,
    SHUTDOWN_FINISHED,
    N_SIGNALS
};

static guint signals[N_SIGNALS] = {0};

typedef struct _ChannelRequest ChannelRequest;

typedef enum {
    METHOD_REQUEST_CHANNEL,
    METHOD_CREATE_CHANNEL,
    METHOD_ENSURE_CHANNEL,
    NUM_METHODS
} ChannelRequestMethod;

struct _ChannelRequest
{
  DBusGMethodInvocation *context;
  ChannelRequestMethod method;

  gchar *channel_type;
  guint handle_type;
  guint handle;
  /* always TRUE for CREATE; always FALSE for ENSURE */
  unsigned suppress_handler : 1;

  /* only meaningful for METHOD_ENSURE_CHANNEL; only true if this is the first
   * request to be satisfied with a particular channel, and no other request
   * satisfied by that channel has a different method.
   */
  unsigned yours : 1;
};

static ChannelRequest *
channel_request_new (DBusGMethodInvocation *context,
                     ChannelRequestMethod method,
                     const char *channel_type,
                     guint handle_type,
                     guint handle,
                     gboolean suppress_handler)
{
  ChannelRequest *ret;

  g_assert (NULL != context);
  g_assert (NULL != channel_type);
  g_assert (method < NUM_METHODS);

  ret = g_slice_new0 (ChannelRequest);
  ret->context = context;
  ret->method = method;
  ret->channel_type = g_strdup (channel_type);
  ret->handle_type = handle_type;
  ret->handle = handle;
  ret->suppress_handler = suppress_handler;
  ret->yours = FALSE;

  DEBUG("New channel request at %p: ctype=%s htype=%d handle=%d suppress=%d",
        ret, channel_type, handle_type, handle, suppress_handler);

  return ret;
}

static void
channel_request_free (ChannelRequest *request)
{
  g_assert (NULL == request->context);
  DEBUG("Freeing channel request at %p: ctype=%s htype=%d handle=%d "
        "suppress=%d", request, request->channel_type, request->handle_type,
        request->handle, request->suppress_handler);
  g_free (request->channel_type);
  g_slice_free (ChannelRequest, request);
}

static void
channel_request_cancel (gpointer data, gpointer user_data)
{
  ChannelRequest *request = (ChannelRequest *) data;
  GError error = { TP_ERRORS, TP_ERROR_DISCONNECTED,
      "unable to service this channel request, we're disconnecting!" };

  DEBUG ("cancelling request at %p for %s/%u/%u", request,
      request->channel_type, request->handle_type, request->handle);

  dbus_g_method_return_error (request->context, &error);
  request->context = NULL;

  channel_request_free (request);
}

struct _TpBaseConnectionPrivate
{
  /* Telepathy properties */
  gchar *protocol;

  /* if TRUE, the object has gone away */
  gboolean dispose_has_run;
  /* array of (TpChannelFactoryIface *) */
  GPtrArray *channel_factories;
  /* array of (TpChannelManager *) */
  GPtrArray *channel_managers;
  /* array of (ChannelRequest *) */
  GPtrArray *channel_requests;

  TpHandleRepoIface *handles[NUM_TP_HANDLE_TYPES];

  /* If not %NULL, contains strings representing our interfaces.
   * If %NULL, we have no interfaces except those in
   * klass->interfaces_always_present (i.e. this is lazily allocated).
   *
   * Note that this is a GArray of gchar*, not a GPtrArray,
   * so that we can use GArray's convenient auto-null-termination. */
  GArray *interfaces;

  /* Array of DBusGMethodInvocation * representing Disconnect calls.
   * If NULL and we are in a state != DISCONNECTED, then we have not started
   * shutting down yet.
   * If NULL and we are in state DISCONNECTED, then we have finished shutting
   * down.
   * If not NULL, we are trying to shut down (and must be in state
   * DISCONNECTED). */
  GPtrArray *disconnect_requests;

  /* Only non-NULL if we have taken our ->bus_name. */
  TpDBusDaemon *bus_proxy;
};

static void
tp_base_connection_get_property (GObject *object,
                                 guint property_id,
                                 GValue *value,
                                 GParamSpec *pspec)
{
  TpBaseConnection *self = (TpBaseConnection *) object;
  TpBaseConnectionPrivate *priv = self->priv;

  switch (property_id) {
    case PROP_PROTOCOL:
      g_value_set_string (value, priv->protocol);
      break;

    case PROP_SELF_HANDLE:
      g_value_set_uint (value, self->self_handle);
      break;

    default:
      G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
      break;
  }
}

static void
tp_base_connection_set_property (GObject      *object,
                                 guint         property_id,
                                 const GValue *value,
                                 GParamSpec   *pspec)
{
  TpBaseConnection *self = (TpBaseConnection *) object;
  TpBaseConnectionPrivate *priv = self->priv;

  switch (property_id) {
    case PROP_PROTOCOL:
      g_free (priv->protocol);
      priv->protocol = g_value_dup_string (value);
      g_assert (priv->protocol != NULL);
      break;

    case PROP_SELF_HANDLE:
      {
        TpHandle new_self_handle = g_value_get_uint (value);

        if (self->status == TP_CONNECTION_STATUS_CONNECTED)
          g_return_if_fail (new_self_handle != 0);

        if (self->self_handle == new_self_handle)
          return;

        if (self->self_handle != 0)
          tp_handle_unref (priv->handles[TP_HANDLE_TYPE_CONTACT],
              self->self_handle);

        self->self_handle = new_self_handle;

        if (self->self_handle != 0)
          tp_handle_ref (priv->handles[TP_HANDLE_TYPE_CONTACT],
              self->self_handle);

        tp_svc_connection_emit_self_handle_changed (self, self->self_handle);
      }
      break;

    default:
      G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
      break;
  }
}

static void
tp_base_connection_dispose (GObject *object)
{
  TpBaseConnection *self = TP_BASE_CONNECTION (object);
  TpBaseConnectionPrivate *priv = self->priv;
  guint i;

  if (priv->dispose_has_run)
    return;

  priv->dispose_has_run = TRUE;

  g_assert ((self->status == TP_CONNECTION_STATUS_DISCONNECTED) ||
            (self->status == TP_INTERNAL_CONNECTION_STATUS_NEW));
  if (self->self_handle != 0)
    {
      tp_handle_unref (self->priv->handles[TP_HANDLE_TYPE_CONTACT],
              self->self_handle);
      self->self_handle = 0;
    }

  if (priv->bus_proxy != NULL)
    {
      if (self->bus_name != NULL)
        {
          tp_dbus_daemon_release_name (priv->bus_proxy, self->bus_name, NULL);
        }

      g_object_unref (priv->bus_proxy);
      priv->bus_proxy = NULL;
    }

  g_ptr_array_foreach (priv->channel_factories, (GFunc) g_object_unref, NULL);
  g_ptr_array_free (priv->channel_factories, TRUE);
  priv->channel_factories = NULL;

  g_ptr_array_foreach (priv->channel_managers, (GFunc) g_object_unref, NULL);
  g_ptr_array_free (priv->channel_managers, TRUE);
  priv->channel_managers = NULL;

  if (priv->channel_requests)
    {
      g_assert (priv->channel_requests->len == 0);
      g_ptr_array_free (priv->channel_requests, TRUE);
      priv->channel_requests = NULL;
    }

  for (i = 0; i < NUM_TP_HANDLE_TYPES; i++)
    {
      if (priv->handles[i])
        {
          g_object_unref ((GObject *) priv->handles[i]);
          priv->handles[i] = NULL;
        }
    }

  if (priv->interfaces)
    {
      g_array_free (priv->interfaces, TRUE);
    }

  if (G_OBJECT_CLASS (tp_base_connection_parent_class)->dispose)
    G_OBJECT_CLASS (tp_base_connection_parent_class)->dispose (object);
}

static void
tp_base_connection_finalize (GObject *object)
{
  TpBaseConnection *self = TP_BASE_CONNECTION (object);
  TpBaseConnectionPrivate *priv = self->priv;

  g_free (priv->protocol);
  g_free (self->bus_name);
  g_free (self->object_path);

  G_OBJECT_CLASS (tp_base_connection_parent_class)->finalize (object);
}


/**
 * exportable_channel_get_old_info:
 * @channel: a channel
 * @object_path_out:  address at which to store the channel's object path,
 *                    which the caller should g_free()
 * @channel_type_out: address at which to store the channel's type, which the
 *                    caller should g_free()
 * @handle_type_out:  address at which to store the channel's associated handle
 *                    type
 * @handle_out:       address at which to store the channel's associated
 *                    handle, if any.  This is a borrowed reference; the caller
 *                    does not need to tp_handle_unref() it.
 *
 * Given a new-style exportable channel, as used by the Requests interface's
 * API, fetches the information needed for the old-style ListChannels method
 * on Connections.
 */
static void
exportable_channel_get_old_info (TpExportableChannel *channel,
                                 gchar **object_path_out,
                                 gchar **channel_type_out,
                                 guint *handle_type_out,
                                 guint *handle_out)
{
  gchar *object_path;
  GHashTable *channel_properties;
  gboolean valid;

  g_object_get (channel,
      "object-path", &object_path,
      "channel-properties", &channel_properties,
      NULL);

  g_assert (object_path != NULL);
  g_assert (tp_dbus_check_valid_object_path (object_path, NULL));

  if (object_path_out != NULL)
    *object_path_out = object_path;
  else
    g_free (object_path);

  if (channel_type_out != NULL)
    {
      *channel_type_out = g_strdup (tp_asv_get_string (channel_properties,
          TP_PROP_CHANNEL_CHANNEL_TYPE));
      g_assert (*channel_type_out != NULL);
      g_assert (tp_dbus_check_valid_interface_name (*channel_type_out, NULL));
    }

  if (handle_type_out != NULL)
    {
      *handle_type_out = tp_asv_get_uint32 (channel_properties,
          TP_PROP_CHANNEL_TARGET_HANDLE_TYPE, &valid);
      g_assert (valid);
    }

  if (handle_out != NULL)
    {
      *handle_out = tp_asv_get_uint32 (channel_properties,
          TP_PROP_CHANNEL_TARGET_HANDLE, &valid);
      g_assert (valid);

      if (handle_type_out != NULL)
        {
          if (*handle_type_out == TP_HANDLE_TYPE_NONE)
            g_assert (*handle_out == 0);
          else
            g_assert (*handle_out != 0);
        }
    }

  g_hash_table_destroy (channel_properties);
}


/*
 * get_channel_details:
 * @obj: a channel, which must implement one of #TpExportableChannel and
 *       #TpChannelIface
 *
 * Returns: (oa{sv}: o.fd.T.Conn.Iface.Requests.Channel_Details), suitable for
 *          inclusion in the NewChannels signal.
 */
static GValueArray *
get_channel_details (GObject *obj)
{
  GValueArray *structure = g_value_array_new (2);
  GHashTable *table;
  GValue *value;
  gchar *object_path;

  g_object_get (obj,
      "object-path", &object_path,
      NULL);

  g_value_array_append (structure, NULL);
  value = g_value_array_get_nth (structure, 0);
  g_value_init (value, DBUS_TYPE_G_OBJECT_PATH);
  g_value_take_boxed (value, object_path);
  object_path = NULL;

  g_assert (TP_IS_EXPORTABLE_CHANNEL (obj) || TP_IS_CHANNEL_IFACE (obj));

  if (TP_IS_EXPORTABLE_CHANNEL (obj))
    {
      g_object_get (obj,
          "channel-properties", &table,
          NULL);
    }
  else
    {
     table = g_hash_table_new_full (g_str_hash, g_str_equal,
          NULL, (GDestroyNotify) tp_g_value_slice_free);

      value = tp_g_value_slice_new (G_TYPE_UINT);
      g_object_get_property (obj, "handle", value);
      g_hash_table_insert (table, TP_PROP_CHANNEL_TARGET_HANDLE, value);

      value = tp_g_value_slice_new (G_TYPE_UINT);
      g_object_get_property (obj, "handle-type", value);
      g_hash_table_insert (table, TP_PROP_CHANNEL_TARGET_HANDLE_TYPE, value);

      value = tp_g_value_slice_new (G_TYPE_STRING);
      g_object_get_property (obj, "channel-type", value);
      g_hash_table_insert (table, TP_PROP_CHANNEL_CHANNEL_TYPE, value);
    }

  g_value_array_append (structure, NULL);
  value = g_value_array_get_nth (structure, 1);
  g_value_init (value, TP_HASH_TYPE_QUALIFIED_PROPERTY_VALUE_MAP);
  g_value_take_boxed (value, table);

  return structure;
}


static GPtrArray *
find_matching_channel_requests (TpBaseConnection *conn,
                                const gchar *channel_type,
                                guint handle_type,
                                guint handle,
                                ChannelRequest *channel_request,
                                gboolean *suppress_handler)
{
  TpBaseConnectionPrivate *priv = conn->priv;
  GPtrArray *requests;
  guint i;

  requests = g_ptr_array_sized_new (1);

  if (handle_type == 0)
    {
      /* It's an anonymous channel, which can only satisfy the request for
       * which it was created (or if it's returned as EXISTING, it can only
       * satisfy the request for which it was returned as EXISTING).
       */
      g_assert (handle == 0);
      g_assert (channel_request == NULL ||
          tp_g_ptr_array_contains (priv->channel_requests, channel_request));

      if (channel_request)
        {
          g_ptr_array_add (requests, channel_request);

          if (suppress_handler && channel_request->suppress_handler)
            *suppress_handler = TRUE;
        }

      /* whether we've put any matches in requests or not */
      return requests;
    }

  /* for identifiable channels (those which are to a particular handle),
   * satisfy any queued requests.
   */
  for (i = 0; i < priv->channel_requests->len; i++)
    {
      ChannelRequest *request = g_ptr_array_index (priv->channel_requests, i);

      if (tp_strdiff (request->channel_type, channel_type))
        continue;

      if (handle_type != request->handle_type)
        continue;

      if (handle != request->handle)
        continue;

      if (request->suppress_handler && suppress_handler)
        *suppress_handler = TRUE;

      g_ptr_array_add (requests, request);
    }

  /* if this channel was created or returned as a result of a particular
   * request, that request had better be among the matching ones in the queue
   */
  g_assert (channel_request == NULL ||
      tp_g_ptr_array_contains (requests, channel_request));

  return requests;
}


static void
satisfy_request (TpBaseConnection *conn,
                 ChannelRequest *request,
                 GObject *channel,
                 const gchar *object_path)
{
  TpBaseConnectionPrivate *priv = conn->priv;

  DEBUG ("completing queued request %p with success, "
      "channel_type=%s, handle_type=%u, "
      "handle=%u, suppress_handler=%u", request, request->channel_type,
      request->handle_type, request->handle, request->suppress_handler);

  switch (request->method)
    {
    case METHOD_REQUEST_CHANNEL:
      tp_svc_connection_return_from_request_channel (request->context,
          object_path);
      break;

    case METHOD_CREATE_CHANNEL:
        {
          GHashTable *properties;

          g_assert (TP_IS_EXPORTABLE_CHANNEL (channel));
          g_object_get (channel,
              "channel-properties", &properties,
              NULL);
          tp_svc_connection_interface_requests_return_from_create_channel (
              request->context, object_path, properties);
          g_hash_table_destroy (properties);
        }
        break;

    case METHOD_ENSURE_CHANNEL:
        {
          GHashTable *properties;

          g_assert (TP_IS_EXPORTABLE_CHANNEL (channel));
          g_object_get (channel,
              "channel-properties", &properties,
              NULL);
          tp_svc_connection_interface_requests_return_from_ensure_channel (
              request->context, request->yours, object_path, properties);
          g_hash_table_destroy (properties);
        }
        break;

    default:
      g_assert_not_reached ();
    }
  request->context = NULL;

  g_ptr_array_remove (priv->channel_requests, request);

  channel_request_free (request);
}


static void
factory_satisfy_requests (TpBaseConnection *conn,
                          TpChannelFactoryIface *factory,
                          TpChannelIface *chan,
                          ChannelRequest *channel_request,
                          gboolean is_new)
{
  gchar *object_path = NULL, *channel_type = NULL;
  guint handle_type = 0, handle = 0;
  gboolean suppress_handler = FALSE;
  GPtrArray *tmp;
  guint i;

  g_object_get (chan,
      "object-path", &object_path,
      "channel-type", &channel_type,
      "handle-type", &handle_type,
      "handle", &handle,
      NULL);

  DEBUG ("called for %s", object_path);

  tmp = find_matching_channel_requests (conn, channel_type, handle_type,
                                        handle, channel_request,
                                        &suppress_handler);

  for (i = 0; i < tmp->len; i++)
    satisfy_request (conn, g_ptr_array_index (tmp, i), G_OBJECT (chan),
        object_path);

  if (is_new)
    {
      GPtrArray *array = g_ptr_array_sized_new (1);

      g_ptr_array_add (array, get_channel_details (G_OBJECT (chan)));
      tp_svc_connection_interface_requests_emit_new_channels (conn, array);
      g_value_array_free (g_ptr_array_index (array, 0));
      g_ptr_array_free (array, TRUE);

      tp_svc_connection_emit_new_channel (conn, object_path, channel_type,
          handle_type, handle, suppress_handler);
    }

  g_ptr_array_free (tmp, TRUE);

  g_free (object_path);
  g_free (channel_type);
}


static void
fail_channel_request (TpBaseConnection *conn,
                      ChannelRequest *request,
                      GError *error)
{
  TpBaseConnectionPrivate *priv = conn->priv;

  DEBUG ("completing queued request %p with error, channel_type=%s, "
      "handle_type=%u, handle=%u, suppress_handler=%u",
      request, request->channel_type,
      request->handle_type, request->handle, request->suppress_handler);

  dbus_g_method_return_error (request->context, error);
  request->context = NULL;

  g_ptr_array_remove (priv->channel_requests, request);

  channel_request_free (request);
}


/* Channel factory signal handlers */

static void
factory_channel_closed_cb (GObject *channel,
                           TpBaseConnection *conn)
{
  gchar *object_path;

  g_object_get (channel,
      "object-path", &object_path,
      NULL);

  tp_svc_connection_interface_requests_emit_channel_closed (conn,
      object_path);

  g_free (object_path);
}

static void
factory_new_channel_cb (TpChannelFactoryIface *factory,
                        GObject *chan,
                        ChannelRequest *channel_request,
                        gpointer data)
{
  factory_satisfy_requests (TP_BASE_CONNECTION (data), factory,
      TP_CHANNEL_IFACE (chan), channel_request, TRUE);

  g_signal_connect (chan, "closed", (GCallback) factory_channel_closed_cb,
      data);
}


static void
factory_channel_error_cb (TpChannelFactoryIface *factory,
                          GObject *chan,
                          GError *error,
                          ChannelRequest *channel_request,
                          gpointer data)
{
  TpBaseConnection *conn = TP_BASE_CONNECTION (data);
  gchar *channel_type = NULL;
  guint handle_type = 0, handle = 0;
  GPtrArray *tmp;
  guint i;

  DEBUG ("channel_type=%s, handle_type=%u, handle=%u, error_code=%u, "
      "error_message=\"%s\"", channel_type, handle_type, handle,
      error->code, error->message);

  g_object_get (chan,
      "channel-type", &channel_type,
      "handle-type", &handle_type,
      "handle", &handle,
      NULL);

  tmp = find_matching_channel_requests (conn, channel_type, handle_type,
                                        handle, channel_request, NULL);

  for (i = 0; i < tmp->len; i++)
    fail_channel_request (conn, g_ptr_array_index (tmp, i), error);

  g_ptr_array_free (tmp, TRUE);
  g_free (channel_type);
}


/* Channel manager signal handlers */

typedef struct {
    TpBaseConnection *self;
    /* borrowed TpExportableChannel => itself if suppress_handler,
     * omitted otherwise */
    GHashTable *suppress_handler;
} ManagerNewChannelContext;

static void
manager_new_channel (gpointer key,
                     gpointer value,
                     gpointer data)
{
  TpExportableChannel *channel = TP_EXPORTABLE_CHANNEL (key);
  GSList *request_tokens = value;
  ManagerNewChannelContext *context = data;
  TpBaseConnection *self = TP_BASE_CONNECTION (context->self);
  gchar *object_path;
  GSList *iter;
  gboolean suppress_handler = FALSE;
  gboolean satisfies_create_channel = FALSE;
  gboolean satisfies_request_channel = FALSE;
  ChannelRequest *first_ensure = NULL;

  g_object_get (channel,
      "object-path", &object_path,
      NULL);

  /* suppress_handler on Connection.NewChannel should be TRUE if:
   *   - any satisfied requests were calls to CreateChannel; or
   *   - at least one satisfied RequestChannel call had suppress_handler=TRUE;
   *     or
   *   - any EnsureChannel call will receive Yours=TRUE (that is, if the
   *     channel satisfies no CreateChannel or RequestChannel calls).
   *
   * So, it should be FALSE if:
   *   - all the requests were RequestChannel(..., suppress_handler=FALSE) or
   *     EnsureChannel and there was at least one RequestChannel; or
   *   - no requests were satisfied by the channel.
   */
  for (iter = request_tokens; iter != NULL; iter = iter->next)
    {
      ChannelRequest *request = iter->data;

      switch (request->method)
        {
          case METHOD_REQUEST_CHANNEL:
            satisfies_request_channel = TRUE;
            if (request->suppress_handler)
              {
                suppress_handler = TRUE;
                goto break_loop_early;
              }
            break;

          case METHOD_CREATE_CHANNEL:
            satisfies_create_channel = TRUE;
            goto break_loop_early;
            break;

          case METHOD_ENSURE_CHANNEL:
            if (first_ensure == NULL)
              first_ensure = request;
            break;

          case NUM_METHODS:
            g_assert_not_reached ();
        }

    }
break_loop_early:

  /* put the channel in the suppress_handler hash table if it needs
   * suppress_handler set when signalling NewChannel */
  if (request_tokens != NULL &&
      (satisfies_create_channel || !satisfies_request_channel))
    suppress_handler = TRUE;

  if (suppress_handler)
    g_hash_table_insert (context->suppress_handler, channel, channel);

  /* If the only type of request satisfied by this new channel is
   * EnsureChannel, give exactly one request Yours=True.
   * If other kinds of requests are involved, don't give anyone Yours=True.
   */
  if (!satisfies_request_channel
      && !satisfies_create_channel
      && first_ensure != NULL)
    {
      first_ensure->yours = TRUE;
    }


  for (iter = request_tokens; iter != NULL; iter = iter->next)
    {
      satisfy_request (self, iter->data, G_OBJECT (channel),
          object_path);
    }

  g_free (object_path);
}


static void
manager_new_channels_cb (TpChannelManager *manager,
                         GHashTable *channels,
                         TpBaseConnection *self)
{
  GPtrArray *array;
  ManagerNewChannelContext context = { self, g_hash_table_new (NULL, NULL) };
  GHashTableIter iter;
  gpointer key, value;

  g_assert (TP_IS_CHANNEL_MANAGER (manager));
  g_assert (TP_IS_BASE_CONNECTION (self));

  /* satisfy the RequestChannel/CreateChannel/EnsureChannel calls; as
   * a side-effect, fill in context.suppress_handler with those channels
   * that will have to be signalled with suppress_handler = TRUE */
  g_hash_table_foreach (channels, manager_new_channel, &context);

  /* Emit NewChannels */
  array = g_ptr_array_sized_new (g_hash_table_size (channels));
  g_hash_table_iter_init (&iter, channels);

  while (g_hash_table_iter_next (&iter, &key, &value))
    {
      g_ptr_array_add (array, get_channel_details (G_OBJECT (key)));
    }

  tp_svc_connection_interface_requests_emit_new_channels (self,
      array);

  g_ptr_array_foreach (array, (GFunc) g_value_array_free, NULL);
  g_ptr_array_free (array, TRUE);

  /* Emit NewChannel */
  g_hash_table_iter_init (&iter, channels);

  while (g_hash_table_iter_next (&iter, &key, &value))
    {
      gboolean suppress_handler = (
          g_hash_table_lookup (context.suppress_handler, key) != NULL);
      gchar *object_path, *channel_type;
      guint handle_type, handle;

      exportable_channel_get_old_info (TP_EXPORTABLE_CHANNEL (key),
          &object_path, &channel_type, &handle_type, &handle);

      tp_svc_connection_emit_new_channel (self, object_path, channel_type,
          handle_type, handle, suppress_handler);

      g_free (object_path);
      g_free (channel_type);
    }

  g_hash_table_destroy (context.suppress_handler);
}


static void
manager_request_already_satisfied_cb (TpChannelManager *manager,
                                      gpointer request_token,
                                      TpExportableChannel *channel,
                                      TpBaseConnection *self)
{
  gchar *object_path;

  g_assert (TP_IS_CHANNEL_MANAGER (manager));
  g_assert (TP_IS_EXPORTABLE_CHANNEL (channel));
  g_assert (TP_IS_BASE_CONNECTION (self));

  g_object_get (channel,
      "object-path", &object_path,
      NULL);

  satisfy_request (self, request_token, G_OBJECT (channel), object_path);
  g_free (object_path);
}


static void
manager_request_failed_cb (TpChannelManager *manager,
                           gpointer request_token,
                           guint domain,
                           gint code,
                           gchar *message,
                           TpBaseConnection *self)
{
  GError error = { domain, code, message };

  g_assert (TP_IS_CHANNEL_MANAGER (manager));
  g_assert (domain > 0);
  g_assert (message != NULL);
  g_assert (TP_IS_BASE_CONNECTION (self));

  fail_channel_request (self, request_token, &error);
}


static void
manager_channel_closed_cb (TpChannelManager *manager,
                           const gchar *path,
                           TpBaseConnection *self)
{
  g_assert (TP_IS_CHANNEL_MANAGER (manager));
  g_assert (path != NULL);
  g_assert (TP_IS_BASE_CONNECTION (self));

  tp_svc_connection_interface_requests_emit_channel_closed (self, path);
}


static GObject *
tp_base_connection_constructor (GType type, guint n_construct_properties,
    GObjectConstructParam *construct_params)
{
  guint i;
  TpBaseConnection *self = TP_BASE_CONNECTION (
      G_OBJECT_CLASS (tp_base_connection_parent_class)->constructor (
        type, n_construct_properties, construct_params));
  TpBaseConnectionPrivate *priv = self->priv;
  TpBaseConnectionClass *cls = TP_BASE_CONNECTION_GET_CLASS (self);

  DEBUG("Post-construction: (TpBaseConnection *)%p", self);

  g_assert (cls->create_handle_repos != NULL);
  g_assert (cls->create_channel_factories != NULL ||
            cls->create_channel_managers  != NULL);
  g_assert (cls->shut_down != NULL);
  g_assert (cls->start_connecting != NULL);

  (cls->create_handle_repos) (self, priv->handles);

  /* a connection that doesn't support contacts is no use to anyone */
  g_assert (priv->handles[TP_HANDLE_TYPE_CONTACT] != NULL);

  if (DEBUGGING)
    {
      for (i = 0; i < NUM_TP_HANDLE_TYPES; i++)
      {
        DEBUG("Handle repo for type #%u at %p", i, priv->handles[i]);
      }
    }

  if (cls->create_channel_factories != NULL)
    priv->channel_factories = cls->create_channel_factories (self);
  else
    priv->channel_factories = g_ptr_array_sized_new (0);

  if (cls->create_channel_managers != NULL)
    priv->channel_managers = cls->create_channel_managers (self);
  else
    priv->channel_managers = g_ptr_array_sized_new (0);

  for (i = 0; i < priv->channel_factories->len; i++)
    {
      GObject *factory = g_ptr_array_index (priv->channel_factories, i);
      DEBUG("Channel factory #%u at %p", i, factory);
      g_signal_connect (factory, "new-channel", G_CALLBACK
          (factory_new_channel_cb), self);
      g_signal_connect (factory, "channel-error", G_CALLBACK
          (factory_channel_error_cb), self);
    }

  for (i = 0; i < priv->channel_managers->len; i++)
    {
      TpChannelManager *manager = TP_CHANNEL_MANAGER (
          g_ptr_array_index (priv->channel_managers, i));

      DEBUG("Channel manager #%u at %p", i, manager);

      g_signal_connect (manager, "new-channels",
          (GCallback) manager_new_channels_cb, self);
      g_signal_connect (manager, "request-already-satisfied",
          (GCallback) manager_request_already_satisfied_cb, self);
      g_signal_connect (manager, "request-failed",
          (GCallback) manager_request_failed_cb, self);
      g_signal_connect (manager, "channel-closed",
          (GCallback) manager_channel_closed_cb, self);
    }

  return (GObject *) self;
}


/* D-Bus properties for the Requests interface */

static void
factory_get_channel_details_foreach (TpChannelIface *chan,
                                     gpointer data)
{
  GPtrArray *details = data;

  g_ptr_array_add (details, get_channel_details (G_OBJECT (chan)));
}


static void
manager_get_channel_details_foreach (TpExportableChannel *chan,
                                     gpointer data)
{
  GPtrArray *details = data;

  g_ptr_array_add (details, get_channel_details (G_OBJECT (chan)));
}


static GPtrArray *
conn_requests_get_channel_details (TpBaseConnection *self)
{
  TpBaseConnectionPrivate *priv = self->priv;
  /* guess that each ChannelManager and each ChannelFactory has two
   * channels, on average */
  GPtrArray *details = g_ptr_array_sized_new (priv->channel_managers->len * 2
      + priv->channel_factories->len * 2);
  guint i;

  for (i = 0; i < priv->channel_factories->len; i++)
    {
      TpChannelFactoryIface *factory = TP_CHANNEL_FACTORY_IFACE (
          g_ptr_array_index (priv->channel_factories, i));

      tp_channel_factory_iface_foreach (factory,
          factory_get_channel_details_foreach, details);
    }

  for (i = 0; i < priv->channel_managers->len; i++)
    {
      TpChannelManager *manager = TP_CHANNEL_MANAGER (
          g_ptr_array_index (priv->channel_managers, i));

      tp_channel_manager_foreach_channel (manager,
          manager_get_channel_details_foreach, details);
    }

  return details;
}


static void
get_requestables_foreach (TpChannelManager *manager,
                          GHashTable *fixed_properties,
                          const gchar * const *allowed_properties,
                          gpointer user_data)
{
  GPtrArray *details = user_data;
  GValueArray *requestable = g_value_array_new (2);
  GValue *value;

  g_value_array_append (requestable, NULL);
  value = g_value_array_get_nth (requestable, 0);
  g_value_init (value, TP_HASH_TYPE_CHANNEL_CLASS);
  g_value_set_boxed (value, fixed_properties);

  g_value_array_append (requestable, NULL);
  value = g_value_array_get_nth (requestable, 1);
  g_value_init (value, G_TYPE_STRV);
  g_value_set_boxed (value, allowed_properties);

  g_ptr_array_add (details, requestable);
}


static GPtrArray *
conn_requests_get_requestables (TpBaseConnection *self)
{
  TpBaseConnectionPrivate *priv = self->priv;
  /* generously guess that each ChannelManager has about 2 ChannelClasses */
  GPtrArray *details = g_ptr_array_sized_new (priv->channel_managers->len * 2);
  guint i;

  for (i = 0; i < priv->channel_managers->len; i++)
    {
      TpChannelManager *manager = TP_CHANNEL_MANAGER (
          g_ptr_array_index (priv->channel_managers, i));

      tp_channel_manager_foreach_channel_class (manager,
          get_requestables_foreach, details);
    }

  return details;
}


static void
conn_requests_get_dbus_property (GObject *object,
                                 GQuark interface,
                                 GQuark name,
                                 GValue *value,
                                 gpointer unused G_GNUC_UNUSED)
{
  TpBaseConnection *self = TP_BASE_CONNECTION (object);

  g_return_if_fail (interface == TP_IFACE_QUARK_CONNECTION_INTERFACE_REQUESTS);

  if (name == g_quark_from_static_string ("Channels"))
    {
      g_value_take_boxed (value, conn_requests_get_channel_details (self));
    }
  else if (name == g_quark_from_static_string ("RequestableChannelClasses"))
    {
      g_value_take_boxed (value, conn_requests_get_requestables (self));
    }
  else
    {
      g_return_if_reached ();
    }
}


static void
tp_base_connection_class_init (TpBaseConnectionClass *klass)
{
  static TpDBusPropertiesMixinPropImpl connection_properties[] = {
      { "SelfHandle", "self-handle", NULL },
      { NULL }
  };
  static TpDBusPropertiesMixinPropImpl requests_properties[] = {
        { "Channels", NULL, NULL },
        { "RequestableChannelClasses", NULL, NULL },
        { NULL }
  };
  GParamSpec *param_spec;
  GObjectClass *object_class = G_OBJECT_CLASS (klass);

  DEBUG("Initializing (TpBaseConnectionClass *)%p", klass);

  g_type_class_add_private (klass, sizeof (TpBaseConnectionPrivate));
  object_class->dispose = tp_base_connection_dispose;
  object_class->finalize = tp_base_connection_finalize;
  object_class->constructor = tp_base_connection_constructor;
  object_class->get_property = tp_base_connection_get_property;
  object_class->set_property = tp_base_connection_set_property;

  /**
   * TpBaseConnection:protocol:
   *
   * Identifier used in the Telepathy protocol when this connection's protocol
   * name is required.
   */
  param_spec = g_param_spec_string ("protocol",
      "Telepathy identifier for protocol",
      "Identifier string used when the protocol name is required.",
      NULL,
      G_PARAM_CONSTRUCT_ONLY | G_PARAM_READWRITE |
      G_PARAM_STATIC_NAME | G_PARAM_STATIC_BLURB | G_PARAM_STATIC_NICK);
  g_object_class_install_property (object_class, PROP_PROTOCOL, param_spec);

  /**
   * TpBaseConnection:self-handle:
   *
   * The handle of type %TP_HANDLE_TYPE_CONTACT representing the local user.
   * Must be set nonzero by the subclass before moving to state CONNECTED.
   *
   * Since: 0.7.15
   */
  param_spec = g_param_spec_uint ("self-handle",
      "Connection.SelfHandle",
      "The handle of type %TP_HANDLE_TYPE_CONTACT representing the local user.",
      0, G_MAXUINT, 0,
      G_PARAM_READWRITE |
      G_PARAM_STATIC_BLURB);
  g_object_class_install_property (object_class, PROP_SELF_HANDLE, param_spec);

  /* signal definitions */

  /**
   * TpBaseConnection::shutdown-finished:
   *
   * Emitted by tp_base_connection_finish_shutdown() when the underlying
   * network connection has been closed; #TpBaseConnectionManager listens
   * for this signal and removes connections from its table of active
   * connections when it is received.
   */
  signals[SHUTDOWN_FINISHED] =
    g_signal_new ("shutdown-finished",
                  G_OBJECT_CLASS_TYPE (klass),
                  G_SIGNAL_RUN_LAST | G_SIGNAL_DETAILED,
                  0,
                  NULL, NULL,
                  g_cclosure_marshal_VOID__VOID,
                  G_TYPE_NONE, 0);

  tp_dbus_properties_mixin_class_init (object_class, 0);
  tp_dbus_properties_mixin_implement_interface (object_class,
      TP_IFACE_QUARK_CONNECTION,
      tp_dbus_properties_mixin_getter_gobject_properties, NULL,
      connection_properties);
  tp_dbus_properties_mixin_implement_interface (object_class,
      TP_IFACE_QUARK_CONNECTION_INTERFACE_REQUESTS,
      conn_requests_get_dbus_property, NULL,
      requests_properties);
}

static void
tp_base_connection_init (TpBaseConnection *self)
{
  TpBaseConnectionPrivate *priv = G_TYPE_INSTANCE_GET_PRIVATE (self,
      TP_TYPE_BASE_CONNECTION, TpBaseConnectionPrivate);
  guint i;

  DEBUG("Initializing (TpBaseConnection *)%p", self);

  self->priv = priv;

  self->status = TP_INTERNAL_CONNECTION_STATUS_NEW;

  for (i = 0; i < NUM_TP_HANDLE_TYPES; i++)
    {
      priv->handles[i] = NULL;
    }

  priv->channel_requests = g_ptr_array_new ();
}

static gchar *
squash_name (const gchar *name, guint length)
{
  GChecksum *checksum;
  gchar *squashed;

  g_assert (length >= 10);
  checksum = g_checksum_new (G_CHECKSUM_MD5);
  g_checksum_update (checksum, (guchar *) name, -1);
  squashed = g_strdup_printf (
      "%.*s_%.8s", length - 9, name, g_checksum_get_string (checksum));
  g_checksum_free (checksum);
  return squashed;
}

/**
 * tp_base_connection_register:
 * @self: A connection
 * @cm_name: The name of the connection manager in the Telepathy protocol
 * @bus_name: Used to return the bus name corresponding to the connection
 *  if %TRUE is returned; must not be %NULL. To be freed by the caller.
 * @object_path: Used to return the object path of the connection if
 *  %TRUE is returned; must not be %NULL. To be freed by the caller.
 * @error: Used to return an error if %FALSE is returned; may be %NULL
 *
 * Make the connection object appear on the bus, returning the bus
 * name and object path used. If %TRUE is returned, the connection owns the
 * bus name, and will release it when destroyed.
 *
 * Returns: %TRUE on success, %FALSE on error.
 */
gboolean
tp_base_connection_register (TpBaseConnection *self,
                             const gchar *cm_name,
                             gchar **bus_name,
                             gchar **object_path,
                             GError **error)
{
  TpBaseConnectionClass *cls = TP_BASE_CONNECTION_GET_CLASS (self);
  TpBaseConnectionPrivate *priv = self->priv;
  gchar *tmp;
  gchar *safe_proto;
  gchar *unique_name;
  guint prefix_length;
  const guint dbus_max_name_length = 255;

  g_return_val_if_fail (TP_IS_BASE_CONNECTION (self), FALSE);
  g_return_val_if_fail (cm_name != NULL, FALSE);
  g_return_val_if_fail (bus_name != NULL, FALSE);
  g_return_val_if_fail (object_path != NULL, FALSE);

  if (tp_connection_manager_check_valid_protocol_name (priv->protocol, NULL))
    {
      safe_proto = g_strdelimit (g_strdup (priv->protocol), "-", '_');
    }
  else
    {
      g_warning ("Protocol name %s is not valid - should match "
          "[A-Za-z][A-Za-z0-9-]+", priv->protocol);
      safe_proto = tp_escape_as_identifier (priv->protocol);
    }

  /* Plus two for the dots. */
  prefix_length = strlen (TP_CONN_BUS_NAME_BASE) +
      strlen (cm_name) + strlen (safe_proto) + 2;

  if (cls->get_unique_connection_name)
    {

      tmp = cls->get_unique_connection_name (self);
      g_assert (tmp != NULL);
      unique_name = tp_escape_as_identifier (tmp);
      g_free (tmp);

      if (prefix_length + strlen (unique_name) > dbus_max_name_length)
        {
          /* Is prefix is too long to make reasonable bus name? Ten = one
           * character of the original unique name plus underscore plus
           * 8-character hash.
           */
          if (prefix_length >= dbus_max_name_length - 10)
            {
              g_warning (
                  "Couldn't fit CM name + protocol name + unique name into "
                  "255 characters.");
              g_free (unique_name);
              return FALSE;
            }

          tmp = unique_name;
          unique_name = squash_name (
              tmp, dbus_max_name_length - prefix_length);
          g_free (tmp);
        }
    }
  else
    {
      unique_name = g_strdup_printf ("_%p", self);
    }

  if (priv->bus_proxy == NULL)
    priv->bus_proxy = tp_dbus_daemon_dup (error);

  if (priv->bus_proxy == NULL)
    return FALSE;

  self->bus_name = g_strdup_printf (TP_CONN_BUS_NAME_BASE "%s.%s.%s",
      cm_name, safe_proto, unique_name);
  g_assert (strlen (self->bus_name) <= 255);
  self->object_path = g_strdup_printf (TP_CONN_OBJECT_PATH_BASE "%s/%s/%s",
      cm_name, safe_proto, unique_name);

  g_free (safe_proto);
  g_free (unique_name);

  if (!tp_dbus_daemon_request_name (priv->bus_proxy, self->bus_name, FALSE,
        error))
    {
      g_free (self->bus_name);
      self->bus_name = NULL;
      return FALSE;
    }

  DEBUG ("bus name %s", self->bus_name);

  dbus_g_connection_register_g_object (
      tp_proxy_get_dbus_connection (priv->bus_proxy), self->object_path,
      G_OBJECT (self));

  DEBUG ("object path %s", self->object_path);

  *bus_name = g_strdup (self->bus_name);
  *object_path = g_strdup (self->object_path);

  return TRUE;
}

static void
tp_base_connection_close_all_channels (TpBaseConnection *self)
{
  TpBaseConnectionPrivate *priv = self->priv;

  /* We deliberately don't iterate over channel managers here -
   * they don't need this, and are expected to listen to
   * TpSvcConnection::status-changed on the connection for themselves.
   */

  /* trigger close_all on all channel factories */
  g_ptr_array_foreach (priv->channel_factories, (GFunc)
      tp_channel_factory_iface_close_all, NULL);
}

/* D-Bus methods on Connection interface ----------------------------*/

static inline TpConnectionStatusReason
conn_status_reason_from_g_error (GError *error)
{
  if (error->domain == TP_ERRORS)
    {
      switch (error->code)
        {
        case TP_ERROR_NETWORK_ERROR:
          return TP_CONNECTION_STATUS_REASON_NETWORK_ERROR;
        case TP_ERROR_PERMISSION_DENIED:
          return TP_CONNECTION_STATUS_REASON_AUTHENTICATION_FAILED;
        }
    }

  return TP_CONNECTION_STATUS_REASON_NONE_SPECIFIED;
}

/**
 * tp_base_connection_connect:
 *
 * @context: Used to return the result onto D-Bus.
 *
 * Implements D-Bus method Connect
 * on interface org.freedesktop.Telepathy.Connection
 */
static void
tp_base_connection_connect (TpSvcConnection *iface,
                            DBusGMethodInvocation *context)
{
  TpBaseConnection *self = TP_BASE_CONNECTION (iface);
  TpBaseConnectionClass *cls = TP_BASE_CONNECTION_GET_CLASS (self);
  GError *error = NULL;

  g_assert (TP_IS_BASE_CONNECTION (self));

  if (self->status == TP_INTERNAL_CONNECTION_STATUS_NEW)
    {
      if (cls->start_connecting (self, &error))
        {
          if (self->status == TP_INTERNAL_CONNECTION_STATUS_NEW)
            {
              tp_base_connection_change_status (self,
                TP_CONNECTION_STATUS_CONNECTING,
                TP_CONNECTION_STATUS_REASON_REQUESTED);
            }
        }
      else
        {
          if (self->status != TP_CONNECTION_STATUS_DISCONNECTED)
            {
              tp_base_connection_change_status (self,
                TP_CONNECTION_STATUS_DISCONNECTED,
                conn_status_reason_from_g_error (error));
            }
          dbus_g_method_return_error (context, error);
          g_error_free (error);
          return;
        }
    }
  tp_svc_connection_return_from_connect (context);
}


/**
 * tp_base_connection_disconnect
 *
 * Implements D-Bus method Disconnect
 * on interface org.freedesktop.Telepathy.Connection
 *
 * @error: Used to return a pointer to a GError detailing any error
 *         that occurred, D-Bus will throw the error only if this
 *         function returns FALSE.
 *
 * Returns: TRUE if successful, FALSE if an error was thrown.
 */
static void
tp_base_connection_disconnect (TpSvcConnection *iface,
                               DBusGMethodInvocation *context)
{
  TpBaseConnection *self = TP_BASE_CONNECTION (iface);

  g_assert (TP_IS_BASE_CONNECTION (self));

  if (self->priv->disconnect_requests != NULL)
    {
      g_assert (self->status == TP_CONNECTION_STATUS_DISCONNECTED);
      g_ptr_array_add (self->priv->disconnect_requests, context);
      return;
    }

  if (self->status == TP_CONNECTION_STATUS_DISCONNECTED)
    {
      /* status DISCONNECTED and disconnect_requests NULL => already dead */
      tp_svc_connection_return_from_disconnect (context);
      return;
    }

  self->priv->disconnect_requests = g_ptr_array_sized_new (1);
  g_ptr_array_add (self->priv->disconnect_requests, context);

  tp_base_connection_change_status (self,
      TP_CONNECTION_STATUS_DISCONNECTED,
      TP_CONNECTION_STATUS_REASON_REQUESTED);
}

/**
 * tp_base_connection_get_interfaces
 *
 * Implements D-Bus method GetInterfaces
 * on interface org.freedesktop.Telepathy.Connection
 */
static void
tp_base_connection_get_interfaces (TpSvcConnection *iface,
                                   DBusGMethodInvocation *context)
{
  TpBaseConnection *self = TP_BASE_CONNECTION (iface);
  TpBaseConnectionPrivate *priv;
  TpBaseConnectionClass *klass;
  const gchar **interfaces;

  g_assert (TP_IS_BASE_CONNECTION (self));

  priv = self->priv;
  klass = TP_BASE_CONNECTION_GET_CLASS (self);

  if (priv->interfaces)
    {
      /* There are some extra interfaces for this connection */
      interfaces = (const gchar **)(priv->interfaces->data);
    }
  else
    {
      /* We only have the interfaces that are always present.
       * Instead of bothering to duplicate the static
       * array into the GArray, we just use it directly */
      interfaces = klass->interfaces_always_present;
    }

  tp_svc_connection_return_from_get_interfaces (context, interfaces);
}

/**
 * tp_base_connection_get_protocol
 *
 * Implements D-Bus method GetProtocol
 * on interface org.freedesktop.Telepathy.Connection
 *
 * @error: Used to return a pointer to a GError detailing any error
 *         that occurred, D-Bus will throw the error only if this
 *         function returns FALSE.
 *
 * Returns: TRUE if successful, FALSE if an error was thrown.
 */
static void
tp_base_connection_get_protocol (TpSvcConnection *iface,
                                 DBusGMethodInvocation *context)
{
  TpBaseConnection *self = TP_BASE_CONNECTION (iface);
  TpBaseConnectionPrivate *priv;

  g_assert (TP_IS_BASE_CONNECTION (self));

  TP_BASE_CONNECTION_ERROR_IF_NOT_CONNECTED (self, context);

  priv = self->priv;

  tp_svc_connection_return_from_get_protocol (context, priv->protocol);
}

/**
 * tp_base_connection_dbus_get_self_handle
 *
 * Implements D-Bus method GetSelfHandle
 * on interface org.freedesktop.Telepathy.Connection
 */
static void
tp_base_connection_dbus_get_self_handle (TpSvcConnection *iface,
                                         DBusGMethodInvocation *context)
{
  TpBaseConnection *self = TP_BASE_CONNECTION (iface);

  g_assert (TP_IS_BASE_CONNECTION (self));

  TP_BASE_CONNECTION_ERROR_IF_NOT_CONNECTED (self, context);

  tp_svc_connection_return_from_get_self_handle (
      context, self->self_handle);
}

/**
 * tp_base_connection_get_status
 *
 * Implements D-Bus method GetStatus
 * on interface org.freedesktop.Telepathy.Connection
 */
static void
tp_base_connection_get_status (TpSvcConnection *iface,
                               DBusGMethodInvocation *context)
{
  TpBaseConnection *self = TP_BASE_CONNECTION (iface);

  if (self->status == TP_INTERNAL_CONNECTION_STATUS_NEW)
    {
      tp_svc_connection_return_from_get_status (
          context, TP_CONNECTION_STATUS_DISCONNECTED);
    }
  else
    {
      tp_svc_connection_return_from_get_status (
          context, self->status);
    }
}


#undef DEBUG_FLAG
#define DEBUG_FLAG TP_DEBUG_HANDLES
#include "telepathy-glib/debug-internal.h"

/**
 * tp_base_connection_hold_handles
 *
 * Implements D-Bus method HoldHandles
 * on interface org.freedesktop.Telepathy.Connection
 *
 * @context: The D-Bus invocation context to use to return values
 *           or throw an error.
 */
static void
tp_base_connection_hold_handles (TpSvcConnection *iface,
                                 guint handle_type,
                                 const GArray *handles,
                                 DBusGMethodInvocation *context)
{
  TpBaseConnection *self = TP_BASE_CONNECTION (iface);
  TpBaseConnectionPrivate *priv;
  GError *error = NULL;
  gchar *sender;

  g_assert (TP_IS_BASE_CONNECTION (self));

  priv = self->priv;

  TP_BASE_CONNECTION_ERROR_IF_NOT_CONNECTED (self, context);

  if (!tp_handles_supported_and_valid (priv->handles,
        handle_type, handles, FALSE, &error))
    {
      dbus_g_method_return_error (context, error);
      g_error_free (error);
      return;
    }

  sender = dbus_g_method_get_sender (context);

  DEBUG ("%u handles of type %u, for %s", handles->len, handle_type, sender);

  if (!tp_handles_client_hold (priv->handles[handle_type], sender,
        handles, &error))
    {
      dbus_g_method_return_error (context, error);
      g_error_free (error);
      g_free (sender);
      return;
    }

  g_free (sender);

  tp_svc_connection_return_from_hold_handles (context);
}

/**
 * tp_base_connection_inspect_handles
 *
 * Implements D-Bus method InspectHandles
 * on interface org.freedesktop.Telepathy.Connection
 *
 * Returns: TRUE if successful, FALSE if an error was thrown.
 */
static void
tp_base_connection_inspect_handles (TpSvcConnection *iface,
                                    guint handle_type,
                                    const GArray *handles,
                                    DBusGMethodInvocation *context)
{
  TpBaseConnection *self = TP_BASE_CONNECTION (iface);
  TpBaseConnectionPrivate *priv = self->priv;
  GError *error = NULL;
  const gchar **ret;
  guint i;

  g_assert (TP_IS_BASE_CONNECTION (self));

  TP_BASE_CONNECTION_ERROR_IF_NOT_CONNECTED (self, context);

  if (!tp_handles_supported_and_valid (priv->handles,
        handle_type, handles, FALSE, &error))
    {
      dbus_g_method_return_error (context, error);

      g_error_free (error);

      return;
    }

  ret = g_new (const gchar *, handles->len + 1);

  for (i = 0; i < handles->len; i++)
    {
      TpHandle handle;
      const gchar *tmp;

      handle = g_array_index (handles, TpHandle, i);
      tmp = tp_handle_inspect (priv->handles[handle_type], handle);
      g_assert (tmp != NULL);

      ret[i] = tmp;
    }

  ret[i] = NULL;

  tp_svc_connection_return_from_inspect_handles (context, ret);

  g_free (ret);
}

#undef DEBUG_FLAG
#define DEBUG_FLAG TP_DEBUG_CONNECTION
#include "telepathy-glib/debug-internal.h"

/**
 * list_channel_factory_foreach_one:
 * @chan: a channel
 * @data: a GPtrArray in which channel information should be stored
 *
 * Called by the exported ListChannels function for each channel in a channel
 * factory, this should add to the GPtrArray (in the data pointer) a
 * GValueArray containing the following:
 *  a D-Bus object path for the channel object on this service
 *  a D-Bus interface name representing the channel type
 *  an integer representing the handle type this channel communicates with,
 *    or zero
 *  an integer handle representing the contact, room or list this channel
 *    communicates with, or zero
 */
static void
list_channel_factory_foreach_one (TpChannelIface *chan,
                                  gpointer data)
{
  GObject *channel = G_OBJECT (chan);
  GPtrArray *values = (GPtrArray *) data;
  gchar *path, *type;
  guint handle_type, handle;
  GValue *entry = tp_dbus_specialized_value_slice_new
      (TP_STRUCT_TYPE_CHANNEL_INFO);

  g_object_get (channel,
      "object-path", &path,
      "channel-type", &type,
      "handle-type", &handle_type,
      "handle", &handle,
      NULL);

  dbus_g_type_struct_set (entry,
      0, path,
      1, type,
      2, handle_type,
      3, handle,
      G_MAXUINT);

  g_ptr_array_add (values, entry);

  g_free (path);
  g_free (type);
}


/**
 * list_channel_manager_foreach_one:
 * @chan: a channel
 * @data: a GPtrArray in which channel information should be stored
 *
 * Called by the exported ListChannels function for each channel in a channel
 * manager, this should add to the GPtrArray (in the data pointer) a
 * GValueArray containing the following:
 *  a D-Bus object path for the channel object on this service
 *  a D-Bus interface name representing the channel type
 *  an integer representing the handle type this channel communicates with,
 *    or zero
 *  an integer handle representing the contact, room or list this channel
 *    communicates with, or zero
 */
static void
list_channel_manager_foreach_one (TpExportableChannel *channel,
                                  gpointer data)
{
  GPtrArray *values = (GPtrArray *) data;
  gchar *path, *type;
  guint handle_type, handle;
  GValue *entry = tp_dbus_specialized_value_slice_new
      (TP_STRUCT_TYPE_CHANNEL_INFO);

  g_assert (TP_IS_EXPORTABLE_CHANNEL (channel));

  exportable_channel_get_old_info (channel, &path, &type, &handle_type,
      &handle);

  dbus_g_type_struct_set (entry,
      0, path,
      1, type,
      2, handle_type,
      3, handle,
      G_MAXUINT);

  g_ptr_array_add (values, entry);

  g_free (path);
  g_free (type);
}


static void
tp_base_connection_list_channels (TpSvcConnection *iface,
                                  DBusGMethodInvocation *context)
{
  TpBaseConnection *self = TP_BASE_CONNECTION (iface);
  TpBaseConnectionPrivate *priv;
  GPtrArray *channels, *values;
  guint i;

  g_assert (TP_IS_BASE_CONNECTION (self));

  priv = self->priv;

  TP_BASE_CONNECTION_ERROR_IF_NOT_CONNECTED (self, context);

  /* I think on average, each factory will have 2 channels :D */
  values = g_ptr_array_sized_new (priv->channel_factories->len * 2
      + priv->channel_managers->len * 2);

  for (i = 0; i < priv->channel_factories->len; i++)
    {
      TpChannelFactoryIface *factory = g_ptr_array_index
        (priv->channel_factories, i);

      tp_channel_factory_iface_foreach (factory,
          list_channel_factory_foreach_one, values);
    }

  for (i = 0; i < priv->channel_managers->len; i++)
    {
      TpChannelManager *manager = g_ptr_array_index
        (priv->channel_managers, i);

      tp_channel_manager_foreach_channel (manager,
          list_channel_manager_foreach_one, values);
    }

  channels = g_ptr_array_sized_new (values->len);

  for (i = 0; i < values->len; i++)
    {
      g_ptr_array_add (channels, g_value_get_boxed (g_ptr_array_index
            (values, i)));
    }

  tp_svc_connection_return_from_list_channels (context, channels);

  g_ptr_array_free (channels, TRUE);
  for (i = 0; i < values->len; i++)
    {
      tp_g_value_slice_free (g_ptr_array_index (values, i));
    }
  g_ptr_array_free (values, TRUE);
}


/**
 * tp_base_connection_request_channel
 *
 * Implements D-Bus method RequestChannel
 * on interface org.freedesktop.Telepathy.Connection
 *
 * @context: The D-Bus invocation context to use to return values
 *           or throw an error.
 */
static void
tp_base_connection_request_channel (TpSvcConnection *iface,
                                    const gchar *type,
                                    guint handle_type,
                                    guint handle,
                                    gboolean suppress_handler,
                                    DBusGMethodInvocation *context)
{
  TpBaseConnection *self = TP_BASE_CONNECTION (iface);
  TpBaseConnectionPrivate *priv;
  TpChannelFactoryRequestStatus status =
    TP_CHANNEL_FACTORY_REQUEST_STATUS_NOT_IMPLEMENTED;
  GError *error = NULL;
  guint i;
  ChannelRequest *request;
  GHashTable *request_properties;
  gboolean claimed_by_channel_manager = FALSE;

  g_assert (TP_IS_BASE_CONNECTION (self));

  priv = self->priv;

  TP_BASE_CONNECTION_ERROR_IF_NOT_CONNECTED (self, context);

  if (handle_type == TP_HANDLE_TYPE_NONE)
    {
      if (handle != 0)
        {
          GError e = { TP_ERRORS, TP_ERROR_INVALID_ARGUMENT,
              "When handle type is NONE, handle must be 0" };

          dbus_g_method_return_error (context, &e);
          return;
        }
    }
  else
    {
      TpHandleRepoIface *handle_repo = tp_base_connection_get_handles (self,
          handle_type);

      if (handle_repo == NULL)
        {
          GError e = { TP_ERRORS, TP_ERROR_NOT_AVAILABLE,
              "Handle type not supported by this connection manager" };

          dbus_g_method_return_error (context, &e);
          return;
        }

      if (!tp_handle_is_valid (handle_repo, handle, &error))
        {
          dbus_g_method_return_error (context, error);
          g_error_free (error);
          return;
        }
    }

  request = channel_request_new (context, METHOD_REQUEST_CHANNEL,
      type, handle_type, handle, suppress_handler);
  g_ptr_array_add (priv->channel_requests, request);

  /* First try the channel managers */

  request_properties = tp_asv_new (
      TP_PROP_CHANNEL_CHANNEL_TYPE, G_TYPE_STRING, type,
      TP_PROP_CHANNEL_TARGET_HANDLE_TYPE, G_TYPE_UINT, handle_type,
      NULL);

  if (handle != 0)
    {
      g_hash_table_insert (request_properties,
          TP_PROP_CHANNEL_TARGET_HANDLE,
          tp_g_value_slice_new_uint (handle));
    }

  for (i = 0; i < priv->channel_managers->len; i++)
    {
      TpChannelManager *manager = TP_CHANNEL_MANAGER (
          g_ptr_array_index (priv->channel_managers, i));

      if (tp_channel_manager_request_channel (manager, request,
            request_properties))
        {
          claimed_by_channel_manager = TRUE;
          break;
        }
    }

  g_hash_table_destroy (request_properties);

  if (claimed_by_channel_manager)
    return;

  /* OK, none of them wanted it. Now try the channel factories */

  for (i = 0; i < priv->channel_factories->len; i++)
    {
      TpChannelFactoryIface *factory = g_ptr_array_index
        (priv->channel_factories, i);
      TpChannelFactoryRequestStatus cur_status;
      TpChannelIface *chan = NULL;

      cur_status = tp_channel_factory_iface_request (factory, type,
          (TpHandleType) handle_type, handle, request, &chan, &error);

      switch (cur_status)
        {
        case TP_CHANNEL_FACTORY_REQUEST_STATUS_EXISTING:
          {
            g_assert (NULL != chan);
            factory_satisfy_requests (self, factory, chan, request, FALSE);
            /* factory_satisfy_requests should remove the request */
            g_assert (!tp_g_ptr_array_contains (priv->channel_requests,
                  request));
            return;
          }
        case TP_CHANNEL_FACTORY_REQUEST_STATUS_CREATED:
          g_assert (NULL != chan);
          /* the signal handler should have completed the queued request
           * and freed the ChannelRequest already */
          g_assert (!tp_g_ptr_array_contains (priv->channel_requests,
                request));
          return;
        case TP_CHANNEL_FACTORY_REQUEST_STATUS_QUEUED:
          DEBUG ("queued request, channel_type=%s, handle_type=%u, "
              "handle=%u, suppress_handler=%u", type, handle_type,
              handle, suppress_handler);
          return;
        case TP_CHANNEL_FACTORY_REQUEST_STATUS_ERROR:
          /* pass through error */
          goto ERROR;
        default:
          /* always return the most specific error */
          if (cur_status > status)
            status = cur_status;
        }
    }

  switch (status)
    {
      case TP_CHANNEL_FACTORY_REQUEST_STATUS_INVALID_HANDLE:
        DEBUG ("invalid handle %u", handle);

        error = g_error_new (TP_ERRORS, TP_ERROR_INVALID_HANDLE,
                             "invalid handle %u", handle);

        break;

      case TP_CHANNEL_FACTORY_REQUEST_STATUS_NOT_AVAILABLE:
        DEBUG ("requested channel is unavailable with "
                 "handle type %u", handle_type);

        error = g_error_new (TP_ERRORS, TP_ERROR_NOT_AVAILABLE,
                             "requested channel is not available with "
                             "handle type %u", handle_type);

        break;

      case TP_CHANNEL_FACTORY_REQUEST_STATUS_NOT_IMPLEMENTED:
        DEBUG ("unsupported channel type %s", type);

        error = g_error_new (TP_ERRORS, TP_ERROR_NOT_IMPLEMENTED,
                             "unsupported channel type %s", type);

        break;

      default:
        g_assert_not_reached ();
    }

ERROR:
  g_assert (error != NULL);
  dbus_g_method_return_error (request->context, error);
  request->context = NULL;
  g_error_free (error);

  g_ptr_array_remove (priv->channel_requests, request);
  channel_request_free (request);
}


#undef DEBUG_FLAG
#define DEBUG_FLAG TP_DEBUG_HANDLES
#include "telepathy-glib/debug-internal.h"

/**
 * tp_base_connection_release_handles
 *
 * Implements D-Bus method ReleaseHandles
 * on interface org.freedesktop.Telepathy.Connection
 *
 * @context: The D-Bus invocation context to use to return values
 *           or throw an error.
 */
static void
tp_base_connection_release_handles (TpSvcConnection *iface,
                                    guint handle_type,
                                    const GArray * handles,
                                    DBusGMethodInvocation *context)
{
  TpBaseConnection *self = TP_BASE_CONNECTION (iface);
  TpBaseConnectionPrivate *priv = self->priv;
  char *sender;
  GError *error = NULL;

  g_assert (TP_IS_BASE_CONNECTION (self));

  TP_BASE_CONNECTION_ERROR_IF_NOT_CONNECTED (self, context);

  if (!tp_handles_supported_and_valid (priv->handles,
        handle_type, handles, FALSE, &error))
    {
      dbus_g_method_return_error (context, error);
      g_error_free (error);
      return;
    }

  sender = dbus_g_method_get_sender (context);
  DEBUG ("%u handles of type %u, for %s", handles->len, handle_type, sender);

  if (!tp_handles_client_release (priv->handles[handle_type],
        sender, handles, &error))
    {
      dbus_g_method_return_error (context, error);
      g_error_free (error);
      g_free (sender);
      return;
    }

  g_free (sender);

  tp_svc_connection_return_from_release_handles (context);
}


/**
 * tp_base_connection_dbus_request_handles:
 * @iface: A pointer to #TpBaseConnection, cast to a pointer to
 *  #TpSvcConnection
 * @handle_type: The handle type (#TpHandleType) as a guint
 * @names: A strv of handle names
 * @context: The dbus-glib method invocation context
 *
 * Implements D-Bus method RequestHandles on interface
 * org.freedesktop.Telepathy.Connection. Exported so subclasses can
 * use it as a basis for their own implementations (for instance,
 * at the time of writing Gabble's GabbleConnection does its own processing
 * for room handles, in order to validate them asynchronously, but delegates
 * to this implementation for all other types).
 */
void
tp_base_connection_dbus_request_handles (TpSvcConnection *iface,
                                         guint handle_type,
                                         const gchar **names,
                                         DBusGMethodInvocation *context)
{
  TpBaseConnection *self = TP_BASE_CONNECTION (iface);
  TpHandleRepoIface *handle_repo = tp_base_connection_get_handles (self,
      handle_type);
  guint count = 0, i;
  const gchar **cur_name;
  GError *error = NULL;
  GArray *handles = NULL;
  gchar *sender;

  g_return_if_fail (TP_IS_BASE_CONNECTION (self));
  TP_BASE_CONNECTION_ERROR_IF_NOT_CONNECTED (self, context);

  for (cur_name = names; *cur_name != NULL; cur_name++)
    {
      count++;
    }

  if (!tp_handle_type_is_valid (handle_type, &error))
    {
      g_assert (error != NULL);
      goto out;
    }

  if (handle_repo == NULL)
    {
      DEBUG ("unimplemented handle type %u", handle_type);

      error = g_error_new (TP_ERRORS, TP_ERROR_NOT_IMPLEMENTED,
                          "unimplemented handle type %u", handle_type);
      goto out;
    }

  handles = g_array_sized_new (FALSE, FALSE, sizeof (guint), count);

  for (i = 0; i < count; i++)
    {
      TpHandle handle;
      const gchar *name = names[i];

      handle = tp_handle_ensure (handle_repo, name, NULL, &error);

      if (handle == 0)
        {
          DEBUG("RequestHandles of type %d failed because '%s' is invalid: %s",
              handle_type, name, error->message);
          g_assert (error != NULL);
          goto out;
        }
      g_array_append_val (handles, handle);
    }

  sender = dbus_g_method_get_sender (context);
  DEBUG ("%u handles of type %u, for %s", handles->len, handle_type, sender);

  if (!tp_handles_client_hold (handle_repo, sender, handles, &error))
    {
      g_assert (error != NULL);
    }
  g_free (sender);

out:
  if (error == NULL)
    {
      tp_svc_connection_return_from_request_handles (context, handles);
    }
  else
    {
      dbus_g_method_return_error (context, error);
      g_error_free (error);
    }

  if (handles != NULL)
    {
      tp_handles_unref (handle_repo, handles);
      g_array_free (handles, TRUE);
    }
}

#undef DEBUG_FLAG
#define DEBUG_FLAG TP_DEBUG_CONNECTION
#include "telepathy-glib/debug-internal.h"

/**
 * tp_base_connection_get_handles:
 * @self: A connection
 * @handle_type: The handle type
 *
 * <!---->
 *
 * Returns: the handle repository corresponding to the given handle type,
 * or #NULL if it's unsupported or invalid.
 */
TpHandleRepoIface *
tp_base_connection_get_handles (TpBaseConnection *self,
                                TpHandleType handle_type)
{
  g_return_val_if_fail (TP_IS_BASE_CONNECTION (self), NULL);

  if (handle_type >= NUM_TP_HANDLE_TYPES)
    return NULL;

  return self->priv->handles[handle_type];
}


/**
 * tp_base_connection_get_self_handle:
 * @self: A connection
 *
 * Returns the #TpBaseConnection:self-handle property, which is guaranteed not
 * to be 0 once the connection has moved to the CONNECTED state.
 *
 * Returns: the current self handle of the connection.
 *
 * Since: 0.7.15
 */
TpHandle
tp_base_connection_get_self_handle (TpBaseConnection *self)
{
  g_return_val_if_fail (TP_IS_BASE_CONNECTION (self), 0);

  return self->self_handle;
}

/**
 * tp_base_connection_set_self_handle:
 * @self: A connection
 * @self_handle: The new self handle for the connection.
 *
 * Sets the #TpBaseConnection:self-handle property.  self_handle may not be 0
 * once the connection has moved to the CONNECTED state.
 *
 * Since: 0.7.15
 */
void
tp_base_connection_set_self_handle (TpBaseConnection *self,
                                    TpHandle self_handle)
{
  g_object_set (self, "self-handle", self_handle, NULL);
}


/**
 * tp_base_connection_finish_shutdown:
 * @self: The connection
 *
 * Tell the connection manager that this Connection has been disconnected,
 * has emitted StatusChanged and is ready to be removed from D-Bus.
 */
void tp_base_connection_finish_shutdown (TpBaseConnection *self)
{
  GPtrArray *contexts;
  guint i;

  g_return_if_fail (TP_IS_BASE_CONNECTION (self));
  g_return_if_fail (self->status == TP_CONNECTION_STATUS_DISCONNECTED);
  g_return_if_fail (self->priv->disconnect_requests != NULL);

  contexts = self->priv->disconnect_requests;
  self->priv->disconnect_requests = NULL;

  for (i = 0; i < contexts->len; i++)
    {
      tp_svc_connection_return_from_disconnect (g_ptr_array_index (contexts,
            i));
    }

  g_ptr_array_free (contexts, TRUE);

  g_signal_emit (self, signals[SHUTDOWN_FINISHED], 0);
}

/**
 * tp_base_connection_disconnect_with_dbus_error:
 * @self: The connection
 * @error_name: The D-Bus error with which the connection changed status to
 *              Disconnected
 * @details: Further details of the error, as a hash table where the keys
 *           are strings as defined in the Telepathy specification, and the
 *           values are GValues. %NULL is allowed, and treated as empty.
 * @reason: The reason code to use in the StatusChanged signal
 *          (a less specific, non-extensible version of @error_name)
 *
 * Change the status of the connection to %TP_CONNECTION_STATUS_DISCONNECTED,
 * as if by a call to tp_base_connection_change_status(). Before doing so,
 * emit the ConnectionError D-Bus signal to give more details of the error.
 *
 * @details may contain, among other entries, the well-known key
 * "debug-message", whose value should have type G_TYPE_STRING.
 *
 * Since: 0.7.24
 */
void
tp_base_connection_disconnect_with_dbus_error (TpBaseConnection *self,
                                               const gchar *error_name,
                                               GHashTable *details,
                                               TpConnectionStatusReason reason)
{
  GHashTable *dup = NULL;

  g_return_if_fail (TP_IS_BASE_CONNECTION (self));
  g_return_if_fail (tp_dbus_check_valid_interface_name (error_name, NULL));

  if (details == NULL)
    {
      dup = g_hash_table_new (g_str_hash, g_str_equal);
      details = dup;
    }

  tp_svc_connection_emit_connection_error (self, error_name, details);
  tp_base_connection_change_status (self, TP_CONNECTION_STATUS_DISCONNECTED,
      reason);

  if (dup != NULL)
    g_hash_table_destroy (dup);
}

/**
 * tp_base_connection_change_status:
 * @self: The connection
 * @status: The new status
 * @reason: The reason for the status change
 *
 * Change the status of the connection. The allowed state transitions are:
 *
 * <itemizedlist>
 * <listitem>NEW -> CONNECTING</listitem>
 * <listitem>CONNECTING -> CONNECTED</listitem>
 * <listitem>NEW -> CONNECTED (equivalent to both of the above one after the
 * other - see below)</listitem>
 * <listitem>(anything except DISCONNECTED) -> DISCONNECTED</listitem>
 * </itemizedlist>
 *
 * Before the transition to CONNECTED, the implementation must have discovered
 * the handle for the local user, obtained a reference to that handle and
 * stored it in the @self_handle member of #TpBaseConnection.
 *
 * Changing from NEW to CONNECTED is implemented by doing the transition from
 * NEW to CONNECTING, followed by the transition from CONNECTING to CONNECTED;
 * it's exactly equivalent to calling tp_base_connection_change_status for
 * those two transitions one after the other.
 *
 * Any other valid transition does the following, in this order:
 *
 * <itemizedlist>
 * <listitem>Update the @status member of #TpBaseConnection</listitem>
 * <listitem>If the new state is DISCONNECTED, call the close_all_channels
 * callback on all channel factories</listitem>
 * <listitem>Emit the D-Bus StatusChanged signal</listitem>
 * <listitem>Call the subclass' status change callback</listitem>
 * <listitem>Call the channel factories' status change callbacks</listitem>
 * <listitem>If the new state is DISCONNECTED, call the subclass'
 * @shut_down callback</listitem>
 * </itemizedlist>
 *
 * Changed in 0.7.35: the @self_handle member of #TpBaseConnection was
 * previously set to 0 at this stage. It now remains non-zero until the object
 * is disposed.
 */
void
tp_base_connection_change_status (TpBaseConnection *self,
                                  TpConnectionStatus status,
                                  TpConnectionStatusReason reason)
{
  TpBaseConnectionPrivate *priv;
  TpBaseConnectionClass *klass;
  TpConnectionStatus prev_status;

  g_assert (TP_IS_BASE_CONNECTION (self));

  priv = self->priv;
  klass = TP_BASE_CONNECTION_GET_CLASS (self);

  if (self->status == TP_INTERNAL_CONNECTION_STATUS_NEW
      && status == TP_CONNECTION_STATUS_CONNECTED)
    {
      /* going straight from NEW to CONNECTED would cause confusion, so before
       * we do anything else, go via CONNECTING */
      DEBUG("from NEW to CONNECTED: going via CONNECTING first");
      tp_base_connection_change_status (self, TP_CONNECTION_STATUS_CONNECTING,
          reason);
    }

  DEBUG("was %u, now %u, for reason %u", self->status, status, reason);
  g_return_if_fail (status != TP_INTERNAL_CONNECTION_STATUS_NEW);

  if (self->status == status)
    {
      g_warning ("%s: attempted to re-emit the current status %u, reason %u",
          G_STRFUNC, status, reason);
      return;
    }

  prev_status = self->status;
  self->status = status;

  /* make appropriate assertions about our state */
  switch (status)
    {
    case TP_CONNECTION_STATUS_DISCONNECTED:
      /* you can go from any state to DISCONNECTED, except DISCONNECTED;
       * and we already warned and returned if that was the case, so
       * nothing to do here */
      break;
    case TP_CONNECTION_STATUS_CONNECTED:
      /* you can only go to CONNECTED if you're CONNECTING (or NEW, but we
       * covered that by forcing a transition to CONNECTING above) */
      g_return_if_fail (prev_status == TP_CONNECTION_STATUS_CONNECTING);
      /* by the time we go CONNECTED we must have the self handle */
      g_return_if_fail (self->self_handle != 0);
      break;
    case TP_CONNECTION_STATUS_CONNECTING:
      /* you can't go CONNECTING if a connection attempt has been made
       * before */
      g_return_if_fail (prev_status == TP_INTERNAL_CONNECTION_STATUS_NEW);
      break;
    default:
      g_warning ("%s: invalid connection status %d", G_STRFUNC, status);
      g_assert_not_reached ();
      return;
    }

  if (status == TP_CONNECTION_STATUS_DISCONNECTED)
    {
      /* the presence of this array indicates that we are shutting down */
      if (self->priv->disconnect_requests == NULL)
        self->priv->disconnect_requests = g_ptr_array_sized_new (0);

      /* remove all channels and shut down all factories, so we don't get
       * any race conditions where method calls are delivered to a channel
       * after we've started disconnecting
       */
      tp_base_connection_close_all_channels (self);
    }

  DEBUG("emitting status-changed to %u, for reason %u", status, reason);
  tp_svc_connection_emit_status_changed (self, status, reason);

  /* tell subclass and factories about the state change. In the case of
   * disconnection, shut down afterwards */
  switch (status)
    {
    case TP_CONNECTION_STATUS_CONNECTING:
      if (klass->connecting)
        (klass->connecting) (self);
      g_ptr_array_foreach (priv->channel_factories, (GFunc)
          tp_channel_factory_iface_connecting, NULL);
      break;

    case TP_CONNECTION_STATUS_CONNECTED:
      /* the implementation should have ensured we have a valid self_handle
       * before changing the state to CONNECTED */

      g_assert (self->self_handle != 0);
      g_assert (tp_handle_is_valid (priv->handles[TP_HANDLE_TYPE_CONTACT],
                self->self_handle, NULL));
      if (klass->connected)
        (klass->connected) (self);
      g_ptr_array_foreach (priv->channel_factories, (GFunc)
          tp_channel_factory_iface_connected, NULL);
      break;

    case TP_CONNECTION_STATUS_DISCONNECTED:
      /* cancel all queued channel requests that weren't already cancelled by
       * the channel managers.
       */
      if (priv->channel_requests->len > 0)
        {
          g_ptr_array_foreach (priv->channel_requests, (GFunc)
            channel_request_cancel, NULL);
          g_ptr_array_remove_range (priv->channel_requests, 0,
            priv->channel_requests->len);
        }

      if (prev_status != TP_INTERNAL_CONNECTION_STATUS_NEW)
        {
          if (klass->disconnected)
            (klass->disconnected) (self);
          g_ptr_array_foreach (priv->channel_factories, (GFunc)
              tp_channel_factory_iface_disconnected, NULL);
        }
      (klass->shut_down) (self);
      break;

    default:
      g_assert_not_reached ();
    }
}


/**
 * tp_base_connection_add_interfaces:
 * @self: A TpBaseConnection in state #TP_INTERNAL_CONNECTION_STATUS_NEW
 *  or #TP_CONNECTION_STATUS_CONNECTING
 * @interfaces: A %NULL-terminated array of D-Bus interface names, which
 *  must remain valid at least until the connection enters state
 *  #TP_CONNECTION_STATUS_DISCONNECTED (in practice, you should either
 *  use static strings, or use strdup'd strings and free them in the dispose
 *  callback).
 *
 * Add some interfaces to the list supported by this Connection. If you're
 * going to call this function at all, you must do so before moving to state
 * CONNECTED (or DISCONNECTED); if you don't call it, only the set of
 * interfaces always present (@interfaces_always_present in
 * #TpBaseConnectionClass) will be supported.
 */
void
tp_base_connection_add_interfaces (TpBaseConnection *self,
                                   const gchar **interfaces)
{
  guint i, n_new;
  TpBaseConnectionPrivate *priv = self->priv;
  TpBaseConnectionClass *klass = TP_BASE_CONNECTION_GET_CLASS (self);

  g_return_if_fail (TP_IS_BASE_CONNECTION (self));
  g_return_if_fail (self->status != TP_CONNECTION_STATUS_CONNECTED);
  g_return_if_fail (self->status != TP_CONNECTION_STATUS_DISCONNECTED);

  if (interfaces == NULL || interfaces[0] == NULL)
    {
      /* If user tries to add no new interfaces, ignore it */
      return;
    }

  n_new = g_strv_length ((gchar **) interfaces);

  if (priv->interfaces)
    {
      guint size = priv->interfaces->len;

      g_array_set_size (priv->interfaces, size + n_new);
      for (i = 0; i < n_new; i++)
        {
          g_array_index (priv->interfaces, const gchar *, size + i) =
            interfaces[i];
        }
    }
  else
    {
      /* It's the first time anyone has added interfaces - create the array */
      guint n_static = 0;

      if (klass->interfaces_always_present)
        {
          n_static = g_strv_length (
              (gchar **) klass->interfaces_always_present);
        }
      priv->interfaces = g_array_sized_new (TRUE, FALSE, sizeof (gchar *),
          n_static + n_new);
      for (i = 0; i < n_static; i++)
        {
          g_array_append_val (priv->interfaces,
              klass->interfaces_always_present[i]);
        }
      for (i = 0; i < n_new; i++)
        {
          g_array_append_val (priv->interfaces, interfaces[i]);
        }
    }
}


static void
conn_iface_init (gpointer g_iface, gpointer iface_data)
{
  TpSvcConnectionClass *klass = g_iface;

#define IMPLEMENT(prefix,x) tp_svc_connection_implement_##x (klass, \
    tp_base_connection_##prefix##x)
  IMPLEMENT(,connect);
  IMPLEMENT(,disconnect);
  IMPLEMENT(,get_interfaces);
  IMPLEMENT(,get_protocol);
  IMPLEMENT(dbus_,get_self_handle);
  IMPLEMENT(,get_status);
  IMPLEMENT(,hold_handles);
  IMPLEMENT(,inspect_handles);
  IMPLEMENT(,list_channels);
  IMPLEMENT(,request_channel);
  IMPLEMENT(,release_handles);
  IMPLEMENT(dbus_,request_handles);
#undef IMPLEMENT
}


/* The handling of calls to Connection.Interface.Requests.CreateChannel is
 * split into three chained functions, which each call the next function in
 * the chain unless an error has occured.
 */
static void conn_requests_check_basic_properties (TpBaseConnection *self,
    GHashTable *requested_properties, ChannelRequestMethod method,
    DBusGMethodInvocation *context);

static void
conn_requests_requestotron_validate_handle (TpBaseConnection *self,
    GHashTable *requested_properties, ChannelRequestMethod method,
    const gchar *type, TpHandleType target_handle_type,
    TpHandle target_handle, const gchar *target_id,
    DBusGMethodInvocation *context);

static void conn_requests_offer_request (TpBaseConnection *self,
    GHashTable *requested_properties, ChannelRequestMethod method,
    const gchar *type, TpHandleType target_handle_type,
    TpHandle target_handle, DBusGMethodInvocation *context);


#define RETURN_INVALID_ARGUMENT(message) \
  G_STMT_START { \
    GError e = { TP_ERRORS, TP_ERROR_INVALID_ARGUMENT, message }; \
    dbus_g_method_return_error (context, &e); \
    return; \
  } G_STMT_END


static void
conn_requests_requestotron (TpBaseConnection *self,
                            GHashTable *requested_properties,
                            ChannelRequestMethod method,
                            DBusGMethodInvocation *context)
{
  TP_BASE_CONNECTION_ERROR_IF_NOT_CONNECTED (self, context);

  /* Call the first function in the chain handling incoming requests; it will
   * call the next steps.
   */
  conn_requests_check_basic_properties (self, requested_properties, method,
      context);
}


static void
conn_requests_check_basic_properties (TpBaseConnection *self,
                                      GHashTable *requested_properties,
                                      ChannelRequestMethod method,
                                      DBusGMethodInvocation *context)
{
  /* Step 1:
   *  Check that ChannelType, TargetHandleType, TargetHandle, TargetID have
   *  the correct types, and that ChannelType is not omitted.
   */
  const gchar *type;
  TpHandleType target_handle_type;
  TpHandle target_handle;
  const gchar *target_id;
  gboolean valid;

  type = tp_asv_get_string (requested_properties,
        TP_PROP_CHANNEL_CHANNEL_TYPE);

  if (type == NULL)
    RETURN_INVALID_ARGUMENT ("ChannelType is required");

  target_handle_type = tp_asv_get_uint32 (requested_properties,
      TP_PROP_CHANNEL_TARGET_HANDLE_TYPE, &valid);

  /* Allow TargetHandleType to be missing, but not to be otherwise broken */
  if (!valid && tp_asv_lookup (requested_properties,
          TP_PROP_CHANNEL_TARGET_HANDLE_TYPE) != NULL)
    RETURN_INVALID_ARGUMENT (
        "TargetHandleType must be an integer in range 0 to 2**32-1");

  target_handle = tp_asv_get_uint32 (requested_properties,
      TP_PROP_CHANNEL_TARGET_HANDLE, &valid);

  /* Allow TargetHandle to be missing, but not to be otherwise broken */
  if (!valid && tp_asv_lookup (requested_properties,
          TP_PROP_CHANNEL_TARGET_HANDLE) != NULL)
    RETURN_INVALID_ARGUMENT (
      "TargetHandle must be an integer in range 1 to 2**32-1");

  /* TargetHandle may not be 0 */
  if (valid && target_handle == 0)
    RETURN_INVALID_ARGUMENT ("TargetHandle may not be 0");

  target_id = tp_asv_get_string (requested_properties,
      TP_PROP_CHANNEL_TARGET_ID);

  /* Allow TargetID to be missing, but not to be otherwise broken */
  if (target_id == NULL && tp_asv_lookup (requested_properties,
          TP_PROP_CHANNEL_TARGET_ID) != NULL)
    RETURN_INVALID_ARGUMENT ("TargetID must be a string");

  if (tp_asv_lookup (requested_properties, TP_PROP_CHANNEL_INITIATOR_HANDLE)
      != NULL)
    RETURN_INVALID_ARGUMENT ("InitiatorHandle may not be requested");

  if (tp_asv_lookup (requested_properties, TP_PROP_CHANNEL_INITIATOR_ID)
      != NULL)
    RETURN_INVALID_ARGUMENT ("InitiatorID may not be requested");

  if (tp_asv_lookup (requested_properties, TP_PROP_CHANNEL_REQUESTED)
      != NULL)
    RETURN_INVALID_ARGUMENT ("Requested may not be requested");

  conn_requests_requestotron_validate_handle (self,
      requested_properties, method,
      type, target_handle_type, target_handle, target_id,
      context);
}


/*
 * @target_handle: non-zero if a TargetHandle property was in the request;
 *                 zero if TargetHandle was not in the request.
 */
static void
conn_requests_requestotron_validate_handle (TpBaseConnection *self,
                                            GHashTable *requested_properties,
                                            ChannelRequestMethod method,
                                            const gchar *type,
                                            TpHandleType target_handle_type,
                                            TpHandle target_handle,
                                            const gchar *target_id,
                                            DBusGMethodInvocation *context)
{
  /* Step 2: Validate the supplied set of Handle properties */
  TpHandleRepoIface *handles = NULL;
  GHashTable *altered_properties = NULL;
  GValue *target_handle_value = NULL;

  /* Handle type 0 cannot have a handle */
  if (target_handle_type == TP_HANDLE_TYPE_NONE && target_handle != 0)
    RETURN_INVALID_ARGUMENT (
        "When TargetHandleType is NONE, TargetHandle must be omitted");

  /* Handle type 0 cannot have a target id */
  if (target_handle_type == TP_HANDLE_TYPE_NONE && target_id != NULL)
    RETURN_INVALID_ARGUMENT (
      "When TargetHandleType is NONE, TargetID must be omitted");

  if (target_handle_type != TP_HANDLE_TYPE_NONE)
    {
      GError *error = NULL;

      if (target_handle == 0 && target_id == NULL)
        RETURN_INVALID_ARGUMENT ("When TargetHandleType is not None, either "
            "TargetHandle or TargetID must also be given");

      if (target_handle != 0 && target_id != NULL)
        RETURN_INVALID_ARGUMENT (
            "TargetHandle and TargetID must not both be given");

      handles = tp_base_connection_get_handles (self, target_handle_type);

      if (handles == NULL)
        {
          GError e = { TP_ERRORS, TP_ERROR_NOT_AVAILABLE,
              "Handle type not supported by this connection manager" };

          dbus_g_method_return_error (context, &e);
          return;
        }

      if (target_handle == 0)
        {
          /* Turn TargetID into TargetHandle */
          target_handle = tp_handle_ensure (handles, target_id, NULL, &error);

          if (target_handle == 0)
            {
              /* tp_handle_ensure can return any error in any domain; force
               * the domain and code to be as documented for CreateChannel.
               */
              error->domain = TP_ERRORS;
              error->code = TP_ERROR_INVALID_HANDLE;
              dbus_g_method_return_error (context, error);
              g_error_free (error);
              return;
            }

          altered_properties = g_hash_table_new_full (g_str_hash, g_str_equal,
              NULL, NULL);
          tp_g_hash_table_update (altered_properties, requested_properties,
              NULL, NULL);

          target_handle_value = tp_g_value_slice_new_uint (target_handle);
          g_hash_table_insert (altered_properties,
              TP_PROP_CHANNEL_TARGET_HANDLE, target_handle_value);

          g_hash_table_remove (altered_properties,
              TP_PROP_CHANNEL_TARGET_ID);

          requested_properties = altered_properties;
        }
      else
        {
          /* Check the supplied TargetHandle is valid */
          if (!tp_handle_is_valid (handles, target_handle, &error))
            {
              error->domain = TP_ERRORS;
              error->code = TP_ERROR_INVALID_HANDLE;
              dbus_g_method_return_error (context, error);
              g_error_free (error);
              return;
            }

          tp_handle_ref (handles, target_handle);
        }
    }

  conn_requests_offer_request (self, requested_properties, method, type,
      target_handle_type, target_handle, context);

  /* If HandleType was not None, we got the relevant repo and took a reference
   * to target_handle; release it before returning
   */
  if (handles != NULL)
    {
      tp_handle_unref (handles, target_handle);
    }

  /* If we made a new table, we should destroy it, and the GValue holding
   * TargetHandle.  The other GValues are borrowed from the supplied
   * requested_properties table.
   */
  if (altered_properties != NULL)
    {
      g_hash_table_destroy (altered_properties);
      tp_g_value_slice_free (target_handle_value);
    }
}


static void
conn_requests_offer_request (TpBaseConnection *self,
                             GHashTable *requested_properties,
                             ChannelRequestMethod method,
                             const gchar *type,
                             TpHandleType target_handle_type,
                             TpHandle target_handle,
                             DBusGMethodInvocation *context)
{
  /* Step 3: offer the incoming, vaguely sanitized request to the channel
   * managers.
   */
  TpBaseConnectionPrivate *priv = self->priv;
  TpChannelManagerRequestFunc func;
  ChannelRequest *request;
  gboolean suppress_handler;
  guint i;

  switch (method)
    {
    case METHOD_CREATE_CHANNEL:
      func = tp_channel_manager_create_channel;
      suppress_handler = TRUE;
      break;

    case METHOD_ENSURE_CHANNEL:
      func = tp_channel_manager_ensure_channel;
      suppress_handler = FALSE;
      break;

    default:
      g_assert_not_reached ();
    }

  request = channel_request_new (context, method,
      type, target_handle_type, target_handle, suppress_handler);
  g_ptr_array_add (priv->channel_requests, request);

  for (i = 0; i < priv->channel_managers->len; i++)
    {
      TpChannelManager *manager = TP_CHANNEL_MANAGER (
          g_ptr_array_index (priv->channel_managers, i));

      if (func (manager, request, requested_properties))
        return;
    }

  /* Nobody accepted the request */
  tp_dbus_g_method_return_not_implemented (context);
  request->context = NULL;

  g_ptr_array_remove (priv->channel_requests, request);
  channel_request_free (request);
}


static void
conn_requests_create_channel (TpSvcConnectionInterfaceRequests *svc,
                              GHashTable *requested_properties,
                              DBusGMethodInvocation *context)
{
  TpBaseConnection *self = TP_BASE_CONNECTION (svc);

  conn_requests_requestotron (self, requested_properties,
      METHOD_CREATE_CHANNEL, context);
}


static void
conn_requests_ensure_channel (TpSvcConnectionInterfaceRequests *svc,
                              GHashTable *requested_properties,
                              DBusGMethodInvocation *context)
{
  TpBaseConnection *self = TP_BASE_CONNECTION (svc);

  conn_requests_requestotron (self, requested_properties,
      METHOD_ENSURE_CHANNEL, context);
}


static void
requests_iface_init (gpointer g_iface,
                     gpointer iface_data G_GNUC_UNUSED)
{
  TpSvcConnectionInterfaceRequestsClass *iface = g_iface;

#define IMPLEMENT(x) \
    tp_svc_connection_interface_requests_implement_##x (\
        iface, conn_requests_##x)
  IMPLEMENT (create_channel);
  IMPLEMENT (ensure_channel);
#undef IMPLEMENT
}


/**
 * tp_base_connection_channel_manager_iter_init:
 * @iter: an uninitialized #TpChannelManagerIter
 * @self: a connection
 *
 * Initializes an iterator over the #TpChannelManager objects known to
 * @self.  It is intended to be used as followed:
 *
 * <informalexample><programlisting>
 * TpChannelManagerIter iter;
 * TpChannelManager *manager;
 *
 * tp_base_connection_channel_manager_iter_init (&amp;iter, base_conn);
 * while (tp_base_connection_channel_manager_iter_next (&amp;iter, &amp;manager))
 *   {
 *     ...do something with manager...
 *   }
 * </programlisting></informalexample>
 *
 * Since: 0.7.15
 */
void
tp_base_connection_channel_manager_iter_init (TpChannelManagerIter *iter,
                                              TpBaseConnection *self)
{
  g_return_if_fail (TP_IS_BASE_CONNECTION (self));

  iter->self = self;
  iter->index = 0;
}


/**
 * tp_base_connection_channel_manager_iter_next:
 * @iter: an initialized #TpChannelManagerIter
 * @manager_out: a location to store the channel manager, or %NULL.
 *
 * Advances @iter, and retrieves the #TpChannelManager it now points to.  If
 * there are no more channel managers, @manager_out is not set and %FALSE is
 * returned.
 *
 * Returns: %FALSE if there are no more channel managers; else %TRUE.
 *
 * Since: 0.7.15
 */
gboolean
tp_base_connection_channel_manager_iter_next (TpChannelManagerIter *iter,
                                              TpChannelManager **manager_out)
{
  TpBaseConnectionPrivate *priv;

  /* Check the caller initialized the iterator properly. */
  g_assert (TP_IS_BASE_CONNECTION (iter->self));

  priv = iter->self->priv;

  /* Be noisy if something's gone really wrong */
  g_return_val_if_fail (iter->index <= priv->channel_managers->len, FALSE);

  if (iter->index == priv->channel_managers->len)
    return FALSE;

  if (manager_out != NULL)
    *manager_out = TP_CHANNEL_MANAGER (
        g_ptr_array_index (priv->channel_managers, iter->index));

  iter->index++;
  return TRUE;
}


static void
tp_base_connection_fill_contact_attributes (GObject *obj,
  const GArray *contacts, GHashTable *attributes_hash)
{
  TpBaseConnection *self = TP_BASE_CONNECTION (obj);
  TpBaseConnectionPrivate *priv = self->priv;
  guint i;

  for (i = 0; i < contacts->len; i++)
    {
      TpHandle handle;
      const gchar *tmp;

      handle = g_array_index (contacts, TpHandle, i);
      tmp = tp_handle_inspect (priv->handles[TP_HANDLE_TYPE_CONTACT], handle);
      g_assert (tmp != NULL);

      tp_contacts_mixin_set_contact_attribute (attributes_hash,
          handle, TP_IFACE_CONNECTION"/contact-id",
          tp_g_value_slice_new_string (tmp));
    }
}

/**
 * tp_base_connection_register_with_contacts_mixin:
 * @self: An instance of the #TpBaseConnections that uses the Contacts
 * mixin
 *
 * Register the Connection interface with the Contacts interface to make it
 * inspectable. The Contacts mixin should be initialized before this function
 * is called
 */
void
tp_base_connection_register_with_contacts_mixin (TpBaseConnection *self)
{
  g_return_if_fail (TP_IS_BASE_CONNECTION (self));

  tp_contacts_mixin_add_contact_attributes_iface (G_OBJECT (self),
      TP_IFACE_CONNECTION,
      tp_base_connection_fill_contact_attributes);
}
