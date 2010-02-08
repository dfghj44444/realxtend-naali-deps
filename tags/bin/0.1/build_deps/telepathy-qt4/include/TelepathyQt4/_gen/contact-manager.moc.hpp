/****************************************************************************
** Meta object code from reading C++ file 'contact-manager.h'
**
** Created: Wed 14. Oct 17:40:03 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contact-manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__ContactManager[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      29,   20,   19,   19, 0x05,
      78,   72,   19,   19, 0x05,
      98,   72,   19,   19, 0x05,
     164,  120,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     219,   19,   19,   19, 0x08,
     257,  255,   19,   19, 0x08,
     287,   19,   19,   19, 0x08,
     441,  334,   19,   19, 0x08,
     565,  334,   19,   19, 0x08,
     687,  334,   19,   19, 0x08,
     806,  334,   19,   19, 0x08,
     933,  930,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tp__ContactManager[] = {
    "Tp::ContactManager\0\0contacts\0"
    "presencePublicationRequested(Tp::Contacts)\0"
    "group\0groupAdded(QString)\0"
    "groupRemoved(QString)\0"
    "group,groupMembersAdded,groupMembersRemoved\0"
    "groupMembersChanged(QString,Tp::Contacts,Tp::Contacts)\0"
    "onAliasesChanged(Tp::AliasPairList)\0"
    ",\0onAvatarUpdated(uint,QString)\0"
    "onPresencesChanged(Tp::SimpleContactPresences)\0"
    "groupMembersAdded,groupLocalPendingMembersAdded,groupRemotePendingMemb"
    "ersAdded,groupMembersRemoved,details\0"
    "onSubscribeChannelMembersChanged(Tp::Contacts,Tp::Contacts,Tp::Contact"
    "s,Tp::Contacts,Tp::Channel::GroupMemberChangeDetails)\0"
    "onPublishChannelMembersChanged(Tp::Contacts,Tp::Contacts,Tp::Contacts,"
    "Tp::Contacts,Tp::Channel::GroupMemberChangeDetails)\0"
    "onDenyChannelMembersChanged(Tp::Contacts,Tp::Contacts,Tp::Contacts,Tp:"
    ":Contacts,Tp::Channel::GroupMemberChangeDetails)\0"
    "onContactListGroupMembersChanged(Tp::Contacts,Tp::Contacts,Tp::Contact"
    "s,Tp::Contacts,Tp::Channel::GroupMemberChangeDetails)\0"
    ",,\0onContactListGroupRemoved(Tp::DBusProxy*,QString,QString)\0"
};

const QMetaObject Tp::ContactManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tp__ContactManager,
      qt_meta_data_Tp__ContactManager, 0 }
};

const QMetaObject *Tp::ContactManager::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::ContactManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__ContactManager))
        return static_cast<void*>(const_cast< ContactManager*>(this));
    return QObject::qt_metacast(_clname);
}

int Tp::ContactManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: presencePublicationRequested((*reinterpret_cast< const Tp::Contacts(*)>(_a[1]))); break;
        case 1: groupAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: groupRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: groupMembersChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Tp::Contacts(*)>(_a[2])),(*reinterpret_cast< const Tp::Contacts(*)>(_a[3]))); break;
        case 4: onAliasesChanged((*reinterpret_cast< const Tp::AliasPairList(*)>(_a[1]))); break;
        case 5: onAvatarUpdated((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: onPresencesChanged((*reinterpret_cast< const Tp::SimpleContactPresences(*)>(_a[1]))); break;
        case 7: onSubscribeChannelMembersChanged((*reinterpret_cast< const Tp::Contacts(*)>(_a[1])),(*reinterpret_cast< const Tp::Contacts(*)>(_a[2])),(*reinterpret_cast< const Tp::Contacts(*)>(_a[3])),(*reinterpret_cast< const Tp::Contacts(*)>(_a[4])),(*reinterpret_cast< const Tp::Channel::GroupMemberChangeDetails(*)>(_a[5]))); break;
        case 8: onPublishChannelMembersChanged((*reinterpret_cast< const Tp::Contacts(*)>(_a[1])),(*reinterpret_cast< const Tp::Contacts(*)>(_a[2])),(*reinterpret_cast< const Tp::Contacts(*)>(_a[3])),(*reinterpret_cast< const Tp::Contacts(*)>(_a[4])),(*reinterpret_cast< const Tp::Channel::GroupMemberChangeDetails(*)>(_a[5]))); break;
        case 9: onDenyChannelMembersChanged((*reinterpret_cast< const Tp::Contacts(*)>(_a[1])),(*reinterpret_cast< const Tp::Contacts(*)>(_a[2])),(*reinterpret_cast< const Tp::Contacts(*)>(_a[3])),(*reinterpret_cast< const Tp::Contacts(*)>(_a[4])),(*reinterpret_cast< const Tp::Channel::GroupMemberChangeDetails(*)>(_a[5]))); break;
        case 10: onContactListGroupMembersChanged((*reinterpret_cast< const Tp::Contacts(*)>(_a[1])),(*reinterpret_cast< const Tp::Contacts(*)>(_a[2])),(*reinterpret_cast< const Tp::Contacts(*)>(_a[3])),(*reinterpret_cast< const Tp::Contacts(*)>(_a[4])),(*reinterpret_cast< const Tp::Channel::GroupMemberChangeDetails(*)>(_a[5]))); break;
        case 11: onContactListGroupRemoved((*reinterpret_cast< Tp::DBusProxy*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Tp::ContactManager::presencePublicationRequested(const Tp::Contacts & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::ContactManager::groupAdded(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tp::ContactManager::groupRemoved(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tp::ContactManager::groupMembersChanged(const QString & _t1, const Tp::Contacts & _t2, const Tp::Contacts & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
