
#ifndef ___tf_marshal_MARSHAL_H__
#define ___tf_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* BOOLEAN:UINT (tf-signals-marshal.list:1) */
extern void _tf_marshal_BOOLEAN__UINT (GClosure     *closure,
                                       GValue       *return_value,
                                       guint         n_param_values,
                                       const GValue *param_values,
                                       gpointer      invocation_hint,
                                       gpointer      marshal_data);

/* BOXED:UINT,UINT,UINT (tf-signals-marshal.list:2) */
extern void _tf_marshal_BOXED__UINT_UINT_UINT (GClosure     *closure,
                                               GValue       *return_value,
                                               guint         n_param_values,
                                               const GValue *param_values,
                                               gpointer      invocation_hint,
                                               gpointer      marshal_data);

/* VOID:BOXED,UINT,UINT,UINT (tf-signals-marshal.list:3) */
extern void _tf_marshal_VOID__BOXED_UINT_UINT_UINT (GClosure     *closure,
                                                    GValue       *return_value,
                                                    guint         n_param_values,
                                                    const GValue *param_values,
                                                    gpointer      invocation_hint,
                                                    gpointer      marshal_data);

/* VOID:OBJECT,BOXED (tf-signals-marshal.list:4) */
extern void _tf_marshal_VOID__OBJECT_BOXED (GClosure     *closure,
                                            GValue       *return_value,
                                            guint         n_param_values,
                                            const GValue *param_values,
                                            gpointer      invocation_hint,
                                            gpointer      marshal_data);

/* VOID:OBJECT,OBJECT (tf-signals-marshal.list:5) */
extern void _tf_marshal_VOID__OBJECT_OBJECT (GClosure     *closure,
                                             GValue       *return_value,
                                             guint         n_param_values,
                                             const GValue *param_values,
                                             gpointer      invocation_hint,
                                             gpointer      marshal_data);

G_END_DECLS

#endif /* ___tf_marshal_MARSHAL_H__ */

