/****************************************************************************
** Meta object code from reading C++ file 'connection.h'
**
** Created: Tue 8. Dec 08:59:16 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__Connection[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   12, // methods
       0,    0, // properties
       1,  107, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      42,   16,   15,   15, 0x05,
      77,   67,   15,   15, 0x05,
     101,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     122,   15,   15,   15, 0x08,
     144,  142,   15,   15, 0x08,
     179,  171,   15,   15, 0x08,
     215,  171,   15,   15, 0x08,
     255,  171,   15,   15, 0x08,
     311,  171,   15,   15, 0x08,
     355,   15,   15,   15, 0x08,
     393,  171,   15,   15, 0x08,
     433,   15,   15,   15, 0x08,
     479,   15,   15,   15, 0x08,
     524,   15,   15,   15, 0x08,
     550,   15,   15,   15, 0x08,
     588,   15,   15,   15, 0x08,
     642,   15,   15,   15, 0x08,
     685,  680,   15,   15, 0x08,
     706,   15,   15,   15, 0x08,

 // enums: name, flags, count, data
     732, 0x0,    4,  111,

 // enum data: key, value
     739, uint(Tp::Connection::StatusDisconnected),
     758, uint(Tp::Connection::StatusConnecting),
     775, uint(Tp::Connection::StatusConnected),
     791, uint(Tp::Connection::StatusUnknown),

       0        // eod
};

static const char qt_meta_stringdata_Tp__Connection[] = {
    "Tp::Connection\0\0newStatus,newStatusReason\0"
    "statusChanged(uint,uint)\0newHandle\0"
    "selfHandleChanged(uint)\0selfContactChanged()\0"
    "onStatusReady(uint)\0,\0onStatusChanged(uint,uint)\0"
    "watcher\0gotStatus(QDBusPendingCallWatcher*)\0"
    "gotInterfaces(QDBusPendingCallWatcher*)\0"
    "gotContactAttributeInterfaces(QDBusPendingCallWatcher*)\0"
    "gotSimpleStatuses(QDBusPendingCallWatcher*)\0"
    "gotSelfContact(Tp::PendingOperation*)\0"
    "gotSelfHandle(QDBusPendingCallWatcher*)\0"
    "gotContactListsHandles(Tp::PendingOperation*)\0"
    "gotContactListChannel(Tp::PendingOperation*)\0"
    "contactListChannelReady()\0"
    "onNewChannels(Tp::ChannelDetailsList)\0"
    "onContactListGroupChannelReady(Tp::PendingOperation*)\0"
    "gotChannels(QDBusPendingCallWatcher*)\0"
    "type\0doReleaseSweep(uint)\0"
    "onSelfHandleChanged(uint)\0Status\0"
    "StatusDisconnected\0StatusConnecting\0"
    "StatusConnected\0StatusUnknown\0"
};

const QMetaObject Tp::Connection::staticMetaObject = {
    { &StatefulDBusProxy::staticMetaObject, qt_meta_stringdata_Tp__Connection,
      qt_meta_data_Tp__Connection, 0 }
};

const QMetaObject *Tp::Connection::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Connection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Connection))
        return static_cast<void*>(const_cast< Connection*>(this));
    if (!strcmp(_clname, "OptionalInterfaceFactory<Connection>"))
        return static_cast< OptionalInterfaceFactory<Connection>*>(const_cast< Connection*>(this));
    if (!strcmp(_clname, "ReadyObject"))
        return static_cast< ReadyObject*>(const_cast< Connection*>(this));
    if (!strcmp(_clname, "RefCounted"))
        return static_cast< RefCounted*>(const_cast< Connection*>(this));
    return StatefulDBusProxy::qt_metacast(_clname);
}

int Tp::Connection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StatefulDBusProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: statusChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: selfHandleChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: selfContactChanged(); break;
        case 3: onStatusReady((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: onStatusChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 5: gotStatus((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 6: gotInterfaces((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 7: gotContactAttributeInterfaces((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 8: gotSimpleStatuses((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 9: gotSelfContact((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        case 10: gotSelfHandle((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 11: gotContactListsHandles((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        case 12: gotContactListChannel((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        case 13: contactListChannelReady(); break;
        case 14: onNewChannels((*reinterpret_cast< const Tp::ChannelDetailsList(*)>(_a[1]))); break;
        case 15: onContactListGroupChannelReady((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        case 16: gotChannels((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 17: doReleaseSweep((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 18: onSelfHandleChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void Tp::Connection::statusChanged(uint _t1, uint _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::Connection::selfHandleChanged(uint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tp::Connection::selfContactChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
