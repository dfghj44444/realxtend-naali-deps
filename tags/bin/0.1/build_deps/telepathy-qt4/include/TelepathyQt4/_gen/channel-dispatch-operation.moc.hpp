/****************************************************************************
** Meta object code from reading C++ file 'channel-dispatch-operation.h'
**
** Created: Wed 14. Oct 17:39:34 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'channel-dispatch-operation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__ChannelDispatchOperation[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      61,   30,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
     101,   29,   29,   29, 0x08,
     122,  114,   29,   29, 0x08,
     169,  166,   29,   29, 0x08,
     210,  166,   29,   29, 0x08,
     248,  166,   29,   29, 0x08,
     327,  286,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tp__ChannelDispatchOperation[] = {
    "Tp::ChannelDispatchOperation\0\0"
    "channel,errorName,errorMessage\0"
    "channelLost(ChannelPtr,QString,QString)\0"
    "onFinished()\0watcher\0"
    "gotMainProperties(QDBusPendingCallWatcher*)\0"
    "op\0onConnectionReady(Tp::PendingOperation*)\0"
    "onAccountReady(Tp::PendingOperation*)\0"
    "onChannelReady(Tp::PendingOperation*)\0"
    "channelObjectPath,errorName,errorMessage\0"
    "onChannelLost(QDBusObjectPath,QString,QString)\0"
};

const QMetaObject Tp::ChannelDispatchOperation::staticMetaObject = {
    { &StatefulDBusProxy::staticMetaObject, qt_meta_stringdata_Tp__ChannelDispatchOperation,
      qt_meta_data_Tp__ChannelDispatchOperation, 0 }
};

const QMetaObject *Tp::ChannelDispatchOperation::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::ChannelDispatchOperation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__ChannelDispatchOperation))
        return static_cast<void*>(const_cast< ChannelDispatchOperation*>(this));
    if (!strcmp(_clname, "OptionalInterfaceFactory<ChannelDispatchOperation>"))
        return static_cast< OptionalInterfaceFactory<ChannelDispatchOperation>*>(const_cast< ChannelDispatchOperation*>(this));
    if (!strcmp(_clname, "ReadyObject"))
        return static_cast< ReadyObject*>(const_cast< ChannelDispatchOperation*>(this));
    if (!strcmp(_clname, "RefCounted"))
        return static_cast< RefCounted*>(const_cast< ChannelDispatchOperation*>(this));
    return StatefulDBusProxy::qt_metacast(_clname);
}

int Tp::ChannelDispatchOperation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StatefulDBusProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: channelLost((*reinterpret_cast< const ChannelPtr(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: onFinished(); break;
        case 2: gotMainProperties((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 3: onConnectionReady((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        case 4: onAccountReady((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        case 5: onChannelReady((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        case 6: onChannelLost((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Tp::ChannelDispatchOperation::channelLost(const ChannelPtr & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
