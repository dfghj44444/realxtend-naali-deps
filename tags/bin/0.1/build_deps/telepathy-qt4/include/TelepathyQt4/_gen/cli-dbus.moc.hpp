/****************************************************************************
** Meta object code from reading C++ file 'cli-dbus.h'
**
** Created: Mon 7. Dec 18:09:13 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cli-dbus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__Client__DBus__DBusDaemonInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      62,   39,   38,   38, 0x05,
     109,  104,   38,   38, 0x05,
     127,  104,   38,   38, 0x05,

 // slots: signature, parameters, type, tag, flags
     176,   38,  149,   38, 0x0a,
     219,  208,  184,   38, 0x0a,
     245,  104,  184,   38, 0x0a,
     280,  266,  184,   38, 0x0a,
     349,  337,  313,   38, 0x0a,
     402,   38,  371,   38, 0x0a,
     414,   38,  371,   38, 0x0a,
     462,  457,  437,   38, 0x0a,
     480,  457,  437,   38, 0x0a,
     501,  104,  149,   38, 0x0a,
     523,  104,  371,   38, 0x0a,
     564,  549,  184,   38, 0x0a,
     595,  549,  184,   38, 0x0a,
     661,  549,  631,   38, 0x0a,
     706,   38,  437,   38, 0x0a,
     721,   38,  149,   38, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__DBus__DBusDaemonInterface[] = {
    "Tp::Client::DBus::DBusDaemonInterface\0"
    "\0name,oldOwner,newOwner\0"
    "NameOwnerChanged(QString,QString,QString)\0"
    "name\0NameLost(QString)\0NameAcquired(QString)\0"
    "QDBusPendingReply<QString>\0Hello()\0"
    "QDBusPendingReply<uint>\0name,flags\0"
    "RequestName(QString,uint)\0"
    "ReleaseName(QString)\0service,flags\0"
    "StartServiceByName(QString,uint)\0"
    "QDBusPendingReply<bool>\0nameToCheck\0"
    "NameHasOwner(QString)\0"
    "QDBusPendingReply<QStringList>\0"
    "ListNames()\0ListActivatableNames()\0"
    "QDBusPendingReply<>\0rule\0AddMatch(QString)\0"
    "RemoveMatch(QString)\0GetNameOwner(QString)\0"
    "ListQueuedOwners(QString)\0connectionName\0"
    "GetConnectionUnixUser(QString)\0"
    "GetConnectionUnixProcessID(QString)\0"
    "QDBusPendingReply<QByteArray>\0"
    "GetConnectionSELinuxSecurityContext(QString)\0"
    "ReloadConfig()\0GetId()\0"
};

const QMetaObject Tp::Client::DBus::DBusDaemonInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__DBus__DBusDaemonInterface,
      qt_meta_data_Tp__Client__DBus__DBusDaemonInterface, 0 }
};

const QMetaObject *Tp::Client::DBus::DBusDaemonInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::DBus::DBusDaemonInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__DBus__DBusDaemonInterface))
        return static_cast<void*>(const_cast< DBusDaemonInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::DBus::DBusDaemonInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: NameOwnerChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: NameLost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: NameAcquired((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { QDBusPendingReply<QString> _r = Hello();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = _r; }  break;
        case 4: { QDBusPendingReply<uint> _r = RequestName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = _r; }  break;
        case 5: { QDBusPendingReply<uint> _r = ReleaseName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = _r; }  break;
        case 6: { QDBusPendingReply<uint> _r = StartServiceByName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = _r; }  break;
        case 7: { QDBusPendingReply<bool> _r = NameHasOwner((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = _r; }  break;
        case 8: { QDBusPendingReply<QStringList> _r = ListNames();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QStringList>*>(_a[0]) = _r; }  break;
        case 9: { QDBusPendingReply<QStringList> _r = ListActivatableNames();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QStringList>*>(_a[0]) = _r; }  break;
        case 10: { QDBusPendingReply<> _r = AddMatch((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 11: { QDBusPendingReply<> _r = RemoveMatch((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 12: { QDBusPendingReply<QString> _r = GetNameOwner((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = _r; }  break;
        case 13: { QDBusPendingReply<QStringList> _r = ListQueuedOwners((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QStringList>*>(_a[0]) = _r; }  break;
        case 14: { QDBusPendingReply<uint> _r = GetConnectionUnixUser((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = _r; }  break;
        case 15: { QDBusPendingReply<uint> _r = GetConnectionUnixProcessID((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = _r; }  break;
        case 16: { QDBusPendingReply<QByteArray> _r = GetConnectionSELinuxSecurityContext((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QByteArray>*>(_a[0]) = _r; }  break;
        case 17: { QDBusPendingReply<> _r = ReloadConfig();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 18: { QDBusPendingReply<QString> _r = GetId();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void Tp::Client::DBus::DBusDaemonInterface::NameOwnerChanged(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::Client::DBus::DBusDaemonInterface::NameLost(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tp::Client::DBus::DBusDaemonInterface::NameAcquired(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_Tp__Client__DBus__IntrospectableInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      70,   42,   43,   42, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__DBus__IntrospectableInterface[] = {
    "Tp::Client::DBus::IntrospectableInterface\0"
    "\0QDBusPendingReply<QString>\0Introspect()\0"
};

const QMetaObject Tp::Client::DBus::IntrospectableInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__DBus__IntrospectableInterface,
      qt_meta_data_Tp__Client__DBus__IntrospectableInterface, 0 }
};

const QMetaObject *Tp::Client::DBus::IntrospectableInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::DBus::IntrospectableInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__DBus__IntrospectableInterface))
        return static_cast<void*>(const_cast< IntrospectableInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::DBus::IntrospectableInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QDBusPendingReply<QString> _r = Introspect();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_Tp__Client__DBus__PeerInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      53,   32,   33,   32, 0x0a,
      87,   32,   60,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__DBus__PeerInterface[] = {
    "Tp::Client::DBus::PeerInterface\0\0"
    "QDBusPendingReply<>\0Ping()\0"
    "QDBusPendingReply<QString>\0GetMachineId()\0"
};

const QMetaObject Tp::Client::DBus::PeerInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__DBus__PeerInterface,
      qt_meta_data_Tp__Client__DBus__PeerInterface, 0 }
};

const QMetaObject *Tp::Client::DBus::PeerInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::DBus::PeerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__DBus__PeerInterface))
        return static_cast<void*>(const_cast< PeerInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::DBus::PeerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QDBusPendingReply<> _r = Ping();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 1: { QDBusPendingReply<QString> _r = GetMachineId();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_Tp__Client__DBus__PropertiesInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      98,   71,   39,   38, 0x0a,
     172,  139,  119,   38, 0x0a,
     251,  237,  206,   38, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__DBus__PropertiesInterface[] = {
    "Tp::Client::DBus::PropertiesInterface\0"
    "\0QDBusPendingReply<QDBusVariant>\0"
    "interfaceName,propertyName\0"
    "Get(QString,QString)\0QDBusPendingReply<>\0"
    "interfaceName,propertyName,value\0"
    "Set(QString,QString,QDBusVariant)\0"
    "QDBusPendingReply<QVariantMap>\0"
    "interfaceName\0GetAll(QString)\0"
};

const QMetaObject Tp::Client::DBus::PropertiesInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__DBus__PropertiesInterface,
      qt_meta_data_Tp__Client__DBus__PropertiesInterface, 0 }
};

const QMetaObject *Tp::Client::DBus::PropertiesInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::DBus::PropertiesInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__DBus__PropertiesInterface))
        return static_cast<void*>(const_cast< PropertiesInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::DBus::PropertiesInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QDBusPendingReply<QDBusVariant> _r = Get((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusVariant>*>(_a[0]) = _r; }  break;
        case 1: { QDBusPendingReply<> _r = Set((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QDBusVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 2: { QDBusPendingReply<QVariantMap> _r = GetAll((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QVariantMap>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
