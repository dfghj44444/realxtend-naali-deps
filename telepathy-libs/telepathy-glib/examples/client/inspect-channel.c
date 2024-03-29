/*
 * telepathy-example-inspect-channel - inspect a channel
 *
 * Copyright (C) 2007-2008 Collabora Ltd. <http://www.collabora.co.uk/>
 * Copyright (C) 2007-2008 Nokia Corporation
 *
 * Copying and distribution of this file, with or without modification,
 * are permitted in any medium without royalty provided the copyright
 * notice and this notice are preserved.
 */

#include <stdio.h>

#include <telepathy-glib/telepathy-glib.h>

int
main (int argc,
      char **argv)
{
  guint handle_type, handle;
  gchar *channel_type;
  gchar **interfaces, **iter;
  const gchar *conn_name, *object_path;
  TpDBusDaemon *daemon = NULL;
  TpConnection *connection = NULL;
  TpChannel *channel = NULL;
  GError *error = NULL;
  int ret = 0;

  g_type_init ();
  tp_debug_set_flags (g_getenv ("EXAMPLE_DEBUG"));

  if (argc < 3)
    {
      fputs ("Usage:\n"
          "    telepathy-example-inspect-channel CONN OBJECT_PATH\n"
          "CONN may either be a connection's well-known bus name or object\n"
          "path.\n",
          stderr);
      return 2;
    }

  conn_name = argv[1];
  object_path = argv[2];

  daemon = tp_dbus_daemon_dup (&error);

  if (daemon == NULL)
    {
      g_warning ("%s", error->message);
      g_error_free (error);
      ret = 1;
      goto out;
    }

  if (conn_name[0] == '/')
    connection = tp_connection_new (daemon, NULL, conn_name, &error);
  else
    connection = tp_connection_new (daemon, conn_name, NULL, &error);

  if (connection == NULL ||
      !tp_connection_run_until_ready (connection, FALSE, &error, NULL))
    {
      g_warning ("%s", error->message);
      g_error_free (error);
      ret = 1;
      goto out;
    }

  channel = tp_channel_new (connection, object_path, NULL,
      TP_UNKNOWN_HANDLE_TYPE, 0, &error);

  if (channel == NULL || !tp_channel_run_until_ready (channel, &error, NULL))
    {
      g_warning ("%s", error->message);
      g_error_free (error);
      ret = 1;
      goto out;
    }

  g_object_get (channel,
      "channel-type", &channel_type,
      "handle-type", &handle_type,
      "handle", &handle,
      "interfaces", &interfaces,
      NULL);

  printf ("Type: %s\n", channel_type);
  printf ("Handle: of type %u, #%u\n", handle_type, handle);
  puts ("Interfaces:");

  for (iter = interfaces; iter != NULL && *iter != NULL; iter++)
    {
      printf ("\t%s\n", *iter);
    }

  g_free (channel_type);
  g_strfreev (interfaces);

  if (tp_proxy_has_interface_by_id (channel,
        TP_IFACE_QUARK_CHANNEL_INTERFACE_GROUP))
    {
      GArray *members;

      printf ("Group members:\n");
      /* An example of a reentrant blocking call. This re-enters the
       * main loop and dispatches events until the call completes */
      if (tp_cli_channel_interface_group_run_get_members (channel, -1,
            /* If GetMembers had any "in" arguments they'd go here */
          &members, &error, NULL))
        {
          guint i;

          for (i = 0; i < members->len; i++)
            {
              printf("\tcontact #%u\n", g_array_index (members, guint, i));
            }

          g_array_free (members, TRUE);
        }
      else
        {
          printf ("\t[error: %s]\n", error->message);
          g_error_free (error);
          ret = 1;
          goto out;
        }
    }

out:
  if (daemon != NULL)
    g_object_unref (daemon);

  if (connection != NULL)
    g_object_unref (connection);

  if (channel != NULL)
    g_object_unref (channel);

  return ret;
}
