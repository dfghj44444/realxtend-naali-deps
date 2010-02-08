/****************************************************************************
** Meta object code from reading C++ file 'channel.h'
**
** Created: Wed 14. Oct 17:39:39 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'channel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__Channel[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      33,   13,   12,   12, 0x05,
      82,   67,   12,   12, 0x05,
     133,  115,   12,   12, 0x05,
     188,  169,   12,   12, 0x05,
     332,  225,   12,   12, 0x05,
     464,  443,   12,   12, 0x05,
     535,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     579,   12,  561,   12, 0x09,
     608,  600,   12,   12, 0x08,
     652,  600,   12,   12, 0x08,
     693,  600,   12,   12, 0x08,
     729,  600,   12,   12, 0x08,
     769,   12,   12,   12, 0x08,
     783,  780,   12,   12, 0x08,
     824,   12,   12,   12, 0x08,
     850,   12,   12,   12, 0x08,
     874,  600,   12,   12, 0x08,
     919,  600,   12,   12, 0x08,
     959,  600,   12,   12, 0x08,
     999,  600,   12,   12, 0x08,
    1056,  600,   12,   12, 0x08,
    1096,  780,   12,   12, 0x08,
    1133, 1131,   12,   12, 0x08,
    1171, 1164,   12,   12, 0x08,
    1308, 1259,   12,   12, 0x08,
    1398, 1131,   12,   12, 0x08,
    1453,   12,   12,   12, 0x08,
    1479,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Channel[] = {
    "Tp::Channel\0\0flags,added,removed\0"
    "groupFlagsChanged(uint,uint,uint)\0"
    "canAddContacts\0groupCanAddContactsChanged(bool)\0"
    "canRemoveContacts\0groupCanRemoveContactsChanged(bool)\0"
    "canRescindContacts\0"
    "groupCanRescindContactsChanged(bool)\0"
    "groupMembersAdded,groupLocalPendingMembersAdded,groupRemotePendingMemb"
    "ersAdded,groupMembersRemoved,details\0"
    "groupMembersChanged(Tp::Contacts,Tp::Contacts,Tp::Contacts,Tp::Contact"
    "s,Tp::Channel::GroupMemberChangeDetails)\0"
    "owners,added,removed\0"
    "groupHandleOwnersChanged(Tp::HandleOwnerMap,Tp::UIntList,Tp::UIntList)\0"
    "groupSelfContactChanged()\0PendingOperation*\0"
    "groupAddSelfHandle()\0watcher\0"
    "gotMainProperties(QDBusPendingCallWatcher*)\0"
    "gotChannelType(QDBusPendingCallWatcher*)\0"
    "gotHandle(QDBusPendingCallWatcher*)\0"
    "gotInterfaces(QDBusPendingCallWatcher*)\0"
    "onClosed()\0op\0onConnectionReady(Tp::PendingOperation*)\0"
    "onConnectionInvalidated()\0"
    "onConnectionDestroyed()\0"
    "gotGroupProperties(QDBusPendingCallWatcher*)\0"
    "gotGroupFlags(QDBusPendingCallWatcher*)\0"
    "gotAllMembers(QDBusPendingCallWatcher*)\0"
    "gotLocalPendingMembersWithInfo(QDBusPendingCallWatcher*)\0"
    "gotSelfHandle(QDBusPendingCallWatcher*)\0"
    "gotContacts(Tp::PendingOperation*)\0,\0"
    "onGroupFlagsChanged(uint,uint)\0,,,,,,\0"
    "onMembersChanged(QString,Tp::UIntList,Tp::UIntList,Tp::UIntList,Tp::UI"
    "ntList,uint,uint)\0"
    "added,removed,localPending,remotePending,details\0"
    "onMembersChangedDetailed(Tp::UIntList,Tp::UIntList,Tp::UIntList,Tp::UI"
    "ntList,QVariantMap)\0"
    "onHandleOwnersChanged(Tp::HandleOwnerMap,Tp::UIntList)\0"
    "onSelfHandleChanged(uint)\0"
    "continueIntrospection()\0"
};

const QMetaObject Tp::Channel::staticMetaObject = {
    { &StatefulDBusProxy::staticMetaObject, qt_meta_stringdata_Tp__Channel,
      qt_meta_data_Tp__Channel, 0 }
};

const QMetaObject *Tp::Channel::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Channel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Channel))
        return static_cast<void*>(const_cast< Channel*>(this));
    if (!strcmp(_clname, "OptionalInterfaceFactory<Channel>"))
        return static_cast< OptionalInterfaceFactory<Channel>*>(const_cast< Channel*>(this));
    if (!strcmp(_clname, "ReadyObject"))
        return static_cast< ReadyObject*>(const_cast< Channel*>(this));
    if (!strcmp(_clname, "RefCounted"))
        return static_cast< RefCounted*>(const_cast< Channel*>(this));
    return StatefulDBusProxy::qt_metacast(_clname);
}

int Tp::Channel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StatefulDBusProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: groupFlagsChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: groupCanAddContactsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: groupCanRemoveContactsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: groupCanRescindContactsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: groupMembersChanged((*reinterpret_cast< const Tp::Contacts(*)>(_a[1])),(*reinterpret_cast< const Tp::Contacts(*)>(_a[2])),(*reinterpret_cast< const Tp::Contacts(*)>(_a[3])),(*reinterpret_cast< const Tp::Contacts(*)>(_a[4])),(*reinterpret_cast< const Tp::Channel::GroupMemberChangeDetails(*)>(_a[5]))); break;
        case 5: groupHandleOwnersChanged((*reinterpret_cast< const Tp::HandleOwnerMap(*)>(_a[1])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[2])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[3]))); break;
        case 6: groupSelfContactChanged(); break;
        case 7: { PendingOperation* _r = groupAddSelfHandle();
            if (_a[0]) *reinterpret_cast< PendingOperation**>(_a[0]) = _r; }  break;
        case 8: gotMainProperties((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 9: gotChannelType((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 10: gotHandle((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 11: gotInterfaces((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 12: onClosed(); break;
        case 13: onConnectionReady((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        case 14: onConnectionInvalidated(); break;
        case 15: onConnectionDestroyed(); break;
        case 16: gotGroupProperties((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 17: gotGroupFlags((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 18: gotAllMembers((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 19: gotLocalPendingMembersWithInfo((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 20: gotSelfHandle((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 21: gotContacts((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        case 22: onGroupFlagsChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 23: onMembersChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[2])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[3])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[4])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6])),(*reinterpret_cast< uint(*)>(_a[7]))); break;
        case 24: onMembersChangedDetailed((*reinterpret_cast< const Tp::UIntList(*)>(_a[1])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[2])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[3])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[4])),(*reinterpret_cast< const QVariantMap(*)>(_a[5]))); break;
        case 25: onHandleOwnersChanged((*reinterpret_cast< const Tp::HandleOwnerMap(*)>(_a[1])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[2]))); break;
        case 26: onSelfHandleChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 27: continueIntrospection(); break;
        default: ;
        }
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void Tp::Channel::groupFlagsChanged(uint _t1, uint _t2, uint _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::Channel::groupCanAddContactsChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tp::Channel::groupCanRemoveContactsChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tp::Channel::groupCanRescindContactsChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Tp::Channel::groupMembersChanged(const Tp::Contacts & _t1, const Tp::Contacts & _t2, const Tp::Contacts & _t3, const Tp::Contacts & _t4, const Tp::Channel::GroupMemberChangeDetails & _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Tp::Channel::groupHandleOwnersChanged(const Tp::HandleOwnerMap & _t1, const Tp::UIntList & _t2, const Tp::UIntList & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Tp::Channel::groupSelfContactChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
