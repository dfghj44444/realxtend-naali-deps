/*
 * gabble.h - entry point and utility functions for telepathy-gabble
 * Copyright (C) 2005 Collabora Ltd.
 * Copyright (C) 2005 Nokia Corporation
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

#include "config.h"
#include "gabble.h"

#ifdef HAVE_UNISTD_H
# include <unistd.h>
#endif

#include <telepathy-glib/debug.h>
#include <telepathy-glib/run.h>

#include "debug.h"
#include "debugger.h"
#include "connection-manager.h"

static TpBaseConnectionManager *
construct_cm (void)
{
  return (TpBaseConnectionManager *) g_object_new (
      GABBLE_TYPE_CONNECTION_MANAGER, NULL);
}

#ifdef ENABLE_DEBUG
static void
log_to_debugger (GTimeVal *timestamp,
    const gchar *log_domain,
    GLogLevelFlags log_level,
    const gchar *string)
{
  GabbleDebugger *dbg = gabble_debugger_get_singleton ();

  gabble_debugger_add_message (dbg, timestamp, log_domain, log_level, string);
}

/* Whether LM_DEBUG should be set and messages sent to the debugger. */
static gboolean enable_lm_debug = TRUE;

/* Whether timestamps are added to the logs. */
static gboolean timestamp_debug = FALSE;

static void
gabble_log_handler (const gchar *log_domain,
    GLogLevelFlags log_level,
    const gchar *message,
    gpointer user_data G_GNUC_UNUSED)
{
  /* Only use the GLib default log handler on non-LM messages as they will
     completely overwhelm and are not entirely useful most of the time. Still
     send them to the debugger though. */
  if (tp_strdiff (log_domain, "LM"))
    {
      if (timestamp_debug)
        {
          tp_debug_timestamped_log_handler (log_domain, log_level, message,
              NULL);
        }
      else
        {
          g_log_default_handler (log_domain, log_level, message, NULL);
        }
    }

  /* G_LOG_DOMAIN = "gabble". No need to send gabble messages to the debugger
   * as they already have in gabble_debug. */
  if (log_level != G_LOG_LEVEL_DEBUG
      || tp_strdiff (log_domain, G_LOG_DOMAIN))
    {
      GTimeVal now;

      g_get_current_time (&now);
      log_to_debugger (&now, log_domain, log_level, message);
    }
}

void
gabble_lm_debug (void)
{
  /* Only override LM's log handler if the user has *not* set LM_DEBUG
     manually. */
  if (!enable_lm_debug)
    return;

  g_log_set_handler ("LM",
      G_LOG_LEVEL_MASK | G_LOG_FLAG_FATAL | G_LOG_FLAG_RECURSION,
      gabble_log_handler, NULL);
}
#endif


void
gabble_init (void)
{
  /* libsoup uses glib in multiple threads and don't have this, so we have to
   * enable it manually here */
  if (!g_thread_supported ())
    g_thread_init (NULL);

  g_type_init ();
}

int
gabble_main (int argc,
    char **argv)
{
  tp_debug_divert_messages (g_getenv ("GABBLE_LOGFILE"));

#ifdef ENABLE_DEBUG
  gabble_debug_set_flags_from_env ();

  if (g_getenv ("LM_DEBUG") != NULL)
    enable_lm_debug = FALSE;
  else
    g_setenv ("LM_DEBUG", "net", TRUE);

  timestamp_debug = (g_getenv ("GABBLE_TIMING") != NULL);
  g_log_set_default_handler (gabble_log_handler, NULL);

  if (g_getenv ("GABBLE_PERSIST") != NULL)
    tp_debug_set_persistent (TRUE);
#endif

  return tp_run_connection_manager ("telepathy-gabble", VERSION,
      construct_cm, argc, argv);
}
