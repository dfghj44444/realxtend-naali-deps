/****************************************************************************
** Meta object code from reading C++ file 'connection-manager.h'
**
** Created: Wed 14. Oct 17:39:43 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connection-manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__ConnectionManager[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x08,
      67,   22,   22,   22, 0x08,
     106,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tp__ConnectionManager[] = {
    "Tp::ConnectionManager\0\0"
    "gotMainProperties(QDBusPendingCallWatcher*)\0"
    "gotProtocols(QDBusPendingCallWatcher*)\0"
    "gotParameters(QDBusPendingCallWatcher*)\0"
};

const QMetaObject Tp::ConnectionManager::staticMetaObject = {
    { &StatelessDBusProxy::staticMetaObject, qt_meta_stringdata_Tp__ConnectionManager,
      qt_meta_data_Tp__ConnectionManager, 0 }
};

const QMetaObject *Tp::ConnectionManager::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::ConnectionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__ConnectionManager))
        return static_cast<void*>(const_cast< ConnectionManager*>(this));
    if (!strcmp(_clname, "OptionalInterfaceFactory<ConnectionManager>"))
        return static_cast< OptionalInterfaceFactory<ConnectionManager>*>(const_cast< ConnectionManager*>(this));
    if (!strcmp(_clname, "ReadyObject"))
        return static_cast< ReadyObject*>(const_cast< ConnectionManager*>(this));
    if (!strcmp(_clname, "RefCounted"))
        return static_cast< RefCounted*>(const_cast< ConnectionManager*>(this));
    return StatelessDBusProxy::qt_metacast(_clname);
}

int Tp::ConnectionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StatelessDBusProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: gotMainProperties((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 1: gotProtocols((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 2: gotParameters((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
