/*
 * /dev/null as a text channel
 *
 * Copyright (C) 2008 Collabora Ltd. <http://www.collabora.co.uk/>
 * Copyright (C) 2008 Nokia Corporation
 *
 * Copying and distribution of this file, with or without modification,
 * are permitted in any medium without royalty provided the copyright
 * notice and this notice are preserved.
 */

#include "textchan-null.h"

#include <telepathy-glib/base-connection.h>
#include <telepathy-glib/channel-iface.h>
#include <telepathy-glib/dbus.h>
#include <telepathy-glib/dbus-properties-mixin.h>
#include <telepathy-glib/interfaces.h>
#include <telepathy-glib/svc-channel.h>
#include <telepathy-glib/svc-generic.h>

static void text_iface_init (gpointer iface, gpointer data);
static void channel_iface_init (gpointer iface, gpointer data);

G_DEFINE_TYPE_WITH_CODE (TestTextChannelNull,
    test_text_channel_null,
    G_TYPE_OBJECT,
    G_IMPLEMENT_INTERFACE (TP_TYPE_SVC_CHANNEL, channel_iface_init);
    G_IMPLEMENT_INTERFACE (TP_TYPE_SVC_CHANNEL_TYPE_TEXT, text_iface_init);
    G_IMPLEMENT_INTERFACE (TP_TYPE_CHANNEL_IFACE, NULL))

G_DEFINE_TYPE_WITH_CODE (TestPropsTextChannel,
    test_props_text_channel,
    TEST_TYPE_TEXT_CHANNEL_NULL,
    G_IMPLEMENT_INTERFACE (TP_TYPE_SVC_DBUS_PROPERTIES,
      tp_dbus_properties_mixin_iface_init))

G_DEFINE_TYPE_WITH_CODE (TestPropsGroupTextChannel,
    test_props_group_text_channel,
    TEST_TYPE_PROPS_TEXT_CHANNEL,
    G_IMPLEMENT_INTERFACE (TP_TYPE_SVC_CHANNEL_INTERFACE_GROUP,
        tp_group_mixin_iface_init))

static const char *test_text_channel_null_interfaces[] = { NULL };

/* type definition stuff */

enum
{
  PROP_OBJECT_PATH = 1,
  PROP_CHANNEL_TYPE,
  PROP_HANDLE_TYPE,
  PROP_HANDLE,
  PROP_TARGET_ID,
  PROP_CONNECTION,
  PROP_INTERFACES,
  PROP_REQUESTED,
  PROP_INITIATOR_HANDLE,
  PROP_INITIATOR_ID,
  N_PROPS
};

struct _TestTextChannelNullPrivate
{
  TpBaseConnection *conn;
  gchar *object_path;
  TpHandle handle;

  unsigned closed:1;
  unsigned disposed:1;
};

static void
test_text_channel_null_init (TestTextChannelNull *self)
{
  self->priv = G_TYPE_INSTANCE_GET_PRIVATE (self, TEST_TYPE_TEXT_CHANNEL_NULL,
      TestTextChannelNullPrivate);
}

static void
test_props_text_channel_init (TestPropsTextChannel *self)
{
  self->dbus_property_interfaces_retrieved = g_hash_table_new (NULL, NULL);
}

static GObject *
constructor (GType type,
             guint n_props,
             GObjectConstructParam *props)
{
  GObject *object =
      G_OBJECT_CLASS (test_text_channel_null_parent_class)->constructor (type,
          n_props, props);
  TestTextChannelNull *self = TEST_TEXT_CHANNEL_NULL (object);
  TpHandleRepoIface *contact_repo = tp_base_connection_get_handles
      (self->priv->conn, TP_HANDLE_TYPE_CONTACT);
  DBusGConnection *bus;

  tp_handle_ref (contact_repo, self->priv->handle);

  bus = tp_get_bus ();
  dbus_g_connection_register_g_object (bus, self->priv->object_path, object);

  tp_text_mixin_init (object, G_STRUCT_OFFSET (TestTextChannelNull, text),
      contact_repo);

  tp_text_mixin_set_message_types (object,
      TP_CHANNEL_TEXT_MESSAGE_TYPE_NORMAL,
      TP_CHANNEL_TEXT_MESSAGE_TYPE_ACTION,
      TP_CHANNEL_TEXT_MESSAGE_TYPE_NOTICE,
      G_MAXUINT);

  return object;
}

