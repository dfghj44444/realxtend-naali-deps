/****************************************************************************
** Meta object code from reading C++ file 'dbus-proxy.h'
**
** Created: Wed 14. Oct 17:40:04 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbus-proxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__DBusProxy[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      44,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      88,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tp__DBusProxy[] = {
    "Tp::DBusProxy\0\0proxy,errorName,errorMessage\0"
    "invalidated(Tp::DBusProxy*,QString,QString)\0"
    "emitInvalidated()\0"
};

const QMetaObject Tp::DBusProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tp__DBusProxy,
      qt_meta_data_Tp__DBusProxy, 0 }
};

const QMetaObject *Tp::DBusProxy::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::DBusProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__DBusProxy))
        return static_cast<void*>(const_cast< DBusProxy*>(this));
    return QObject::qt_metacast(_clname);
}

int Tp::DBusProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: invalidated((*reinterpret_cast< Tp::DBusProxy*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: emitInvalidated(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Tp::DBusProxy::invalidated(Tp::DBusProxy * _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Tp__StatelessDBusProxy[] = {

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

static const char qt_meta_stringdata_Tp__StatelessDBusProxy[] = {
    "Tp::StatelessDBusProxy\0"
};

const QMetaObject Tp::StatelessDBusProxy::staticMetaObject = {
    { &DBusProxy::staticMetaObject, qt_meta_stringdata_Tp__StatelessDBusProxy,
      qt_meta_data_Tp__StatelessDBusProxy, 0 }
};

const QMetaObject *Tp::StatelessDBusProxy::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::StatelessDBusProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__StatelessDBusProxy))
        return static_cast<void*>(const_cast< StatelessDBusProxy*>(this));
    return DBusProxy::qt_metacast(_clname);
}

int Tp::StatelessDBusProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DBusProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Tp__StatefulDBusProxy[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      46,   23,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tp__StatefulDBusProxy[] = {
    "Tp::StatefulDBusProxy\0\0name,oldOwner,newOwner\0"
    "onServiceOwnerChanged(QString,QString,QString)\0"
};

const QMetaObject Tp::StatefulDBusProxy::staticMetaObject = {
    { &DBusProxy::staticMetaObject, qt_meta_stringdata_Tp__StatefulDBusProxy,
      qt_meta_data_Tp__StatefulDBusProxy, 0 }
};

const QMetaObject *Tp::StatefulDBusProxy::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::StatefulDBusProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__StatefulDBusProxy))
        return static_cast<void*>(const_cast< StatefulDBusProxy*>(this));
    return DBusProxy::qt_metacast(_clname);
}

int Tp::StatefulDBusProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DBusProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onServiceOwnerChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
