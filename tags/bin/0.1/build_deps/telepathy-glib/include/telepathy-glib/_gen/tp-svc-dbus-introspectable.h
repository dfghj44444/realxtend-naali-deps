#include <glib-object.h>
#include <dbus/dbus-glib.h>

G_BEGIN_DECLS

/**
 * TpSvcDBusIntrospectable:
 *
 * Dummy typedef representing any implementation of this interface.
 */
typedef struct _TpSvcDBusIntrospectable TpSvcDBusIntrospectable;

/**
 * TpSvcDBusIntrospectableClass:
 *
 * The class of TpSvcDBusIntrospectable.
 *
 * In a full implementation of this interface (i.e. all
 * methods implemented), the interface initialization
 * function used in G_IMPLEMENT_INTERFACE() would
 * typically look like this:
 *
 * <programlisting>
 * static void
 * implement_dbus_introspectable (gpointer klass,
 *     gpointer unused G_GNUC_UNUSED)
 * {
 * #define IMPLEMENT(x) tp_svc_dbus_introspectable_implement_###x (\
 *   klass, my_object_###x)
 *   IMPLEMENT (introspect);
 * #undef IMPLEMENT
 * }
 * </programlisting>
 */
typedef struct _TpSvcDBusIntrospectableClass TpSvcDBusIntrospectableClass;

GType tp_svc_dbus_introspectable_get_type (void);
#define TP_TYPE_SVC_DBUS_INTROSPECTABLE \
  (tp_svc_dbus_introspectable_get_type ())
#define TP_SVC_DBUS_INTROSPECTABLE(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj), TP_TYPE_SVC_DBUS_INTROSPECTABLE, TpSvcDBusIntrospectable))
#define TP_IS_SVC_DBUS_INTROSPECTABLE(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj), TP_TYPE_SVC_DBUS_INTROSPECTABLE))
#define TP_SVC_DBUS_INTROSPECTABLE_GET_CLASS(obj) \
  (G_TYPE_INSTANCE_GET_INTERFACE((obj), TP_TYPE_SVC_DBUS_INTROSPECTABLE, TpSvcDBusIntrospectableClass))


typedef void (*tp_svc_dbus_introspectable_introspect_impl) (TpSvcDBusIntrospectable *self,
    DBusGMethodInvocation *context);
void tp_svc_dbus_introspectable_implement_introspect (TpSvcDBusIntrospectableClass *klass, tp_svc_dbus_introspectable_introspect_impl impl);
/**
 * tp_svc_dbus_introspectable_return_from_introspect:
 * @context: The D-Bus method invocation context
 * @out_XML_Data: const gchar * (FIXME, generate documentation)
 *
 * Return successfully by calling dbus_g_method_return().
 * This inline function exists only to provide type-safety.
 */
static inline
/* this comment is to stop gtkdoc realising this is static */
void tp_svc_dbus_introspectable_return_from_introspect (DBusGMethodInvocation *context,
    const gchar *out_XML_Data);
static inline void
tp_svc_dbus_introspectable_return_from_introspect (DBusGMethodInvocation *context,
    const gchar *out_XML_Data)
{
  dbus_g_method_return (context,
      out_XML_Data);
}



G_END_DECLS
