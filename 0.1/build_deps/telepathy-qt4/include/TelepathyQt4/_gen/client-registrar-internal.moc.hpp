/****************************************************************************
** Meta object code from reading C++ file 'client-registrar-internal.h'
**
** Created: Wed 14. Oct 17:40:00 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client-registrar-internal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__ClientAdaptor[] = {

 // content:
       2,       // revision
       0,       // classname
       2,   12, // classinfo
       0,    0, // methods
       1,   16, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // classinfo: key, value
      51,   18,
     197,   67,

 // properties: name, type, flags
     229,  217, 0x0b095001,

       0        // eod
};

static const char qt_meta_stringdata_Tp__ClientAdaptor[] = {
    "Tp::ClientAdaptor\0org.freedesktop.Telepathy.Client\0"
    "D-Bus Interface\0"
    "  <interface name=\"org.freedesktop.Telepathy.Client\" >\n    <propert"
    "y name=\"Interfaces\" type=\"as\" access=\"read\" />\n  </interface>\n\0"
    "D-Bus Introspection\0QStringList\0"
    "Interfaces\0"
};

const QMetaObject Tp::ClientAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_Tp__ClientAdaptor,
      qt_meta_data_Tp__ClientAdaptor, 0 }
};

const QMetaObject *Tp::ClientAdaptor::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::ClientAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__ClientAdaptor))
        return static_cast<void*>(const_cast< ClientAdaptor*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int Tp::ClientAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
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
static const uint qt_meta_data_Tp__ClientObserverAdaptor[] = {

 // content:
       2,       // revision
       0,       // classname
       2,   12, // classinfo
       1,   16, // methods
       1,   21, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // classinfo: key, value
      68,   26,
     652,   84,

 // slots: signature, parameters, type, tag, flags
     758,  673,  672,  672, 0x0a,

 // properties: name, type, flags
     911,  890, 0x00095009,

       0        // eod
};

static const char qt_meta_stringdata_Tp__ClientObserverAdaptor[] = {
    "Tp::ClientObserverAdaptor\0"
    "org.freedesktop.Telepathy.Client.Observer\0"
    "D-Bus Interface\0"
    "  <interface name=\"org.freedesktop.Telepathy.Client.Observer\" >\n   "
    " <property name=\"ObserverChannelFilter\" type=\"aa{sv}\" access=\"rea"
    "d\" />\n    <method name=\"ObserveChannels\" >\n      <arg name=\"Acco"
    "unt\" type=\"o\" direction=\"in\" />\n      <arg name=\"Connection\" t"
    "ype=\"o\" direction=\"in\" />\n      <arg name=\"Channels\" type=\"a(o"
    "a{sv})\" direction=\"in\" />\n      <arg name=\"Dispatch_Operation\" t"
    "ype=\"o\" direction=\"in\" />\n      <arg name=\"Requests_Satisfied\" "
    "type=\"ao\" direction=\"in\" />\n      <arg name=\"Observer_Info\" typ"
    "e=\"a{sv}\" direction=\"in\" />\n    </method>\n  </interface>\n\0"
    "D-Bus Introspection\0\0"
    "account,connection,channels,dispatchOperation,requestsSatisfied,observ"
    "erInfo,message\0"
    "ObserveChannels(QDBusObjectPath,QDBusObjectPath,Tp::ChannelDetailsList"
    ",QDBusObjectPath,Tp::ObjectPathList,QVariantMap,QDBusMessage)\0"
    "Tp::ChannelClassList\0ObserverChannelFilter\0"
};

const QMetaObject Tp::ClientObserverAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_Tp__ClientObserverAdaptor,
      qt_meta_data_Tp__ClientObserverAdaptor, 0 }
};

const QMetaObject *Tp::ClientObserverAdaptor::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::ClientObserverAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__ClientObserverAdaptor))
        return static_cast<void*>(const_cast< ClientObserverAdaptor*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int Tp::ClientObserverAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ObserveChannels((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2])),(*reinterpret_cast< const Tp::ChannelDetailsList(*)>(_a[3])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[4])),(*reinterpret_cast< const Tp::ObjectPathList(*)>(_a[5])),(*reinterpret_cast< const QVariantMap(*)>(_a[6])),(*reinterpret_cast< const QDBusMessage(*)>(_a[7]))); break;
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
static const uint qt_meta_data_Tp__ClientApproverAdaptor[] = {

 // content:
       2,       // revision
       0,       // classname
       2,   12, // classinfo
       1,   16, // methods
       1,   21, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // classinfo: key, value
      68,   26,
     480,   84,

 // slots: signature, parameters, type, tag, flags
     547,  501,  500,  500, 0x0a,

 // properties: name, type, flags
     654,  633, 0x00095009,

       0        // eod
};

static const char qt_meta_stringdata_Tp__ClientApproverAdaptor[] = {
    "Tp::ClientApproverAdaptor\0"
    "org.freedesktop.Telepathy.Client.Approver\0"
    "D-Bus Interface\0"
    "  <interface name=\"org.freedesktop.Telepathy.Client.Approver\" >\n   "
    " <property name=\"ApproverChannelFilter\" type=\"aa{sv}\" access=\"rea"
    "d\" />\n    <method name=\"AddDispatchOperation\" >\n      <arg name=\""
    "Channels\" type=\"a(oa{sv})\" direction=\"in\" />\n      <arg name=\"D"
    "ispatch_Operation\" type=\"o\" direction=\"in\" />\n      <arg name=\""
    "Properties\" type=\"a{sv}\" direction=\"in\" />\n    </method>\n  </in"
    "terface>\n\0"
    "D-Bus Introspection\0\0"
    "channels,dispatchOperation,properties,message\0"
    "AddDispatchOperation(Tp::ChannelDetailsList,QDBusObjectPath,QVariantMa"
    "p,QDBusMessage)\0"
    "Tp::ChannelClassList\0ApproverChannelFilter\0"
};

const QMetaObject Tp::ClientApproverAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_Tp__ClientApproverAdaptor,
      qt_meta_data_Tp__ClientApproverAdaptor, 0 }
};

const QMetaObject *Tp::ClientApproverAdaptor::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::ClientApproverAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__ClientApproverAdaptor))
        return static_cast<void*>(const_cast< ClientApproverAdaptor*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int Tp::ClientApproverAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: AddDispatchOperation((*reinterpret_cast< const Tp::ChannelDetailsList(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2])),(*reinterpret_cast< const QVariantMap(*)>(_a[3])),(*reinterpret_cast< const QDBusMessage(*)>(_a[4]))); break;
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
static const uint qt_meta_data_Tp__ClientHandlerAdaptor[] = {

 // content:
       2,       // revision
       0,       // classname
       2,   12, // classinfo
       2,   16, // methods
       3,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // classinfo: key, value
      66,   25,
     770,   82,

 // slots: signature, parameters, type, tag, flags
     872,  791,  790,  790, 0x0a,
    1004,  998,  790,  790, 0x08,

 // properties: name, type, flags
    1062, 1041, 0x00095009,
    1088, 1083, 0x01095001,
    1122, 1103, 0x00095009,

       0        // eod
};

static const char qt_meta_stringdata_Tp__ClientHandlerAdaptor[] = {
    "Tp::ClientHandlerAdaptor\0"
    "org.freedesktop.Telepathy.Client.Handler\0"
    "D-Bus Interface\0"
    "  <interface name=\"org.freedesktop.Telepathy.Client.Handler\" >\n    "
    "<property name=\"HandlerChannelFilter\" type=\"aa{sv}\" access=\"read\""
    " />\n    <property name=\"BypassApproval\" type=\"b\" access=\"read\" "
    "/>\n    <property name=\"HandledChannels\" type=\"ao\" access=\"read\""
    " />\n    <method name=\"HandleChannels\" >\n      <arg name=\"Account\""
    " type=\"o\" direction=\"in\" />\n      <arg name=\"Connection\" type=\""
    "o\" direction=\"in\" />\n      <arg name=\"Channels\" type=\"a(oa{sv})"
    "\" direction=\"in\" />\n      <arg name=\"Requests_Satisfied\" type=\""
    "ao\" direction=\"in\" />\n      <arg name=\"User_Action_Time\" type=\""
    "t\" direction=\"in\" />\n      <arg name=\"Handler_Info\" type=\"a{sv}"
    "\" direction=\"in\" />\n    </method>\n  </interface>\n\0"
    "D-Bus Introspection\0\0"
    "account,connection,channels,requestsSatisfied,userActionTime,handlerIn"
    "fo,message\0"
    "HandleChannels(QDBusObjectPath,QDBusObjectPath,Tp::ChannelDetailsList,"
    "Tp::ObjectPathList,qulonglong,QVariantMap,QDBusMessage)\0"
    "proxy\0onChannelInvalidated(Tp::DBusProxy*)\0"
    "Tp::ChannelClassList\0HandlerChannelFilter\0"
    "bool\0BypassApproval\0Tp::ObjectPathList\0"
    "HandledChannels\0"
};

const QMetaObject Tp::ClientHandlerAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_Tp__ClientHandlerAdaptor,
      qt_meta_data_Tp__ClientHandlerAdaptor, 0 }
};

const QMetaObject *Tp::ClientHandlerAdaptor::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::ClientHandlerAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__ClientHandlerAdaptor))
        return static_cast<void*>(const_cast< ClientHandlerAdaptor*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int Tp::ClientHandlerAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: HandleChannels((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2])),(*reinterpret_cast< const Tp::ChannelDetailsList(*)>(_a[3])),(*reinterpret_cast< const Tp::ObjectPathList(*)>(_a[4])),(*reinterpret_cast< qulonglong(*)>(_a[5])),(*reinterpret_cast< const QVariantMap(*)>(_a[6])),(*reinterpret_cast< const QDBusMessage(*)>(_a[7]))); break;
        case 1: onChannelInvalidated((*reinterpret_cast< Tp::DBusProxy*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
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
static const uint qt_meta_data_Tp__ClientHandlerRequestsAdaptor[] = {

 // content:
       2,       // revision
       0,       // classname
       2,   12, // classinfo
       2,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // classinfo: key, value
      85,   33,
     556,  101,

 // slots: signature, parameters, type, tag, flags
     611,  577,  576,  576, 0x0a,
     703,  664,  576,  576, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tp__ClientHandlerRequestsAdaptor[] = {
    "Tp::ClientHandlerRequestsAdaptor\0"
    "org.freedesktop.Telepathy.Client.Interface.Requests\0"
    "D-Bus Interface\0"
    "  <interface name=\"org.freedesktop.Telepathy.Client.Interface.Request"
    "s\" >\n    <method name=\"AddRequest\" >\n      <arg name=\"Request\" "
    "type=\"o\" direction=\"in\" />\n      <arg name=\"Properties\" type=\""
    "a{sv}\" direction=\"in\" />\n    </method>\n    <method name=\"RemoveR"
    "equest\" >\n      <arg name=\"Request\" type=\"o\" direction=\"in\" />"
    "\n      <arg name=\"Error\" type=\"s\" direction=\"in\" />\n      <arg"
    " name=\"Message\" type=\"s\" direction=\"in\" />\n    </method>\n  </i"
    "nterface>\n\0"
    "D-Bus Introspection\0\0"
    "request,requestProperties,message\0"
    "AddRequest(QDBusObjectPath,QVariantMap,QDBusMessage)\0"
    "request,errorName,errorMessage,message\0"
    "RemoveRequest(QDBusObjectPath,QString,QString,QDBusMessage)\0"
};

const QMetaObject Tp::ClientHandlerRequestsAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_Tp__ClientHandlerRequestsAdaptor,
      qt_meta_data_Tp__ClientHandlerRequestsAdaptor, 0 }
};

const QMetaObject *Tp::ClientHandlerRequestsAdaptor::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::ClientHandlerRequestsAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__ClientHandlerRequestsAdaptor))
        return static_cast<void*>(const_cast< ClientHandlerRequestsAdaptor*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int Tp::ClientHandlerRequestsAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: AddRequest((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< const QDBusMessage(*)>(_a[3]))); break;
        case 1: RemoveRequest((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QDBusMessage(*)>(_a[4]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