static void
get_property (GObject *object,
              guint property_id,
              GValue *value,
              GParamSpec *pspec)
{
  TestTextChannelNull *self = TEST_TEXT_CHANNEL_NULL (object);

  switch (property_id)
    {
    case PROP_OBJECT_PATH:
      g_value_set_string (value, self->priv->object_path);
      break;
    case PROP_CHANNEL_TYPE:
      g_value_set_static_string (value, TP_IFACE_CHANNEL_TYPE_TEXT);
      break;
    case PROP_HANDLE_TYPE:
      g_value_set_uint (value, TP_HANDLE_TYPE_CONTACT);
      break;
    case PROP_HANDLE:
      g_value_set_uint (value, self->priv->handle);
      break;
    case PROP_TARGET_ID:
        {
          TpHandleRepoIface *contact_repo = tp_base_connection_get_handles (
              self->priv->conn, TP_HANDLE_TYPE_CONTACT);

          g_value_set_string (value,
              tp_handle_inspect (contact_repo, self->priv->handle));
        }
      break;
    case PROP_REQUESTED:
      g_value_set_boolean (value, TRUE);
      break;
    case PROP_INITIATOR_HANDLE:
      g_value_set_uint (value, self->priv->conn->self_handle);
      break;
    case PROP_INITIATOR_ID:
        {
          TpHandleRepoIface *contact_repo = tp_base_connection_get_handles (
              self->priv->conn, TP_HANDLE_TYPE_CONTACT);

          g_value_set_string (value,
              tp_handle_inspect (contact_repo, self->priv->conn->self_handle));
        }
      break;
    case PROP_INTERFACES:
      g_value_set_boxed (value, test_text_channel_null_interfaces);
      break;
    case PROP_CONNECTION:
      g_value_set_object (value, self->priv->conn);
      break;
    default:
      G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
      break;
    }
}

static void
set_property (GObject *object,
              guint property_id,
              const GValue *value,
              GParamSpec *pspec)
{
  TestTextChannelNull *self = TEST_TEXT_CHANNEL_NULL (object);

  switch (property_id)
    {
    case PROP_OBJECT_PATH:
      g_free (self->priv->object_path);
      self->priv->object_path = g_value_dup_string (value);
      break;
    case PROP_HANDLE:
      /* we don't ref it here because we don't necessarily have access to the
       * contact repo yet - instead we ref it in the constructor.
       */
      self->priv->handle = g_value_get_uint (value);
      break;
    case PROP_HANDLE_TYPE:
    case PROP_CHANNEL_TYPE:
      /* these properties are writable in the interface, but not actually
       * meaningfully changable on this channel, so we do nothing */
      break;
    case PROP_CONNECTION:
      self->priv->conn = g_value_get_object (value);
      break;
    default:
      G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
      break;
    }
}

static void
dispose (GObject *object)
{
  TestTextChannelNull *self = TEST_TEXT_CHANNEL_NULL (object);

  if (self->priv->disposed)
    return;

  self->priv->disposed = TRUE;

  if (!self->priv->closed)
    {
      tp_svc_channel_emit_closed (self);
    }

  ((GObjectClass *) test_text_channel_null_parent_class)->dispose (object);
}

static void
finalize (GObject *object)
{
  TestTextChannelNull *self = TEST_TEXT_CHANNEL_NULL (object);
  TpHandleRepoIface *contact_handles = tp_base_connection_get_handles
      (self->priv->conn, TP_HANDLE_TYPE_CONTACT);

  tp_handle_unref (contact_handles, self->priv->handle);
  g_free (self->priv->object_path);

  tp_text_mixin_finalize (object);

  ((GObjectClass *) test_text_channel_null_parent_class)->finalize (object);
}

