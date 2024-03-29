/*
 * roster.h - Headers for Gabble roster helper
 *
 * Copyright (C) 2006 Collabora Ltd.
 * Copyright (C) 2006 Nokia Corporation
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

#ifndef __ROSTER_H__
#define __ROSTER_H__

#include <glib-object.h>

#include "types.h"

G_BEGIN_DECLS

typedef struct _GabbleRosterPrivate GabbleRosterPrivate;
typedef struct _GabbleRosterClass GabbleRosterClass;

GType gabble_roster_get_type (void);

/* TYPE MACROS */
#define GABBLE_TYPE_ROSTER \
  (gabble_roster_get_type ())
#define GABBLE_ROSTER(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj), GABBLE_TYPE_ROSTER, GabbleRoster))
#define GABBLE_ROSTER_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST((klass), GABBLE_TYPE_ROSTER, GabbleRosterClass))
#define GABBLE_IS_ROSTER(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj), GABBLE_TYPE_ROSTER))
#define GABBLE_IS_ROSTER_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE((klass), GABBLE_TYPE_ROSTER))
#define GABBLE_ROSTER_GET_CLASS(obj) \
  (G_TYPE_INSTANCE_GET_CLASS ((obj), GABBLE_TYPE_ROSTER, GabbleRosterClass))

struct _GabbleRosterClass {
    GObjectClass parent_class;
};

struct _GabbleRoster {
    GObject parent;
    GabbleRosterPrivate *priv;
};

typedef enum
{
  GABBLE_ROSTER_SUBSCRIPTION_NONE = 0,
  GABBLE_ROSTER_SUBSCRIPTION_FROM = 1 << 0,
  GABBLE_ROSTER_SUBSCRIPTION_TO = 1 << 1,
  GABBLE_ROSTER_SUBSCRIPTION_BOTH = GABBLE_ROSTER_SUBSCRIPTION_FROM |
      GABBLE_ROSTER_SUBSCRIPTION_TO,
  GABBLE_ROSTER_SUBSCRIPTION_REMOVE = 1 << 2,
  GABBLE_ROSTER_SUBSCRIPTION_INVALID = 1 << 3,
} GabbleRosterSubscription;

GabbleRoster *gabble_roster_new (GabbleConnection *);

GabbleRosterSubscription gabble_roster_handle_get_subscription (GabbleRoster *,
    TpHandle);
gboolean gabble_roster_handle_set_blocked (GabbleRoster *, TpHandle, gboolean,
    GError **);
const gchar *gabble_roster_handle_get_name (GabbleRoster *, TpHandle);
gboolean gabble_roster_handle_set_name (GabbleRoster *, TpHandle,
    const gchar *, GError **);
gboolean gabble_roster_handle_remove (GabbleRoster *, TpHandle, GError **);
gboolean gabble_roster_handle_add (GabbleRoster *, TpHandle, GError **);
gboolean gabble_roster_handle_has_entry (GabbleRoster *, TpHandle);
gboolean gabble_roster_handle_add_to_group (GabbleRoster *roster,
                                            TpHandle handle,
                                            TpHandle group,
                                            GError **error);
gboolean gabble_roster_handle_remove_from_group (GabbleRoster *roster,
                                                 TpHandle handle,
                                                 TpHandle group,
                                                 GError **error);

G_END_DECLS

#endif /* __ROSTER_H__ */
