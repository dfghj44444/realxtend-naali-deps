/****************************************************************************
** Meta object code from reading C++ file 'cli-channel.h'
**
** Created: Mon 7. Dec 18:09:20 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cli-channel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__Client__ChannelInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   12, // methods
       8,   37, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   29,   39,   29, 0x0a,
      94,   29,   67,   29, 0x0a,
     140,   29,  111,   29, 0x0a,
     183,   29,  152,   29, 0x0a,

 // properties: name, type, flags
     207,  199, 0x0a095001,
     231,  219, 0x0b095001,
     247,  242, 0x03095001,
     260,  199, 0x0a095001,
     269,  242, 0x03095001,
     291,  286, 0x01095001,
     301,  242, 0x03095001,
     317,  199, 0x0a095001,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ChannelInterface[] = {
    "Tp::Client::ChannelInterface\0\0Closed()\0"
    "QDBusPendingReply<>\0Close()\0"
    "QDBusPendingReply<QString>\0GetChannelType()\0"
    "QDBusPendingReply<uint,uint>\0GetHandle()\0"
    "QDBusPendingReply<QStringList>\0"
    "GetInterfaces()\0QString\0ChannelType\0"
    "QStringList\0Interfaces\0uint\0TargetHandle\0"
    "TargetID\0TargetHandleType\0bool\0Requested\0"
    "InitiatorHandle\0InitiatorID\0"
};

const QMetaObject Tp::Client::ChannelInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ChannelInterface,
      qt_meta_data_Tp__Client__ChannelInterface, 0 }
};

const QMetaObject *Tp::Client::ChannelInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ChannelInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ChannelInterface))
        return static_cast<void*>(const_cast< ChannelInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ChannelInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: Closed(); break;
        case 1: { QDBusPendingReply<> _r = Close();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 2: { QDBusPendingReply<QString> _r = GetChannelType();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<uint,uint> _r = GetHandle();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint,uint>*>(_a[0]) = _r; }  break;
        case 4: { QDBusPendingReply<QStringList> _r = GetInterfaces();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QStringList>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = ChannelType(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = Interfaces(); break;
        case 2: *reinterpret_cast< uint*>(_v) = TargetHandle(); break;
        case 3: *reinterpret_cast< QString*>(_v) = TargetID(); break;
        case 4: *reinterpret_cast< uint*>(_v) = TargetHandleType(); break;
        case 5: *reinterpret_cast< bool*>(_v) = Requested(); break;
        case 6: *reinterpret_cast< uint*>(_v) = InitiatorHandle(); break;
        case 7: *reinterpret_cast< QString*>(_v) = InitiatorID(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Tp::Client::ChannelInterface::Closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_Tp__Client__ChannelInterfaceCallStateInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      62,   48,   47,   47, 0x05,

 // slots: signature, parameters, type, tag, flags
     133,   47,   90,   47, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ChannelInterfaceCallStateInterface[] = {
    "Tp::Client::ChannelInterfaceCallStateInterface\0"
    "\0contact,state\0CallStateChanged(uint,uint)\0"
    "QDBusPendingReply<Tp::ChannelCallStateMap>\0"
    "GetCallStates()\0"
};

const QMetaObject Tp::Client::ChannelInterfaceCallStateInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ChannelInterfaceCallStateInterface,
      qt_meta_data_Tp__Client__ChannelInterfaceCallStateInterface, 0 }
};

const QMetaObject *Tp::Client::ChannelInterfaceCallStateInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ChannelInterfaceCallStateInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ChannelInterfaceCallStateInterface))
        return static_cast<void*>(const_cast< ChannelInterfaceCallStateInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ChannelInterfaceCallStateInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: CallStateChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: { QDBusPendingReply<Tp::ChannelCallStateMap> _r = GetCallStates();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::ChannelCallStateMap>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Tp::Client::ChannelInterfaceCallStateInterface::CallStateChanged(uint _t1, uint _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Tp__Client__ChannelInterfaceChatStateInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      62,   48,   47,   47, 0x05,

 // slots: signature, parameters, type, tag, flags
     116,  110,   90,   47, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ChannelInterfaceChatStateInterface[] = {
    "Tp::Client::ChannelInterfaceChatStateInterface\0"
    "\0contact,state\0ChatStateChanged(uint,uint)\0"
    "QDBusPendingReply<>\0state\0SetChatState(uint)\0"
};

const QMetaObject Tp::Client::ChannelInterfaceChatStateInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ChannelInterfaceChatStateInterface,
      qt_meta_data_Tp__Client__ChannelInterfaceChatStateInterface, 0 }
};

const QMetaObject *Tp::Client::ChannelInterfaceChatStateInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ChannelInterfaceChatStateInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ChannelInterfaceChatStateInterface))
        return static_cast<void*>(const_cast< ChannelInterfaceChatStateInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ChannelInterfaceChatStateInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ChatStateChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: { QDBusPendingReply<> _r = SetChatState((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Tp::Client::ChannelInterfaceChatStateInterface::ChatStateChanged(uint _t1, uint _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Tp__Client__ChannelInterfaceDTMFInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      78,   63,   43,   42, 0x0a,
     109,  100,   43,   42, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ChannelInterfaceDTMFInterface[] = {
    "Tp::Client::ChannelInterfaceDTMFInterface\0"
    "\0QDBusPendingReply<>\0streamID,event\0"
    "StartTone(uint,uchar)\0streamID\0"
    "StopTone(uint)\0"
};

const QMetaObject Tp::Client::ChannelInterfaceDTMFInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ChannelInterfaceDTMFInterface,
      qt_meta_data_Tp__Client__ChannelInterfaceDTMFInterface, 0 }
};

const QMetaObject *Tp::Client::ChannelInterfaceDTMFInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ChannelInterfaceDTMFInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ChannelInterfaceDTMFInterface))
        return static_cast<void*>(const_cast< ChannelInterfaceDTMFInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ChannelInterfaceDTMFInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QDBusPendingReply<> _r = StartTone((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uchar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 1: { QDBusPendingReply<> _r = StopTone((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_Tp__Client__ChannelInterfaceGroupInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   12, // methods
       6,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      58,   44,   43,   43, 0x05,
     122,  111,   43,   43, 0x05,
     146,   44,   43,   43, 0x05,
     237,  175,   43,   43, 0x05,
     372,  323,   43,   43, 0x05,

 // slots: signature, parameters, type, tag, flags
     497,  480,  460,   43, 0x0a,
     588,   43,  530,   43, 0x0a,
     628,   43,  604,   43, 0x0a,
     684,  676,  644,   43, 0x0a,
     714,   43,  644,   43, 0x0a,
     783,   43,  739,   43, 0x0a,
     816,   43,  644,   43, 0x0a,
     829,   43,  644,   43, 0x0a,
     855,   43,  604,   43, 0x0a,
     871,  480,  460,   43, 0x0a,
     931,  907,  460,   43, 0x0a,

 // properties: name, type, flags
     987,  982, 0x03095001,
    1017,  998, 0x00095009,
    1055, 1030, 0x00095009,
    1088, 1075, 0x00095009,
    1096, 1075, 0x00095009,
    1117,  982, 0x03095001,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ChannelInterfaceGroupInterface[] = {
    "Tp::Client::ChannelInterfaceGroupInterface\0"
    "\0added,removed\0"
    "HandleOwnersChanged(Tp::HandleOwnerMap,Tp::UIntList)\0"
    "selfHandle\0SelfHandleChanged(uint)\0"
    "GroupFlagsChanged(uint,uint)\0"
    "message,added,removed,localPending,remotePending,actor,reason\0"
    "MembersChanged(QString,Tp::UIntList,Tp::UIntList,Tp::UIntList,Tp::UInt"
    "List,uint,uint)\0"
    "added,removed,localPending,remotePending,details\0"
    "MembersChangedDetailed(Tp::UIntList,Tp::UIntList,Tp::UIntList,Tp::UInt"
    "List,QVariantMap)\0"
    "QDBusPendingReply<>\0contacts,message\0"
    "AddMembers(Tp::UIntList,QString)\0"
    "QDBusPendingReply<Tp::UIntList,Tp::UIntList,Tp::UIntList>\0"
    "GetAllMembers()\0QDBusPendingReply<uint>\0"
    "GetGroupFlags()\0QDBusPendingReply<Tp::UIntList>\0"
    "handles\0GetHandleOwners(Tp::UIntList)\0"
    "GetLocalPendingMembers()\0"
    "QDBusPendingReply<Tp::LocalPendingInfoList>\0"
    "GetLocalPendingMembersWithInfo()\0"
    "GetMembers()\0GetRemotePendingMembers()\0"
    "GetSelfHandle()\0RemoveMembers(Tp::UIntList,QString)\0"
    "contacts,message,reason\0"
    "RemoveMembersWithReason(Tp::UIntList,QString,uint)\0"
    "uint\0GroupFlags\0Tp::HandleOwnerMap\0"
    "HandleOwners\0Tp::LocalPendingInfoList\0"
    "LocalPendingMembers\0Tp::UIntList\0"
    "Members\0RemotePendingMembers\0SelfHandle\0"
};

const QMetaObject Tp::Client::ChannelInterfaceGroupInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ChannelInterfaceGroupInterface,
      qt_meta_data_Tp__Client__ChannelInterfaceGroupInterface, 0 }
};

const QMetaObject *Tp::Client::ChannelInterfaceGroupInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ChannelInterfaceGroupInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ChannelInterfaceGroupInterface))
        return static_cast<void*>(const_cast< ChannelInterfaceGroupInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ChannelInterfaceGroupInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: HandleOwnersChanged((*reinterpret_cast< const Tp::HandleOwnerMap(*)>(_a[1])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[2]))); break;
        case 1: SelfHandleChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: GroupFlagsChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 3: MembersChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[2])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[3])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[4])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6])),(*reinterpret_cast< uint(*)>(_a[7]))); break;
        case 4: MembersChangedDetailed((*reinterpret_cast< const Tp::UIntList(*)>(_a[1])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[2])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[3])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[4])),(*reinterpret_cast< const QVariantMap(*)>(_a[5]))); break;
        case 5: { QDBusPendingReply<> _r = AddMembers((*reinterpret_cast< const Tp::UIntList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 6: { QDBusPendingReply<Tp::UIntList,Tp::UIntList,Tp::UIntList> _r = GetAllMembers();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::UIntList,Tp::UIntList,Tp::UIntList>*>(_a[0]) = _r; }  break;
        case 7: { QDBusPendingReply<uint> _r = GetGroupFlags();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = _r; }  break;
        case 8: { QDBusPendingReply<Tp::UIntList> _r = GetHandleOwners((*reinterpret_cast< const Tp::UIntList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::UIntList>*>(_a[0]) = _r; }  break;
        case 9: { QDBusPendingReply<Tp::UIntList> _r = GetLocalPendingMembers();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::UIntList>*>(_a[0]) = _r; }  break;
        case 10: { QDBusPendingReply<Tp::LocalPendingInfoList> _r = GetLocalPendingMembersWithInfo();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::LocalPendingInfoList>*>(_a[0]) = _r; }  break;
        case 11: { QDBusPendingReply<Tp::UIntList> _r = GetMembers();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::UIntList>*>(_a[0]) = _r; }  break;
        case 12: { QDBusPendingReply<Tp::UIntList> _r = GetRemotePendingMembers();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::UIntList>*>(_a[0]) = _r; }  break;
        case 13: { QDBusPendingReply<uint> _r = GetSelfHandle();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = _r; }  break;
        case 14: { QDBusPendingReply<> _r = RemoveMembers((*reinterpret_cast< const Tp::UIntList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 15: { QDBusPendingReply<> _r = RemoveMembersWithReason((*reinterpret_cast< const Tp::UIntList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = GroupFlags(); break;
        case 1: *reinterpret_cast< Tp::HandleOwnerMap*>(_v) = HandleOwners(); break;
        case 2: *reinterpret_cast< Tp::LocalPendingInfoList*>(_v) = LocalPendingMembers(); break;
        case 3: *reinterpret_cast< Tp::UIntList*>(_v) = Members(); break;
        case 4: *reinterpret_cast< Tp::UIntList*>(_v) = RemotePendingMembers(); break;
        case 5: *reinterpret_cast< uint*>(_v) = SelfHandle(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Tp::Client::ChannelInterfaceGroupInterface::HandleOwnersChanged(const Tp::HandleOwnerMap & _t1, const Tp::UIntList & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::Client::ChannelInterfaceGroupInterface::SelfHandleChanged(uint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tp::Client::ChannelInterfaceGroupInterface::GroupFlagsChanged(uint _t1, uint _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tp::Client::ChannelInterfaceGroupInterface::MembersChanged(const QString & _t1, const Tp::UIntList & _t2, const Tp::UIntList & _t3, const Tp::UIntList & _t4, const Tp::UIntList & _t5, uint _t6, uint _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Tp::Client::ChannelInterfaceGroupInterface::MembersChangedDetailed(const Tp::UIntList & _t1, const Tp::UIntList & _t2, const Tp::UIntList & _t3, const Tp::UIntList & _t4, const QVariantMap & _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
static const uint qt_meta_data_Tp__Client__ChannelInterfaceHoldInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      60,   43,   42,   42, 0x05,

 // slots: signature, parameters, type, tag, flags
     117,   42,   88,   42, 0x0a,
     157,  152,  132,   42, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ChannelInterfaceHoldInterface[] = {
    "Tp::Client::ChannelInterfaceHoldInterface\0"
    "\0holdState,reason\0HoldStateChanged(uint,uint)\0"
    "QDBusPendingReply<uint,uint>\0"
    "GetHoldState()\0QDBusPendingReply<>\0"
    "hold\0RequestHold(bool)\0"
};

const QMetaObject Tp::Client::ChannelInterfaceHoldInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ChannelInterfaceHoldInterface,
      qt_meta_data_Tp__Client__ChannelInterfaceHoldInterface, 0 }
};

const QMetaObject *Tp::Client::ChannelInterfaceHoldInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ChannelInterfaceHoldInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ChannelInterfaceHoldInterface))
        return static_cast<void*>(const_cast< ChannelInterfaceHoldInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ChannelInterfaceHoldInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: HoldStateChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: { QDBusPendingReply<uint,uint> _r = GetHoldState();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint,uint>*>(_a[0]) = _r; }  break;
        case 2: { QDBusPendingReply<> _r = RequestHold((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Tp::Client::ChannelInterfaceHoldInterface::HoldStateChanged(uint _t1, uint _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Tp__Client__ChannelInterfaceMediaSignallingInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      81,   54,   53,   53, 0x05,

 // slots: signature, parameters, type, tag, flags
     175,   53,  124,   53, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ChannelInterfaceMediaSignallingInterface[] = {
    "Tp::Client::ChannelInterfaceMediaSignallingInterface\0"
    "\0sessionHandler,sessionType\0"
    "NewSessionHandler(QDBusObjectPath,QString)\0"
    "QDBusPendingReply<Tp::MediaSessionHandlerInfoList>\0"
    "GetSessionHandlers()\0"
};

const QMetaObject Tp::Client::ChannelInterfaceMediaSignallingInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ChannelInterfaceMediaSignallingInterface,
      qt_meta_data_Tp__Client__ChannelInterfaceMediaSignallingInterface, 0 }
};

const QMetaObject *Tp::Client::ChannelInterfaceMediaSignallingInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ChannelInterfaceMediaSignallingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ChannelInterfaceMediaSignallingInterface))
        return static_cast<void*>(const_cast< ChannelInterfaceMediaSignallingInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ChannelInterfaceMediaSignallingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: NewSessionHandler((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: { QDBusPendingReply<Tp::MediaSessionHandlerInfoList> _r = GetSessionHandlers();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::MediaSessionHandlerInfoList>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Tp::Client::ChannelInterfaceMediaSignallingInterface::NewSessionHandler(const QDBusObjectPath & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Tp__Client__ChannelInterfaceMessagesInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   12, // methods
       4,   37, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      74,   47,   46,   46, 0x05,
     131,  120,   46,   46, 0x05,
     176,  168,   46,   46, 0x05,

 // slots: signature, parameters, type, tag, flags
     254,  240,  213,   46, 0x0a,
     353,  337,  292,   46, 0x0a,

 // properties: name, type, flags
     409,  397, 0x0b095001,
     436,  431, 0x03095001,
     484,  460, 0x00095009,
     500,  431, 0x03095001,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ChannelInterfaceMessagesInterface[] = {
    "Tp::Client::ChannelInterfaceMessagesInterface\0"
    "\0content,flags,messageToken\0"
    "MessageSent(Tp::MessagePartList,uint,QString)\0"
    "messageIDs\0PendingMessagesRemoved(Tp::UIntList)\0"
    "message\0MessageReceived(Tp::MessagePartList)\0"
    "QDBusPendingReply<QString>\0message,flags\0"
    "SendMessage(Tp::MessagePartList,uint)\0"
    "QDBusPendingReply<Tp::MessagePartContentMap>\0"
    "messageID,parts\0"
    "GetPendingMessageContent(uint,Tp::UIntList)\0"
    "QStringList\0SupportedContentTypes\0"
    "uint\0MessagePartSupportFlags\0"
    "Tp::MessagePartListList\0PendingMessages\0"
    "DeliveryReportingSupport\0"
};

const QMetaObject Tp::Client::ChannelInterfaceMessagesInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ChannelInterfaceMessagesInterface,
      qt_meta_data_Tp__Client__ChannelInterfaceMessagesInterface, 0 }
};

const QMetaObject *Tp::Client::ChannelInterfaceMessagesInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ChannelInterfaceMessagesInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ChannelInterfaceMessagesInterface))
        return static_cast<void*>(const_cast< ChannelInterfaceMessagesInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ChannelInterfaceMessagesInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: MessageSent((*reinterpret_cast< const Tp::MessagePartList(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: PendingMessagesRemoved((*reinterpret_cast< const Tp::UIntList(*)>(_a[1]))); break;
        case 2: MessageReceived((*reinterpret_cast< const Tp::MessagePartList(*)>(_a[1]))); break;
        case 3: { QDBusPendingReply<QString> _r = SendMessage((*reinterpret_cast< const Tp::MessagePartList(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = _r; }  break;
        case 4: { QDBusPendingReply<Tp::MessagePartContentMap> _r = GetPendingMessageContent((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::MessagePartContentMap>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = SupportedContentTypes(); break;
        case 1: *reinterpret_cast< uint*>(_v) = MessagePartSupportFlags(); break;
        case 2: *reinterpret_cast< Tp::MessagePartListList*>(_v) = PendingMessages(); break;
        case 3: *reinterpret_cast< uint*>(_v) = DeliveryReportingSupport(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Tp::Client::ChannelInterfaceMessagesInterface::MessageSent(const Tp::MessagePartList & _t1, uint _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::Client::ChannelInterfaceMessagesInterface::PendingMessagesRemoved(const Tp::UIntList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tp::Client::ChannelInterfaceMessagesInterface::MessageReceived(const Tp::MessagePartList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_Tp__Client__ChannelInterfacePasswordInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      61,   47,   46,   46, 0x05,

 // slots: signature, parameters, type, tag, flags
     117,   46,   93,   46, 0x0a,
     169,  160,  136,   46, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ChannelInterfacePasswordInterface[] = {
    "Tp::Client::ChannelInterfacePasswordInterface\0"
    "\0added,removed\0PasswordFlagsChanged(uint,uint)\0"
    "QDBusPendingReply<uint>\0GetPasswordFlags()\0"
    "QDBusPendingReply<bool>\0password\0"
    "ProvidePassword(QString)\0"
};

const QMetaObject Tp::Client::ChannelInterfacePasswordInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ChannelInterfacePasswordInterface,
      qt_meta_data_Tp__Client__ChannelInterfacePasswordInterface, 0 }
};

const QMetaObject *Tp::Client::ChannelInterfacePasswordInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ChannelInterfacePasswordInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ChannelInterfacePasswordInterface))
        return static_cast<void*>(const_cast< ChannelInterfacePasswordInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ChannelInterfacePasswordInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: PasswordFlagsChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: { QDBusPendingReply<uint> _r = GetPasswordFlags();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = _r; }  break;
        case 2: { QDBusPendingReply<bool> _r = ProvidePassword((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Tp::Client::ChannelInterfacePasswordInterface::PasswordFlagsChanged(uint _t1, uint _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Tp__Client__ChannelTypeContactListInterface[] = {

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

static const char qt_meta_stringdata_Tp__Client__ChannelTypeContactListInterface[] = {
    "Tp::Client::ChannelTypeContactListInterface\0"
};

const QMetaObject Tp::Client::ChannelTypeContactListInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ChannelTypeContactListInterface,
      qt_meta_data_Tp__Client__ChannelTypeContactListInterface, 0 }
};

const QMetaObject *Tp::Client::ChannelTypeContactListInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ChannelTypeContactListInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ChannelTypeContactListInterface))
        return static_cast<void*>(const_cast< ChannelTypeContactListInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ChannelTypeContactListInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Tp__Client__ChannelTypeFileTransferInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   12, // methods
      11,   37, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      59,   46,   45,   45, 0x05,
     101,   95,   45,   45, 0x05,
     151,  137,   45,   45, 0x05,

 // slots: signature, parameters, type, tag, flags
     268,  216,  184,   45, 0x0a,
     359,  314,  184,   45, 0x0a,

 // properties: name, type, flags
     400,  395, 0x03095001,
     414,  406, 0x0a095001,
     426,  406, 0x0a095001,
     446,  435, 0x05095001,
     451,  395, 0x03095001,
     467,  406, 0x0a095001,
     479,  406, 0x0a095001,
     501,  491, 0x04095001,
     529,  506, 0x00095009,
     550,  435, 0x05095001,
     567,  435, 0x05095001,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ChannelTypeFileTransferInterface[] = {
    "Tp::Client::ChannelTypeFileTransferInterface\0"
    "\0state,reason\0FileTransferStateChanged(uint,uint)\0"
    "count\0TransferredBytesChanged(qulonglong)\0"
    "initialOffset\0InitialOffsetDefined(qulonglong)\0"
    "QDBusPendingReply<QDBusVariant>\0"
    "addressType,accessControl,accessControlParam,offset\0"
    "AcceptFile(uint,uint,QDBusVariant,qulonglong)\0"
    "addressType,accessControl,accessControlParam\0"
    "ProvideFile(uint,uint,QDBusVariant)\0"
    "uint\0State\0QString\0ContentType\0Filename\0"
    "qulonglong\0Size\0ContentHashType\0"
    "ContentHash\0Description\0qlonglong\0"
    "Date\0Tp::SupportedSocketMap\0"
    "AvailableSocketTypes\0TransferredBytes\0"
    "InitialOffset\0"
};

const QMetaObject Tp::Client::ChannelTypeFileTransferInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ChannelTypeFileTransferInterface,
      qt_meta_data_Tp__Client__ChannelTypeFileTransferInterface, 0 }
};

const QMetaObject *Tp::Client::ChannelTypeFileTransferInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ChannelTypeFileTransferInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ChannelTypeFileTransferInterface))
        return static_cast<void*>(const_cast< ChannelTypeFileTransferInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ChannelTypeFileTransferInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: FileTransferStateChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: TransferredBytesChanged((*reinterpret_cast< qulonglong(*)>(_a[1]))); break;
        case 2: InitialOffsetDefined((*reinterpret_cast< qulonglong(*)>(_a[1]))); break;
        case 3: { QDBusPendingReply<QDBusVariant> _r = AcceptFile((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< const QDBusVariant(*)>(_a[3])),(*reinterpret_cast< qulonglong(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusVariant>*>(_a[0]) = _r; }  break;
        case 4: { QDBusPendingReply<QDBusVariant> _r = ProvideFile((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< const QDBusVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusVariant>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = State(); break;
        case 1: *reinterpret_cast< QString*>(_v) = ContentType(); break;
        case 2: *reinterpret_cast< QString*>(_v) = Filename(); break;
        case 3: *reinterpret_cast< qulonglong*>(_v) = Size(); break;
        case 4: *reinterpret_cast< uint*>(_v) = ContentHashType(); break;
        case 5: *reinterpret_cast< QString*>(_v) = ContentHash(); break;
        case 6: *reinterpret_cast< QString*>(_v) = Description(); break;
        case 7: *reinterpret_cast< qlonglong*>(_v) = Date(); break;
        case 8: *reinterpret_cast< Tp::SupportedSocketMap*>(_v) = AvailableSocketTypes(); break;
        case 9: *reinterpret_cast< qulonglong*>(_v) = TransferredBytes(); break;
        case 10: *reinterpret_cast< qulonglong*>(_v) = InitialOffset(); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 11;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Tp::Client::ChannelTypeFileTransferInterface::FileTransferStateChanged(uint _t1, uint _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::Client::ChannelTypeFileTransferInterface::TransferredBytesChanged(qulonglong _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tp::Client::ChannelTypeFileTransferInterface::InitialOffsetDefined(qulonglong _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_Tp__Client__ChannelTypeRoomListInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   12, // methods
       1,   37, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      48,   42,   41,   41, 0x05,
      83,   75,   41,   41, 0x05,

 // slots: signature, parameters, type, tag, flags
     126,   41,  102,   41, 0x0a,
     164,   41,  144,   41, 0x0a,
     176,   41,  144,   41, 0x0a,

 // properties: name, type, flags
     198,  190, 0x0a095001,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ChannelTypeRoomListInterface[] = {
    "Tp::Client::ChannelTypeRoomListInterface\0"
    "\0rooms\0GotRooms(Tp::RoomInfoList)\0"
    "listing\0ListingRooms(bool)\0"
    "QDBusPendingReply<bool>\0GetListingRooms()\0"
    "QDBusPendingReply<>\0ListRooms()\0"
    "StopListing()\0QString\0Server\0"
};

const QMetaObject Tp::Client::ChannelTypeRoomListInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ChannelTypeRoomListInterface,
      qt_meta_data_Tp__Client__ChannelTypeRoomListInterface, 0 }
};

const QMetaObject *Tp::Client::ChannelTypeRoomListInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ChannelTypeRoomListInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ChannelTypeRoomListInterface))
        return static_cast<void*>(const_cast< ChannelTypeRoomListInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ChannelTypeRoomListInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: GotRooms((*reinterpret_cast< const Tp::RoomInfoList(*)>(_a[1]))); break;
        case 1: ListingRooms((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: { QDBusPendingReply<bool> _r = GetListingRooms();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<> _r = ListRooms();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 4: { QDBusPendingReply<> _r = StopListing();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = Server(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Tp::Client::ChannelTypeRoomListInterface::GotRooms(const Tp::RoomInfoList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::Client::ChannelTypeRoomListInterface::ListingRooms(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_Tp__Client__ChannelTypeStreamedMediaInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      81,   47,   46,   46, 0x05,
     147,  109,   46,   46, 0x05,
     213,  186,   46,   46, 0x05,
     253,  244,   46,   46, 0x05,
     294,  273,   46,   46, 0x05,

 // slots: signature, parameters, type, tag, flags
     367,   46,  324,   46, 0x0a,
     409,  401,  381,   46, 0x0a,
     462,  437,  381,   46, 0x0a,
     516,  496,  324,   46, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ChannelTypeStreamedMediaInterface[] = {
    "Tp::Client::ChannelTypeStreamedMediaInterface\0"
    "\0streamID,contactHandle,streamType\0"
    "StreamAdded(uint,uint,uint)\0"
    "streamID,streamDirection,pendingFlags\0"
    "StreamDirectionChanged(uint,uint,uint)\0"
    "streamID,errorCode,message\0"
    "StreamError(uint,uint,QString)\0streamID\0"
    "StreamRemoved(uint)\0streamID,streamState\0"
    "StreamStateChanged(uint,uint)\0"
    "QDBusPendingReply<Tp::MediaStreamInfoList>\0"
    "ListStreams()\0QDBusPendingReply<>\0"
    "streams\0RemoveStreams(Tp::UIntList)\0"
    "streamID,streamDirection\0"
    "RequestStreamDirection(uint,uint)\0"
    "contactHandle,types\0"
    "RequestStreams(uint,Tp::UIntList)\0"
};

const QMetaObject Tp::Client::ChannelTypeStreamedMediaInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ChannelTypeStreamedMediaInterface,
      qt_meta_data_Tp__Client__ChannelTypeStreamedMediaInterface, 0 }
};

const QMetaObject *Tp::Client::ChannelTypeStreamedMediaInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ChannelTypeStreamedMediaInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ChannelTypeStreamedMediaInterface))
        return static_cast<void*>(const_cast< ChannelTypeStreamedMediaInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ChannelTypeStreamedMediaInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: StreamAdded((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: StreamDirectionChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 2: StreamError((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: StreamRemoved((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: StreamStateChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 5: { QDBusPendingReply<Tp::MediaStreamInfoList> _r = ListStreams();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::MediaStreamInfoList>*>(_a[0]) = _r; }  break;
        case 6: { QDBusPendingReply<> _r = RemoveStreams((*reinterpret_cast< const Tp::UIntList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 7: { QDBusPendingReply<> _r = RequestStreamDirection((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 8: { QDBusPendingReply<Tp::MediaStreamInfoList> _r = RequestStreams((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::MediaStreamInfoList>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Tp::Client::ChannelTypeStreamedMediaInterface::StreamAdded(uint _t1, uint _t2, uint _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::Client::ChannelTypeStreamedMediaInterface::StreamDirectionChanged(uint _t1, uint _t2, uint _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tp::Client::ChannelTypeStreamedMediaInterface::StreamError(uint _t1, uint _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tp::Client::ChannelTypeStreamedMediaInterface::StreamRemoved(uint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Tp::Client::ChannelTypeStreamedMediaInterface::StreamStateChanged(uint _t1, uint _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
static const uint qt_meta_data_Tp__Client__ChannelTypeTextInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      38,   37,   37,   37, 0x05,
      88,   52,   37,   37, 0x05,
     157,  131,   37,   37, 0x05,
     211,  191,   37,   37, 0x05,

 // slots: signature, parameters, type, tag, flags
     259,  255,  235,   37, 0x0a,
     332,   37,  300,   37, 0x0a,
     402,  396,  350,   37, 0x0a,
     438,  428,  235,   37, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ChannelTypeTextInterface[] = {
    "Tp::Client::ChannelTypeTextInterface\0"
    "\0LostMessage()\0ID,timestamp,sender,type,flags,text\0"
    "Received(uint,uint,uint,uint,uint,QString)\0"
    "error,timestamp,type,text\0"
    "SendError(uint,uint,uint,QString)\0"
    "timestamp,type,text\0Sent(uint,uint,QString)\0"
    "QDBusPendingReply<>\0IDs\0"
    "AcknowledgePendingMessages(Tp::UIntList)\0"
    "QDBusPendingReply<Tp::UIntList>\0"
    "GetMessageTypes()\0"
    "QDBusPendingReply<Tp::PendingTextMessageList>\0"
    "clear\0ListPendingMessages(bool)\0"
    "type,text\0Send(uint,QString)\0"
};

const QMetaObject Tp::Client::ChannelTypeTextInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ChannelTypeTextInterface,
      qt_meta_data_Tp__Client__ChannelTypeTextInterface, 0 }
};

const QMetaObject *Tp::Client::ChannelTypeTextInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ChannelTypeTextInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ChannelTypeTextInterface))
        return static_cast<void*>(const_cast< ChannelTypeTextInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ChannelTypeTextInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: LostMessage(); break;
        case 1: Received((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        case 2: SendError((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 3: Sent((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: { QDBusPendingReply<> _r = AcknowledgePendingMessages((*reinterpret_cast< const Tp::UIntList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 5: { QDBusPendingReply<Tp::UIntList> _r = GetMessageTypes();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::UIntList>*>(_a[0]) = _r; }  break;
        case 6: { QDBusPendingReply<Tp::PendingTextMessageList> _r = ListPendingMessages((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::PendingTextMessageList>*>(_a[0]) = _r; }  break;
        case 7: { QDBusPendingReply<> _r = Send((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Tp::Client::ChannelTypeTextInterface::LostMessage()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Tp::Client::ChannelTypeTextInterface::Received(uint _t1, uint _t2, uint _t3, uint _t4, uint _t5, const QString & _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tp::Client::ChannelTypeTextInterface::SendError(uint _t1, uint _t2, uint _t3, const QString & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tp::Client::ChannelTypeTextInterface::Sent(uint _t1, uint _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_Tp__Client__ChannelTypeTubesInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      82,   39,   38,   38, 0x05,
     140,  131,   38,   38, 0x05,
     171,  168,   38,   38, 0x05,
     205,  188,   38,   38, 0x05,
     274,  264,   38,   38, 0x05,

 // slots: signature, parameters, type, tag, flags
     351,   38,  309,   38, 0x0a,
     413,   38,  381,   38, 0x0a,
     473,   38,  437,   38, 0x0a,
     528,  509,  485,   38, 0x0a,
     635,  563,  485,   38, 0x0a,
     735,  168,  708,   38, 0x0a,
     836,  788,  756,   38, 0x0a,
     902,  168,  882,   38, 0x0a,
     918,  168,  708,   38, 0x0a,
     985,  168,  943,   38, 0x0a,
    1041,  168, 1004,   38, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ChannelTypeTubesInterface[] = {
    "Tp::Client::ChannelTypeTubesInterface\0"
    "\0ID,initiator,type,service,parameters,state\0"
    "NewTube(uint,uint,uint,QString,QVariantMap,uint)\0"
    "ID,state\0TubeStateChanged(uint,uint)\0"
    "ID\0TubeClosed(uint)\0ID,added,removed\0"
    "DBusNamesChanged(uint,Tp::DBusTubeMemberList,Tp::UIntList)\0"
    "ID,handle\0StreamTubeNewConnection(uint,uint)\0"
    "QDBusPendingReply<Tp::SupportedSocketMap>\0"
    "GetAvailableStreamTubeTypes()\0"
    "QDBusPendingReply<Tp::UIntList>\0"
    "GetAvailableTubeTypes()\0"
    "QDBusPendingReply<Tp::TubeInfoList>\0"
    "ListTubes()\0QDBusPendingReply<uint>\0"
    "service,parameters\0"
    "OfferDBusTube(QString,QVariantMap)\0"
    "service,parameters,addressType,address,accessControl,accessControlPara"
    "m\0"
    "OfferStreamTube(QString,QVariantMap,uint,QDBusVariant,uint,QDBusVarian"
    "t)\0"
    "QDBusPendingReply<QString>\0"
    "AcceptDBusTube(uint)\0"
    "QDBusPendingReply<QDBusVariant>\0"
    "ID,addressType,accessControl,accessControlParam\0"
    "AcceptStreamTube(uint,uint,uint,QDBusVariant)\0"
    "QDBusPendingReply<>\0CloseTube(uint)\0"
    "GetDBusTubeAddress(uint)\0"
    "QDBusPendingReply<Tp::DBusTubeMemberList>\0"
    "GetDBusNames(uint)\0"
    "QDBusPendingReply<uint,QDBusVariant>\0"
    "GetStreamTubeSocketAddress(uint)\0"
};

const QMetaObject Tp::Client::ChannelTypeTubesInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ChannelTypeTubesInterface,
      qt_meta_data_Tp__Client__ChannelTypeTubesInterface, 0 }
};

const QMetaObject *Tp::Client::ChannelTypeTubesInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ChannelTypeTubesInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ChannelTypeTubesInterface))
        return static_cast<void*>(const_cast< ChannelTypeTubesInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ChannelTypeTubesInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: NewTube((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QVariantMap(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6]))); break;
        case 1: TubeStateChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 2: TubeClosed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: DBusNamesChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const Tp::DBusTubeMemberList(*)>(_a[2])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[3]))); break;
        case 4: StreamTubeNewConnection((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 5: { QDBusPendingReply<Tp::SupportedSocketMap> _r = GetAvailableStreamTubeTypes();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::SupportedSocketMap>*>(_a[0]) = _r; }  break;
        case 6: { QDBusPendingReply<Tp::UIntList> _r = GetAvailableTubeTypes();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::UIntList>*>(_a[0]) = _r; }  break;
        case 7: { QDBusPendingReply<Tp::TubeInfoList> _r = ListTubes();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::TubeInfoList>*>(_a[0]) = _r; }  break;
        case 8: { QDBusPendingReply<uint> _r = OfferDBusTube((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = _r; }  break;
        case 9: { QDBusPendingReply<uint> _r = OfferStreamTube((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< const QDBusVariant(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = _r; }  break;
        case 10: { QDBusPendingReply<QString> _r = AcceptDBusTube((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = _r; }  break;
        case 11: { QDBusPendingReply<QDBusVariant> _r = AcceptStreamTube((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusVariant>*>(_a[0]) = _r; }  break;
        case 12: { QDBusPendingReply<> _r = CloseTube((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 13: { QDBusPendingReply<QString> _r = GetDBusTubeAddress((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = _r; }  break;
        case 14: { QDBusPendingReply<Tp::DBusTubeMemberList> _r = GetDBusNames((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::DBusTubeMemberList>*>(_a[0]) = _r; }  break;
        case 15: { QDBusPendingReply<uint,QDBusVariant> _r = GetStreamTubeSocketAddress((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint,QDBusVariant>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Tp::Client::ChannelTypeTubesInterface::NewTube(uint _t1, uint _t2, uint _t3, const QString & _t4, const QVariantMap & _t5, uint _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::Client::ChannelTypeTubesInterface::TubeStateChanged(uint _t1, uint _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tp::Client::ChannelTypeTubesInterface::TubeClosed(uint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tp::Client::ChannelTypeTubesInterface::DBusNamesChanged(uint _t1, const Tp::DBusTubeMemberList & _t2, const Tp::UIntList & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Tp::Client::ChannelTypeTubesInterface::StreamTubeNewConnection(uint _t1, uint _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
