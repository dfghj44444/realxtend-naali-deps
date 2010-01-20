/****************************************************************************
** Meta object code from reading C++ file 'readiness-helper.h'
**
** Created: Wed 14. Oct 17:39:29 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'readiness-helper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__ReadinessHelper[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      28,   21,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   20,   20,   20, 0x08,
      98,   69,   20,   20, 0x08,
     152,  149,   20,   20, 0x08,
     199,  195,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tp__ReadinessHelper[] = {
    "Tp::ReadinessHelper\0\0status\0"
    "statusReady(uint)\0iterateIntrospection()\0"
    "proxy,errorName,errorMessage\0"
    "onProxyInvalidated(Tp::DBusProxy*,QString,QString)\0"
    "op\0onOperationFinished(Tp::PendingOperation*)\0"
    "obj\0onOperationDestroyed(QObject*)\0"
};

const QMetaObject Tp::ReadinessHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tp__ReadinessHelper,
      qt_meta_data_Tp__ReadinessHelper, 0 }
};

const QMetaObject *Tp::ReadinessHelper::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::ReadinessHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__ReadinessHelper))
        return static_cast<void*>(const_cast< ReadinessHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int Tp::ReadinessHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: statusReady((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: iterateIntrospection(); break;
        case 2: onProxyInvalidated((*reinterpret_cast< Tp::DBusProxy*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: onOperationFinished((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        case 4: onOperationDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Tp::ReadinessHelper::statusReady(uint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
