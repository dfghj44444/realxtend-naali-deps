/****************************************************************************
** Meta object code from reading C++ file 'cli-connection.h'
**
** Created: Mon 7. Dec 18:09:14 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cli-connection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__Client__ConnectionInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   12, // methods
       1,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      44,   33,   32,   32, 0x05,
     125,   68,   32,   32, 0x05,
     190,  176,   32,   32, 0x05,
     241,  227,   32,   32, 0x05,

 // slots: signature, parameters, type, tag, flags
     286,   32,  266,   32, 0x0a,
     296,   32,  266,   32, 0x0a,
     340,   32,  309,   32, 0x0a,
     383,   32,  356,   32, 0x0a,
     421,   32,  397,   32, 0x0a,
     437,   32,  397,   32, 0x0a,
     468,  449,  266,   32, 0x0a,
     499,  449,  309,   32, 0x0a,
     572,   32,  533,   32, 0x0a,
     587,  449,  266,   32, 0x0a,
     695,  656,  621,   32, 0x0a,
     783,  766,  734,   32, 0x0a,

 // properties: name, type, flags
     821,  816, 0x03095001,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ConnectionInterface[] = {
    "Tp::Client::ConnectionInterface\0\0"
    "selfHandle\0SelfHandleChanged(uint)\0"
    "objectPath,channelType,handleType,handle,suppressHandler\0"
    "NewChannel(QDBusObjectPath,QString,uint,uint,bool)\0"
    "error,details\0ConnectionError(QString,QVariantMap)\0"
    "status,reason\0StatusChanged(uint,uint)\0"
    "QDBusPendingReply<>\0Connect()\0"
    "Disconnect()\0QDBusPendingReply<QStringList>\0"
    "GetInterfaces()\0QDBusPendingReply<QString>\0"
    "GetProtocol()\0QDBusPendingReply<uint>\0"
    "GetSelfHandle()\0GetStatus()\0"
    "handleType,handles\0HoldHandles(uint,Tp::UIntList)\0"
    "InspectHandles(uint,Tp::UIntList)\0"
    "QDBusPendingReply<Tp::ChannelInfoList>\0"
    "ListChannels()\0ReleaseHandles(uint,Tp::UIntList)\0"
    "QDBusPendingReply<QDBusObjectPath>\0"
    "type,handleType,handle,suppressHandler\0"
    "RequestChannel(QString,uint,uint,bool)\0"
    "QDBusPendingReply<Tp::UIntList>\0"
    "handleType,names\0RequestHandles(uint,QStringList)\0"
    "uint\0SelfHandle\0"
};

const QMetaObject Tp::Client::ConnectionInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ConnectionInterface,
      qt_meta_data_Tp__Client__ConnectionInterface, 0 }
};

const QMetaObject *Tp::Client::ConnectionInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ConnectionInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ConnectionInterface))
        return static_cast<void*>(const_cast< ConnectionInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ConnectionInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: SelfHandleChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: NewChannel((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 2: ConnectionError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 3: StatusChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 4: { QDBusPendingReply<> _r = Connect();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 5: { QDBusPendingReply<> _r = Disconnect();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 6: { QDBusPendingReply<QStringList> _r = GetInterfaces();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QStringList>*>(_a[0]) = _r; }  break;
        case 7: { QDBusPendingReply<QString> _r = GetProtocol();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = _r; }  break;
        case 8: { QDBusPendingReply<uint> _r = GetSelfHandle();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = _r; }  break;
        case 9: { QDBusPendingReply<uint> _r = GetStatus();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = _r; }  break;
        case 10: { QDBusPendingReply<> _r = HoldHandles((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 11: { QDBusPendingReply<QStringList> _r = InspectHandles((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QStringList>*>(_a[0]) = _r; }  break;
        case 12: { QDBusPendingReply<Tp::ChannelInfoList> _r = ListChannels();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::ChannelInfoList>*>(_a[0]) = _r; }  break;
        case 13: { QDBusPendingReply<> _r = ReleaseHandles((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const Tp::UIntList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 14: { QDBusPendingReply<QDBusObjectPath> _r = RequestChannel((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusObjectPath>*>(_a[0]) = _r; }  break;
        case 15: { QDBusPendingReply<Tp::UIntList> _r = RequestHandles((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::UIntList>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = SelfHandle(); break;
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
void Tp::Client::ConnectionInterface::SelfHandleChanged(uint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::Client::ConnectionInterface::NewChannel(const QDBusObjectPath & _t1, const QString & _t2, uint _t3, uint _t4, bool _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tp::Client::ConnectionInterface::ConnectionError(const QString & _t1, const QVariantMap & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tp::Client::ConnectionInterface::StatusChanged(uint _t1, uint _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_Tp__Client__ConnectionInterfaceAliasingInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      58,   50,   49,   49, 0x05,

 // slots: signature, parameters, type, tag, flags
     116,   49,   92,   49, 0x0a,
     172,  163,  132,   49, 0x0a,
     233,  163,  201,   49, 0x0a,
     278,   50,  258,   49, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ConnectionInterfaceAliasingInterface[] = {
    "Tp::Client::ConnectionInterfaceAliasingInterface\0"
    "\0aliases\0AliasesChanged(Tp::AliasPairList)\0"
    "QDBusPendingReply<uint>\0GetAliasFlags()\0"
    "QDBusPendingReply<QStringList>\0contacts\0"
    "RequestAliases(Tp::UIntList)\0"
    "QDBusPendingReply<Tp::AliasMap>\0"
    "GetAliases(Tp::UIntList)\0QDBusPendingReply<>\0"
    "SetAliases(Tp::AliasMap)\0"
};

const QMetaObject Tp::Client::ConnectionInterfaceAliasingInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ConnectionInterfaceAliasingInterface,
      qt_meta_data_Tp__Client__ConnectionInterfaceAliasingInterface, 0 }
};

const QMetaObject *Tp::Client::ConnectionInterfaceAliasingInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ConnectionInterfaceAliasingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ConnectionInterfaceAliasingInterface))
        return static_cast<void*>(const_cast< ConnectionInterfaceAliasingInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ConnectionInterfaceAliasingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: AliasesChanged((*reinterpret_cast< const Tp::AliasPairList(*)>(_a[1]))); break;
        case 1: { QDBusPendingReply<uint> _r = GetAliasFlags();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = _r; }  break;
        case 2: { QDBusPendingReply<QStringList> _r = RequestAliases((*reinterpret_cast< const Tp::UIntList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QStringList>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<Tp::AliasMap> _r = GetAliases((*reinterpret_cast< const Tp::UIntList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::AliasMap>*>(_a[0]) = _r; }  break;
        case 4: { QDBusPendingReply<> _r = SetAliases((*reinterpret_cast< const Tp::AliasMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Tp::Client::ConnectionInterfaceAliasingInterface::AliasesChanged(const Tp::AliasPairList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Tp__Client__ConnectionInterfaceAvatarsInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   12, // methods
       8,   57, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      72,   49,   48,   48, 0x05,
     126,  100,   48,   48, 0x05,

 // slots: signature, parameters, type, tag, flags
     239,   48,  175,   48, 0x0a,
     303,  294,  263,   48, 0x0a,
     371,  294,  333,   48, 0x0a,
     452,  444,  406,   48, 0x0a,
     492,  294,  472,   48, 0x0a,
     564,  548,  521,   48, 0x0a,
     594,   48,  472,   48, 0x0a,

 // properties: name, type, flags
     620,  608, 0x0b095001,
     650,  645, 0x03095001,
     670,  645, 0x03095001,
     689,  645, 0x03095001,
     713,  645, 0x03095001,
     736,  645, 0x03095001,
     756,  645, 0x03095001,
     775,  645, 0x03095001,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ConnectionInterfaceAvatarsInterface[] = {
    "Tp::Client::ConnectionInterfaceAvatarsInterface\0"
    "\0contact,newAvatarToken\0"
    "AvatarUpdated(uint,QString)\0"
    "contact,token,avatar,type\0"
    "AvatarRetrieved(uint,QString,QByteArray,QString)\0"
    "QDBusPendingReply<QStringList,ushort,ushort,ushort,ushort,uint>\0"
    "GetAvatarRequirements()\0"
    "QDBusPendingReply<QStringList>\0contacts\0"
    "GetAvatarTokens(Tp::UIntList)\0"
    "QDBusPendingReply<Tp::AvatarTokenMap>\0"
    "GetKnownAvatarTokens(Tp::UIntList)\0"
    "QDBusPendingReply<QByteArray,QString>\0"
    "contact\0RequestAvatar(uint)\0"
    "QDBusPendingReply<>\0RequestAvatars(Tp::UIntList)\0"
    "QDBusPendingReply<QString>\0avatar,MIMEType\0"
    "SetAvatar(QByteArray,QString)\0"
    "ClearAvatar()\0QStringList\0"
    "SupportedAvatarMIMETypes\0uint\0"
    "MinimumAvatarHeight\0MinimumAvatarWidth\0"
    "RecommendedAvatarHeight\0RecommendedAvatarWidth\0"
    "MaximumAvatarHeight\0MaximumAvatarWidth\0"
    "MaximumAvatarBytes\0"
};

const QMetaObject Tp::Client::ConnectionInterfaceAvatarsInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ConnectionInterfaceAvatarsInterface,
      qt_meta_data_Tp__Client__ConnectionInterfaceAvatarsInterface, 0 }
};

const QMetaObject *Tp::Client::ConnectionInterfaceAvatarsInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ConnectionInterfaceAvatarsInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ConnectionInterfaceAvatarsInterface))
        return static_cast<void*>(const_cast< ConnectionInterfaceAvatarsInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ConnectionInterfaceAvatarsInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: AvatarUpdated((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: AvatarRetrieved((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 2: { QDBusPendingReply<QStringList,ushort,ushort,ushort,ushort,uint> _r = GetAvatarRequirements();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QStringList,ushort,ushort,ushort,ushort,uint>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<QStringList> _r = GetAvatarTokens((*reinterpret_cast< const Tp::UIntList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QStringList>*>(_a[0]) = _r; }  break;
        case 4: { QDBusPendingReply<Tp::AvatarTokenMap> _r = GetKnownAvatarTokens((*reinterpret_cast< const Tp::UIntList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::AvatarTokenMap>*>(_a[0]) = _r; }  break;
        case 5: { QDBusPendingReply<QByteArray,QString> _r = RequestAvatar((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QByteArray,QString>*>(_a[0]) = _r; }  break;
        case 6: { QDBusPendingReply<> _r = RequestAvatars((*reinterpret_cast< const Tp::UIntList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 7: { QDBusPendingReply<QString> _r = SetAvatar((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = _r; }  break;
        case 8: { QDBusPendingReply<> _r = ClearAvatar();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = SupportedAvatarMIMETypes(); break;
        case 1: *reinterpret_cast< uint*>(_v) = MinimumAvatarHeight(); break;
        case 2: *reinterpret_cast< uint*>(_v) = MinimumAvatarWidth(); break;
        case 3: *reinterpret_cast< uint*>(_v) = RecommendedAvatarHeight(); break;
        case 4: *reinterpret_cast< uint*>(_v) = RecommendedAvatarWidth(); break;
        case 5: *reinterpret_cast< uint*>(_v) = MaximumAvatarHeight(); break;
        case 6: *reinterpret_cast< uint*>(_v) = MaximumAvatarWidth(); break;
        case 7: *reinterpret_cast< uint*>(_v) = MaximumAvatarBytes(); break;
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
void Tp::Client::ConnectionInterfaceAvatarsInterface::AvatarUpdated(uint _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::Client::ConnectionInterfaceAvatarsInterface::AvatarRetrieved(uint _t1, const QString & _t2, const QByteArray & _t3, const QString & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_Tp__Client__ConnectionInterfaceCapabilitiesInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      59,   54,   53,   53, 0x05,

 // slots: signature, parameters, type, tag, flags
     158,  147,  105,   53, 0x0a,
     269,  261,  216,   53, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ConnectionInterfaceCapabilitiesInterface[] = {
    "Tp::Client::ConnectionInterfaceCapabilitiesInterface\0"
    "\0caps\0CapabilitiesChanged(Tp::CapabilityChangeList)\0"
    "QDBusPendingReply<Tp::CapabilityPairList>\0"
    "add,remove\0"
    "AdvertiseCapabilities(Tp::CapabilityPairList,QStringList)\0"
    "QDBusPendingReply<Tp::ContactCapabilityList>\0"
    "handles\0GetCapabilities(Tp::UIntList)\0"
};

const QMetaObject Tp::Client::ConnectionInterfaceCapabilitiesInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ConnectionInterfaceCapabilitiesInterface,
      qt_meta_data_Tp__Client__ConnectionInterfaceCapabilitiesInterface, 0 }
};

const QMetaObject *Tp::Client::ConnectionInterfaceCapabilitiesInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ConnectionInterfaceCapabilitiesInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ConnectionInterfaceCapabilitiesInterface))
        return static_cast<void*>(const_cast< ConnectionInterfaceCapabilitiesInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ConnectionInterfaceCapabilitiesInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: CapabilitiesChanged((*reinterpret_cast< const Tp::CapabilityChangeList(*)>(_a[1]))); break;
        case 1: { QDBusPendingReply<Tp::CapabilityPairList> _r = AdvertiseCapabilities((*reinterpret_cast< const Tp::CapabilityPairList(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::CapabilityPairList>*>(_a[0]) = _r; }  break;
        case 2: { QDBusPendingReply<Tp::ContactCapabilityList> _r = GetCapabilities((*reinterpret_cast< const Tp::UIntList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::ContactCapabilityList>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Tp::Client::ConnectionInterfaceCapabilitiesInterface::CapabilitiesChanged(const Tp::CapabilityChangeList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Tp__Client__ConnectionInterfaceContactsInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       1,   17, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
     118,   94,   50,   49, 0x0a,

 // properties: name, type, flags
     182,  170, 0x0b095001,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ConnectionInterfaceContactsInterface[] = {
    "Tp::Client::ConnectionInterfaceContactsInterface\0"
    "\0QDBusPendingReply<Tp::ContactAttributesMap>\0"
    "handles,interfaces,hold\0"
    "GetContactAttributes(Tp::UIntList,QStringList,bool)\0"
    "QStringList\0ContactAttributeInterfaces\0"
};

const QMetaObject Tp::Client::ConnectionInterfaceContactsInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ConnectionInterfaceContactsInterface,
      qt_meta_data_Tp__Client__ConnectionInterfaceContactsInterface, 0 }
};

const QMetaObject *Tp::Client::ConnectionInterfaceContactsInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ConnectionInterfaceContactsInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ConnectionInterfaceContactsInterface))
        return static_cast<void*>(const_cast< ConnectionInterfaceContactsInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ConnectionInterfaceContactsInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QDBusPendingReply<Tp::ContactAttributesMap> _r = GetContactAttributes((*reinterpret_cast< const Tp::UIntList(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::ContactAttributesMap>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = ContactAttributeInterfaces(); break;
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
static const uint qt_meta_data_Tp__Client__ConnectionInterfacePresenceInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      59,   50,   49,   49, 0x05,

 // slots: signature, parameters, type, tag, flags
     134,  116,   96,   49, 0x0a,
     165,   49,   96,   49, 0x0a,
     228,  219,  179,   49, 0x0a,
     291,   49,  254,   49, 0x0a,
     312,  305,   96,   49, 0x0a,
     334,  219,   96,   49, 0x0a,
     369,  364,   96,   49, 0x0a,
     404,  395,   96,   49, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ConnectionInterfacePresenceInterface[] = {
    "Tp::Client::ConnectionInterfacePresenceInterface\0"
    "\0presence\0PresenceUpdate(Tp::ContactPresences)\0"
    "QDBusPendingReply<>\0status,parameters\0"
    "AddStatus(QString,QVariantMap)\0"
    "ClearStatus()\0QDBusPendingReply<Tp::ContactPresences>\0"
    "contacts\0GetPresence(Tp::UIntList)\0"
    "QDBusPendingReply<Tp::StatusSpecMap>\0"
    "GetStatuses()\0status\0RemoveStatus(QString)\0"
    "RequestPresence(Tp::UIntList)\0time\0"
    "SetLastActivityTime(uint)\0statuses\0"
    "SetStatus(Tp::MultipleStatusMap)\0"
};

const QMetaObject Tp::Client::ConnectionInterfacePresenceInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ConnectionInterfacePresenceInterface,
      qt_meta_data_Tp__Client__ConnectionInterfacePresenceInterface, 0 }
};

const QMetaObject *Tp::Client::ConnectionInterfacePresenceInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ConnectionInterfacePresenceInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ConnectionInterfacePresenceInterface))
        return static_cast<void*>(const_cast< ConnectionInterfacePresenceInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ConnectionInterfacePresenceInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: PresenceUpdate((*reinterpret_cast< const Tp::ContactPresences(*)>(_a[1]))); break;
        case 1: { QDBusPendingReply<> _r = AddStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 2: { QDBusPendingReply<> _r = ClearStatus();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<Tp::ContactPresences> _r = GetPresence((*reinterpret_cast< const Tp::UIntList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::ContactPresences>*>(_a[0]) = _r; }  break;
        case 4: { QDBusPendingReply<Tp::StatusSpecMap> _r = GetStatuses();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::StatusSpecMap>*>(_a[0]) = _r; }  break;
        case 5: { QDBusPendingReply<> _r = RemoveStatus((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 6: { QDBusPendingReply<> _r = RequestPresence((*reinterpret_cast< const Tp::UIntList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 7: { QDBusPendingReply<> _r = SetLastActivityTime((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 8: { QDBusPendingReply<> _r = SetStatus((*reinterpret_cast< const Tp::MultipleStatusMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Tp::Client::ConnectionInterfacePresenceInterface::PresenceUpdate(const Tp::ContactPresences & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Tp__Client__ConnectionInterfaceRequestsInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       2,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      59,   50,   49,   49, 0x05,
     103,   95,   49,   49, 0x05,

 // slots: signature, parameters, type, tag, flags
     189,  181,  134,   49, 0x0a,
     268,  181,  216,   49, 0x0a,

 // properties: name, type, flags
     318,  295, 0x00095009,
     359,  327, 0x00095009,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ConnectionInterfaceRequestsInterface[] = {
    "Tp::Client::ConnectionInterfaceRequestsInterface\0"
    "\0channels\0NewChannels(Tp::ChannelDetailsList)\0"
    "removed\0ChannelClosed(QDBusObjectPath)\0"
    "QDBusPendingReply<QDBusObjectPath,QVariantMap>\0"
    "request\0CreateChannel(QVariantMap)\0"
    "QDBusPendingReply<bool,QDBusObjectPath,QVariantMap>\0"
    "EnsureChannel(QVariantMap)\0"
    "Tp::ChannelDetailsList\0Channels\0"
    "Tp::RequestableChannelClassList\0"
    "RequestableChannelClasses\0"
};

const QMetaObject Tp::Client::ConnectionInterfaceRequestsInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ConnectionInterfaceRequestsInterface,
      qt_meta_data_Tp__Client__ConnectionInterfaceRequestsInterface, 0 }
};

const QMetaObject *Tp::Client::ConnectionInterfaceRequestsInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ConnectionInterfaceRequestsInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ConnectionInterfaceRequestsInterface))
        return static_cast<void*>(const_cast< ConnectionInterfaceRequestsInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ConnectionInterfaceRequestsInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: NewChannels((*reinterpret_cast< const Tp::ChannelDetailsList(*)>(_a[1]))); break;
        case 1: ChannelClosed((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        case 2: { QDBusPendingReply<QDBusObjectPath,QVariantMap> _r = CreateChannel((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusObjectPath,QVariantMap>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<bool,QDBusObjectPath,QVariantMap> _r = EnsureChannel((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool,QDBusObjectPath,QVariantMap>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Tp::ChannelDetailsList*>(_v) = Channels(); break;
        case 1: *reinterpret_cast< Tp::RequestableChannelClassList*>(_v) = RequestableChannelClasses(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Tp::Client::ConnectionInterfaceRequestsInterface::NewChannels(const Tp::ChannelDetailsList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::Client::ConnectionInterfaceRequestsInterface::ChannelClosed(const QDBusObjectPath & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_Tp__Client__ConnectionInterfaceSimplePresenceInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       1,   27, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      65,   56,   55,   55, 0x05,

 // slots: signature, parameters, type, tag, flags
     151,  130,  110,   55, 0x0a,
     235,  226,  180,   55, 0x0a,

 // properties: name, type, flags
     286,  262, 0x00095009,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ConnectionInterfaceSimplePresenceInterface[] = {
    "Tp::Client::ConnectionInterfaceSimplePresenceInterface\0"
    "\0presence\0PresencesChanged(Tp::SimpleContactPresences)\0"
    "QDBusPendingReply<>\0status,statusMessage\0"
    "SetPresence(QString,QString)\0"
    "QDBusPendingReply<Tp::SimpleContactPresences>\0"
    "contacts\0GetPresences(Tp::UIntList)\0"
    "Tp::SimpleStatusSpecMap\0Statuses\0"
};

const QMetaObject Tp::Client::ConnectionInterfaceSimplePresenceInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ConnectionInterfaceSimplePresenceInterface,
      qt_meta_data_Tp__Client__ConnectionInterfaceSimplePresenceInterface, 0 }
};

const QMetaObject *Tp::Client::ConnectionInterfaceSimplePresenceInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ConnectionInterfaceSimplePresenceInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ConnectionInterfaceSimplePresenceInterface))
        return static_cast<void*>(const_cast< ConnectionInterfaceSimplePresenceInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ConnectionInterfaceSimplePresenceInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: PresencesChanged((*reinterpret_cast< const Tp::SimpleContactPresences(*)>(_a[1]))); break;
        case 1: { QDBusPendingReply<> _r = SetPresence((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 2: { QDBusPendingReply<Tp::SimpleContactPresences> _r = GetPresences((*reinterpret_cast< const Tp::UIntList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::SimpleContactPresences>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Tp::SimpleStatusSpecMap*>(_v) = Statuses(); break;
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
void Tp::Client::ConnectionInterfaceSimplePresenceInterface::PresencesChanged(const Tp::SimpleContactPresences & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
