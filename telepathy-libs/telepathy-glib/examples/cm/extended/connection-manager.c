/*
 * manager.c - an example connection manager
 *
 * Copyright (C) 2007 Collabora Ltd.
 *
 * Copying and distribution of this file, with or without modification,
 * are permitted in any medium without royalty provided the copyright
 * notice and this notice are preserved.
 */

#include "connection-manager.h"

#include <dbus/dbus-protocol.h>
#include <dbus/dbus-glib.h>

#include <telepathy-glib/telepathy-glib.h>

#include "conn.h"

G_DEFINE_TYPE (ExampleExtendedConnectionManager,
    example_extended_connection_manager,
    TP_TYPE_BASE_CONNECTION_MANAGER)

/* type definition stuff */

static void
example_extended_connection_manager_init (
    ExampleExtendedConnectionManager *self)
{
}

/* private data */

typedef struct {
    gchar *account;
} ExampleParams;

static gpointer
alloc_params (void)
{
  return g_slice_new0 (ExampleParams);
}

static void
free_params (gpointer p)
{
  ExampleParams *params = p;

  g_free (params->account);

  g_slice_free (ExampleParams, params);
}

#include "_gen/param-spec-struct.h"

static const TpCMProtocolSpec example_protocols[] = {
  { "example", example_extended_example_params, alloc_params, free_params },
  { NULL, NULL }
};

static TpBaseConnection *
new_connection (TpBaseConnectionManager *self,
                const gchar *proto,
                TpIntSet *params_present,
                gpointer parsed_params,
                GError **error)
{
  ExampleParams *params = parsed_params;
  ExampleExtendedConnection *conn = EXAMPLE_EXTENDED_CONNECTION
      (g_object_new (EXAMPLE_TYPE_EXTENDED_CONNECTION,
          "account", params->account,
          "protocol", proto,
          NULL));

  return (TpBaseConnection *) conn;
}

static void
example_extended_connection_manager_class_init (
    ExampleExtendedConnectionManagerClass *klass)
{
  TpBaseConnectionManagerClass *base_class =
      (TpBaseConnectionManagerClass *) klass;

  base_class->new_connection = new_connection;
  base_class->cm_dbus_name = "example_extended";
  base_class->protocol_params = example_protocols;
}
