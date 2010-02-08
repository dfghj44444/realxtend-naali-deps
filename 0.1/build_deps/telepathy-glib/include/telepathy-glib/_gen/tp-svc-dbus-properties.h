#include <glib-object.h>
#include <dbus/dbus-glib.h>

G_BEGIN_DECLS

/**
 * TpSvcDBusProperties:
 *
 * Dummy typedef representing any implementation of this interface.
 */
typedef struct _TpSvcDBusProperties TpSvcDBusProperties;

/**
 * TpSvcDBusPropertiesClass:
 *
 * The class of TpSvcDBusProperties.
 *
 * In a full implementation of this interface (i.e. all
 * methods implemented), the interface initialization
 * function used in G_IMPLEMENT_INTERFACE() would
 * typically look like this:
 *
 * <programlisting>
 * static void
 * implement_dbus_properties (gpointer klass,
 *     gpointer unused G_GNUC_UNUSED)
 * {
 * #define IMPLEMENT(x) tp_svc_dbus_properties_implement_###x (\
 *   klass, my_object_###x)
 *   IMPLEMENT (get);
 *   IMPLEMENT (set);
 *   IMPLEMENT (get_all);
 * #undef IMPLEMENT
 * }
 * </programlisting>
 */
typedef struct _TpSvcDBusPropertiesClass TpSvcDBusPropertiesClass;

GType tp_svc_dbus_properties_get_type (void);
#define TP_TYPE_SVC_DBUS_PROPERTIES \
  (tp_svc_dbus_properties_get_type ())
#define TP_SVC_DBUS_PROPERTIES(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj), TP_TYPE_SVC_DBUS_PROPERTIES, TpSvcDBusProperties))
#define TP_IS_SVC_DBUS_PROPERTIES(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj), TP_TYPE_SVC_DBUS_PROPERTIES))
#define TP_SVC_DBUS_PROPERTIES_GET_CLASS(obj) \
  (G_TYPE_INSTANCE_GET_INTERFACE((obj), TP_TYPE_SVC_DBUS_PROPERTIES, TpSvcDBusPropertiesClass))


typedef void (*tp_svc_dbus_properties_get_impl) (TpSvcDBusProperties *self,
    const gchar *in_Interface_Name,
    const gchar *in_Property_Name,
    DBusGMethodInvocation *context);
void tp_svc_dbus_properties_implement_get (TpSvcDBusPropertiesClass *klass, tp_svc_dbus_properties_get_impl impl);
/**
 * tp_svc_dbus_properties_return_from_get:
 * @context: The D-Bus method invocation context
 * @out_Value: const GValue * (FIXME, generate documentation)
 *
 * Return successfully by calling dbus_g_method_return().
 * This inline function exists only to provide type-safety.
 */
static inline
/* this comment is to stop gtkdoc realising this is static */
void tp_svc_dbus_properties_return_from_get (DBusGMethodInvocation *context,
    const GValue *out_Value);
static inline void
tp_svc_dbus_properties_return_from_get (DBusGMethodInvocation *context,
    const GValue *out_Value)
{
  dbus_g_method_return (context,
      out_Value);
}

typedef void (*tp_svc_dbus_properties_set_impl) (TpSvcDBusProperties *self,
    const gchar *in_Interface_Name,
    const gchar *in_Property_Name,
    const GValue *in_Value,
    DBusGMethodInvocation *context);
void tp_svc_dbus_properties_implement_set (TpSvcDBusPropertiesClass *klass, tp_svc_dbus_properties_set_impl impl);
/**
 * tp_svc_dbus_properties_return_from_set:
 * @context: The D-Bus method invocation context
 *
 * Return successfully by calling dbus_g_method_return().
 * This inline function exists only to provide type-safety.
 */
static inline
/* this comment is to stop gtkdoc realising this is static */
void tp_svc_dbus_properties_return_from_set (DBusGMethodInvocation *context);
static inline void
tp_svc_dbus_properties_return_from_set (DBusGMethodInvocation *context)
{
  dbus_g_method_return (context);
}

typedef void (*tp_svc_dbus_properties_get_all_impl) (TpSvcDBusProperties *self,
    const gchar *in_Interface_Name,
    DBusGMethodInvocation *context);
void tp_svc_dbus_properties_implement_get_all (TpSvcDBusPropertiesClass *klass, tp_svc_dbus_properties_get_all_impl impl);
/**
 * tp_svc_dbus_properties_return_from_get_all:
 * @context: The D-Bus method invocation context
 * @out_Properties: GHashTable * (FIXME, generate documentation)
 *
 * Return successfully by calling dbus_g_method_return().
 * This inline function exists only to provide type-safety.
 */
static inline
/* this comment is to stop gtkdoc realising this is static */
void tp_svc_dbus_properties_return_from_get_all (DBusGMethodInvocation *context,
    GHashTable *out_Properties);
static inline void
tp_svc_dbus_properties_return_from_get_all (DBusGMethodInvocation *context,
    GHashTable *out_Properties)
{
  dbus_g_method_return (context,
      out_Properties);
}



G_END_DECLS
