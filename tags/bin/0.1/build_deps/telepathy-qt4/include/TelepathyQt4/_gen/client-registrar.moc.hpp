/****************************************************************************
** Meta object code from reading C++ file 'client-registrar.h'
**
** Created: Wed 14. Oct 17:40:01 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client-registrar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__ClientRegistrar[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

       0        // eod
};

static const char qt_meta_stringdata_Tp__ClientRegistrar[] = {
    "Tp::ClientRegistrar\0"
};

const QMetaObject Tp::ClientRegistrar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tp__ClientRegistrar,
      qt_meta_data_Tp__ClientRegistrar, 0 }
};

const QMetaObject *Tp::ClientRegistrar::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::ClientRegistrar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__ClientRegistrar))
        return static_cast<void*>(const_cast< ClientRegistrar*>(this));
    if (!strcmp(_clname, "RefCounted"))
        return static_cast< RefCounted*>(const_cast< ClientRegistrar*>(this));
    return QObject::qt_metacast(_clname);
}

int Tp::ClientRegistrar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
