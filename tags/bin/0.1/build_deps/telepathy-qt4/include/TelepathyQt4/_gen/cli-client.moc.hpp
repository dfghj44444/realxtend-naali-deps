/****************************************************************************
** Meta object code from reading C++ file 'cli-client.h'
**
** Created: Mon 7. Dec 18:09:15 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cli-client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__Client__ClientInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   12, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // properties: name, type, flags
      40,   28, 0x0b095001,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ClientInterface[] = {
    "Tp::Client::ClientInterface\0QStringList\0"
    "Interfaces\0"
};

const QMetaObject Tp::Client::ClientInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ClientInterface,
      qt_meta_data_Tp__Client__ClientInterface, 0 }
};

const QMetaObject *Tp::Client::ClientInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ClientInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ClientInterface))
        return static_cast<void*>(const_cast< ClientInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ClientInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = Interfaces(); break;
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
static const uint qt_meta_data_Tp__Client__ClientApproverInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       1,   17, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      95,   57,   37,   36, 0x0a,

 // properties: name, type, flags
     189,  168, 0x00095009,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ClientApproverInterface[] = {
    "Tp::Client::ClientApproverInterface\0"
    "\0QDBusPendingReply<>\0"
    "channels,dispatchOperation,properties\0"
    "AddDispatchOperation(Tp::ChannelDetailsList,QDBusObjectPath,QVariantMa"
    "p)\0"
    "Tp::ChannelClassList\0ApproverChannelFilter\0"
};

const QMetaObject Tp::Client::ClientApproverInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ClientApproverInterface,
      qt_meta_data_Tp__Client__ClientApproverInterface, 0 }
};

const QMetaObject *Tp::Client::ClientApproverInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ClientApproverInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ClientApproverInterface))
        return static_cast<void*>(const_cast< ClientApproverInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ClientApproverInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QDBusPendingReply<> _r = AddDispatchOperation((*reinterpret_cast< const Tp::ChannelDetailsList(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2])),(*reinterpret_cast< const QVariantMap(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Tp::ChannelClassList*>(_v) = ApproverChannelFilter(); break;
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
static const uint qt_meta_data_Tp__Client__ClientHandlerInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       3,   17, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
     129,   56,   36,   35, 0x0a,

 // properties: name, type, flags
     263,  242, 0x00095009,
     289,  284, 0x01095001,
     323,  304, 0x00095009,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ClientHandlerInterface[] = {
    "Tp::Client::ClientHandlerInterface\0\0"
    "QDBusPendingReply<>\0"
    "account,connection,channels,requestsSatisfied,userActionTime,handlerIn"
    "fo\0"
    "HandleChannels(QDBusObjectPath,QDBusObjectPath,Tp::ChannelDetailsList,"
    "Tp::ObjectPathList,qulonglong,QVariantMap)\0"
    "Tp::ChannelClassList\0HandlerChannelFilter\0"
    "bool\0BypassApproval\0Tp::ObjectPathList\0"
    "HandledChannels\0"
};

const QMetaObject Tp::Client::ClientHandlerInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ClientHandlerInterface,
      qt_meta_data_Tp__Client__ClientHandlerInterface, 0 }
};

const QMetaObject *Tp::Client::ClientHandlerInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ClientHandlerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ClientHandlerInterface))
        return static_cast<void*>(const_cast< ClientHandlerInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ClientHandlerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QDBusPendingReply<> _r = HandleChannels((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2])),(*reinterpret_cast< const Tp::ChannelDetailsList(*)>(_a[3])),(*reinterpret_cast< const Tp::ObjectPathList(*)>(_a[4])),(*reinterpret_cast< qulonglong(*)>(_a[5])),(*reinterpret_cast< const QVariantMap(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Tp::ChannelClassList*>(_v) = HandlerChannelFilter(); break;
        case 1: *reinterpret_cast< bool*>(_v) = BypassApproval(); break;
        case 2: *reinterpret_cast< Tp::ObjectPathList*>(_v) = HandledChannels(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_Tp__Client__ClientInterfaceRequestsInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      85,   66,   46,   45, 0x0a,
     147,  125,   46,   45, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ClientInterfaceRequestsInterface[] = {
    "Tp::Client::ClientInterfaceRequestsInterface\0"
    "\0QDBusPendingReply<>\0request,properties\0"
    "AddRequest(QDBusObjectPath,QVariantMap)\0"
    "request,error,message\0"
    "RemoveRequest(QDBusObjectPath,QString,QString)\0"
};

const QMetaObject Tp::Client::ClientInterfaceRequestsInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ClientInterfaceRequestsInterface,
      qt_meta_data_Tp__Client__ClientInterfaceRequestsInterface, 0 }
};

const QMetaObject *Tp::Client::ClientInterfaceRequestsInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ClientInterfaceRequestsInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ClientInterfaceRequestsInterface))
        return static_cast<void*>(const_cast< ClientInterfaceRequestsInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ClientInterfaceRequestsInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QDBusPendingReply<> _r = AddRequest((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 1: { QDBusPendingReply<> _r = RemoveRequest((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_Tp__Client__ClientObserverInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       1,   17, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
     134,   57,   37,   36, 0x0a,

 // properties: name, type, flags
     274,  253, 0x00095009,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ClientObserverInterface[] = {
    "Tp::Client::ClientObserverInterface\0"
    "\0QDBusPendingReply<>\0"
    "account,connection,channels,dispatchOperation,requestsSatisfied,observ"
    "erInfo\0"
    "ObserveChannels(QDBusObjectPath,QDBusObjectPath,Tp::ChannelDetailsList"
    ",QDBusObjectPath,Tp::ObjectPathList,QVariantMap)\0"
    "Tp::ChannelClassList\0ObserverChannelFilter\0"
};

const QMetaObject Tp::Client::ClientObserverInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ClientObserverInterface,
      qt_meta_data_Tp__Client__ClientObserverInterface, 0 }
};

const QMetaObject *Tp::Client::ClientObserverInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ClientObserverInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ClientObserverInterface))
        return static_cast<void*>(const_cast< ClientObserverInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ClientObserverInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QDBusPendingReply<> _r = ObserveChannels((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2])),(*reinterpret_cast< const Tp::ChannelDetailsList(*)>(_a[3])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[4])),(*reinterpret_cast< const Tp::ObjectPathList(*)>(_a[5])),(*reinterpret_cast< const QVariantMap(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Tp::ChannelClassList*>(_v) = ObserverChannelFilter(); break;
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
QT_END_MOC_NAMESPACE