static void
test_text_channel_null_class_init (TestTextChannelNullClass *klass)
{
  GObjectClass *object_class = (GObjectClass *) klass;
  GParamSpec *param_spec;

  g_type_class_add_private (klass, sizeof (TestTextChannelNullPrivate));

  object_class->constructor = constructor;
  object_class->set_property = set_property;
  object_class->get_property = get_property;
  object_class->dispose = dispose;
  object_class->finalize = finalize;

  g_object_class_override_property (object_class, PROP_OBJECT_PATH,
      "object-path");
  g_object_class_override_property (object_class, PROP_CHANNEL_TYPE,
      "channel-type");
  g_object_class_override_property (object_class, PROP_HANDLE_TYPE,
      "handle-type");
  g_object_class_override_property (object_class, PROP_HANDLE, "handle");

  param_spec = g_param_spec_object ("connection", "TpBaseConnection object",
      "Connection object that owns this channel",
      TP_TYPE_BASE_CONNECTION,
      G_PARAM_CONSTRUCT_ONLY | G_PARAM_READWRITE |
      G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB);
  g_object_class_install_property (object_class, PROP_CONNECTION, param_spec);

  param_spec = g_param_spec_boxed ("interfaces", "Extra D-Bus interfaces",
      "Additional Channel.Interface.* interfaces",
      G_TYPE_STRV,
      G_PARAM_READABLE | G_PARAM_STATIC_STRINGS);
  g_object_class_install_property (object_class, PROP_INTERFACES, param_spec);

  param_spec = g_param_spec_string ("target-id", "Peer's ID",
      "The string obtained by inspecting the target handle",
      NULL,
      G_PARAM_READABLE | G_PARAM_STATIC_STRINGS);
  g_object_class_install_property (object_class, PROP_TARGET_ID, param_spec);

  param_spec = g_param_spec_uint ("initiator-handle", "Initiator's handle",
      "The contact who initiated the channel",
      0, G_MAXUINT32, 0,
      G_PARAM_READABLE | G_PARAM_STATIC_STRINGS);
  g_object_class_install_property (object_class, PROP_INITIATOR_HANDLE,
      param_spec);

  param_spec = g_param_spec_string ("initiator-id", "Initiator's ID",
      "The string obtained by inspecting the initiator-handle",
      NULL,
      G_PARAM_READABLE | G_PARAM_STATIC_STRINGS);
  g_object_class_install_property (object_class, PROP_INITIATOR_ID,
      param_spec);

  param_spec = g_param_spec_boolean ("requested", "Requested?",
      "True if this channel was requested by the local user",
      FALSE,
      G_PARAM_READABLE | G_PARAM_STATIC_STRINGS);
  g_object_class_install_property (object_class, PROP_REQUESTED, param_spec);

  tp_text_mixin_class_init (object_class,
      G_STRUCT_OFFSET (TestTextChannelNullClass, text_class));
}

static void
test_props_text_channel_getter_gobject_properties (GObject *object,
    GQuark interface,
    GQuark name,
    GValue *value,
    gpointer getter_data)
{
  TestPropsTextChannel *self = TEST_PROPS_TEXT_CHANNEL (object);

  g_hash_table_insert (self->dbus_property_interfaces_retrieved,
      GUINT_TO_POINTER (interface), GUINT_TO_POINTER (interface));

  tp_dbus_properties_mixin_getter_gobject_properties (object, interface, name,
      value, getter_data);
}

static void
props_finalize (GObject *object)
{
  TestPropsTextChannel *self = TEST_PROPS_TEXT_CHANNEL (object);

  g_hash_table_unref (self->dbus_property_interfaces_retrieved);

  ((GObjectClass *) test_text_channel_null_parent_class)->finalize (object);
}

static void
test_props_text_channel_class_init (TestPropsTextChannelClass *klass)
{
  GObjectClass *object_class = (GObjectClass *) klass;
  static TpDBusPropertiesMixinPropImpl channel_props[] = {
      { "TargetHandleType", "handle-type", NULL },
      { "TargetHandle", "handle", NULL },
      { "ChannelType", "channel-type", NULL },
      { "Interfaces", "interfaces", NULL },
      { "TargetID", "target-id", NULL },
      { "Requested", "requested", NULL },
      { "InitiatorHandle", "initiator-handle", NULL },
      { "InitiatorID", "initiator-id", NULL },
      { NULL }
  };
  static TpDBusPropertiesMixinIfaceImpl prop_interfaces[] = {
      { TP_IFACE_CHANNEL,
        test_props_text_channel_getter_gobject_properties,
        NULL,
        channel_props,
      },
      { NULL }
  };

  object_class->finalize = props_finalize;

  klass->dbus_properties_class.interfaces = prop_interfaces;
  tp_dbus_properties_mixin_class_init (object_class,
      G_STRUCT_OFFSET (TestPropsTextChannelClass, dbus_properties_class));
}

static void
test_props_group_text_channel_init (TestPropsGroupTextChannel *self)
{
}

static void
group_constructed (GObject *self)
{
  TpBaseConnection *conn = TEST_TEXT_CHANNEL_NULL (self)->priv->conn;
  void (*chain_up) (GObject *) =
    ((GObjectClass *) test_props_group_text_channel_parent_class)->constructed;

  if (chain_up != NULL)
    chain_up (self);

  tp_group_mixin_init (self,
      G_STRUCT_OFFSET (TestPropsGroupTextChannel, group),
      tp_base_connection_get_handles (conn, TP_HANDLE_TYPE_CONTACT),
      tp_base_connection_get_self_handle (conn));
  tp_group_mixin_change_flags (self, TP_CHANNEL_GROUP_FLAG_PROPERTIES, 0);
}

