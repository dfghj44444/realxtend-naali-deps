/* Feature test for https://bugs.freedesktop.org/show_bug.cgi?id=16307
 *
 * Copyright (C) 2007-2008 Collabora Ltd. <http://www.collabora.co.uk/>
 * Copyright (C) 2007-2008 Nokia Corporation
 *
 * Copying and distribution of this file, with or without modification,
 * are permitted in any medium without royalty provided the copyright
 * notice and this notice are preserved.
 */
#include <telepathy-glib/connection.h>
#include <telepathy-glib/dbus.h>
#include <telepathy-glib/debug.h>
#include <telepathy-glib/interfaces.h>
#include <telepathy-glib/proxy-subclass.h>

#include "tests/lib/myassert.h"
#include "tests/lib/bug16307-conn.h"
#include "tests/lib/util.h"

static GMainLoop *mainloop;

typedef struct {
    gboolean ready;
    GError *error /* initialized to NULL statically */;
    GMainLoop *mainloop;
} WhenReadyContext;

int
main (int argc,
      char **argv)
{
  TpDBusDaemon *dbus;
  Bug16307Connection *service_conn;
  TpBaseConnection *service_conn_as_base;
  gchar *name;
  gchar *conn_path;
  GError *error = NULL;
  TpConnection *conn;

  g_type_init ();
  tp_debug_set_flags ("all");
  mainloop = g_main_loop_new (NULL, FALSE);
  dbus = tp_dbus_daemon_new (tp_get_bus ());

  /* service side */
  service_conn = BUG16307_CONNECTION (g_object_new (
        BUG16307_TYPE_CONNECTION,
        "account", "me@example.com",
        "protocol", "simple",
        NULL));
  service_conn_as_base = TP_BASE_CONNECTION (service_conn);
  MYASSERT (service_conn != NULL, "");
  MYASSERT (service_conn_as_base != NULL, "");

  MYASSERT (tp_base_connection_register (service_conn_as_base, "simple",
        &name, &conn_path, &error), "");
  test_assert_no_error (error);

  /* client side */
  conn = tp_connection_new (dbus, name, conn_path, &error);
  MYASSERT (conn != NULL, "");
  test_assert_no_error (error);

  bug16307_connection_inject_get_status_return (service_conn);

  MYASSERT (tp_connection_run_until_ready (conn, TRUE, &error, NULL),
      "");
  test_assert_no_error (error);

  MYASSERT (tp_cli_connection_run_disconnect (conn, -1, &error, NULL), "");
  test_assert_no_error (error);

  service_conn_as_base = NULL;
  g_object_unref (service_conn);
  g_free (name);
  g_free (conn_path);

  g_object_unref (dbus);
  g_main_loop_unref (mainloop);

  return 0;
}