static void
group_finalize (GObject *self)
{
  tp_group_mixin_finalize (self);
}

static gboolean
dummy_add_remove_member (GObject *obj,
    TpHandle handle,
    const gchar *message,
    GError **error)
{
  return TRUE;
}

static void
group_iface_props_getter (GObject *object,
    GQuark interface,
    GQuark name,
    GValue *value,
    gpointer getter_data)
{
  TestPropsTextChannel *self = TEST_PROPS_TEXT_CHANNEL (object);

  g_hash_table_insert (self->dbus_property_interfaces_retrieved,
      GUINT_TO_POINTER (interface), GUINT_TO_POINTER (interface));

  tp_group_mixin_get_dbus_property (object, interface, name, value, getter_data);
}

static void
test_props_group_text_channel_class_init (TestPropsGroupTextChannelClass *klass)
{
  GObjectClass *object_class = (GObjectClass *) klass;
  static TpDBusPropertiesMixinPropImpl group_props[] = {
      { "GroupFlags", NULL, NULL },
      { "HandleOwners", NULL, NULL },
      { "LocalPendingMembers", NULL, NULL },
      { "Members", NULL, NULL },
      { "RemotePendingMembers", NULL, NULL },
      { "SelfHandle", NULL, NULL },
      { NULL }
  };

  object_class->constructed = group_constructed;
  object_class->finalize = group_finalize;

  tp_group_mixin_class_init (object_class,
      G_STRUCT_OFFSET (TestPropsGroupTextChannelClass, group_class),
      dummy_add_remove_member,
      dummy_add_remove_member);
  tp_dbus_properties_mixin_implement_interface (object_class,
      TP_IFACE_QUARK_CHANNEL_INTERFACE_GROUP, group_iface_props_getter, NULL,
      group_props);
}

static void
channel_close (TpSvcChannel *iface,
               DBusGMethodInvocation *context)
{
  TestTextChannelNull *self = TEST_TEXT_CHANNEL_NULL (iface);

  if (!self->priv->closed)
    {
      self->priv->closed = TRUE;
      tp_svc_channel_emit_closed (self);
    }

  tp_svc_channel_return_from_close (context);
}

static void
channel_get_channel_type (TpSvcChannel *iface,
                          DBusGMethodInvocation *context)
{
  TestTextChannelNull *self = TEST_TEXT_CHANNEL_NULL (iface);

  self->get_channel_type_called++;

  tp_svc_channel_return_from_get_channel_type (context,
      TP_IFACE_CHANNEL_TYPE_TEXT);
}

static void
channel_get_handle (TpSvcChannel *iface,
                    DBusGMethodInvocation *context)
{
  TestTextChannelNull *self = TEST_TEXT_CHANNEL_NULL (iface);

  self->get_handle_called++;

  tp_svc_channel_return_from_get_handle (context, TP_HANDLE_TYPE_CONTACT,
      self->priv->handle);
}

static void
channel_get_interfaces (TpSvcChannel *iface,
                        DBusGMethodInvocation *context)
{
  TestTextChannelNull *self = TEST_TEXT_CHANNEL_NULL (iface);

  self->get_interfaces_called++;

  tp_svc_channel_return_from_get_interfaces (context,
      test_text_channel_null_interfaces);
}

static void
channel_iface_init (gpointer iface,
                    gpointer data)
{
  TpSvcChannelClass *klass = iface;

#define IMPLEMENT(x) tp_svc_channel_implement_##x (klass, channel_##x)
  IMPLEMENT (close);
  IMPLEMENT (get_channel_type);
  IMPLEMENT (get_handle);
  IMPLEMENT (get_interfaces);
#undef IMPLEMENT
}

static void
text_send (TpSvcChannelTypeText *iface,
           guint type,
           const gchar *text,
           DBusGMethodInvocation *context)
{
  /* silently swallow the message */
  tp_svc_channel_type_text_return_from_send (context);
}

static void
text_iface_init (gpointer iface,
                 gpointer data)
{
  TpSvcChannelTypeTextClass *klass = iface;

  tp_text_mixin_iface_init (iface, data);
#define IMPLEMENT(x) tp_svc_channel_type_text_implement_##x (klass, text_##x)
  IMPLEMENT (send);
#undef IMPLEMENT
}
