/****************************************************************************
** Meta object code from reading C++ file 'cli-channel-dispatch-operation.h'
**
** Created: Mon 7. Dec 18:09:17 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cli-channel-dispatch-operation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__Client__ChannelDispatchOperationInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       5,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      69,   47,   46,   46, 0x05,
     114,   46,   46,   46, 0x05,

 // slots: signature, parameters, type, tag, flags
     153,  145,  125,   46, 0x0a,
     173,   46,  125,   46, 0x0a,

 // properties: name, type, flags
     193,  181, 0x0b095001,
     220,  204, 0x00095009,
     231,  204, 0x00095009,
     262,  239, 0x00095009,
     271,  181, 0x0b095001,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ChannelDispatchOperationInterface[] = {
    "Tp::Client::ChannelDispatchOperationInterface\0"
    "\0channel,error,message\0"
    "ChannelLost(QDBusObjectPath,QString,QString)\0"
    "Finished()\0QDBusPendingReply<>\0handler\0"
    "HandleWith(QString)\0Claim()\0QStringList\0"
    "Interfaces\0QDBusObjectPath\0Connection\0"
    "Account\0Tp::ChannelDetailsList\0Channels\0"
    "PossibleHandlers\0"
};

const QMetaObject Tp::Client::ChannelDispatchOperationInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ChannelDispatchOperationInterface,
      qt_meta_data_Tp__Client__ChannelDispatchOperationInterface, 0 }
};

const QMetaObject *Tp::Client::ChannelDispatchOperationInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ChannelDispatchOperationInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ChannelDispatchOperationInterface))
        return static_cast<void*>(const_cast< ChannelDispatchOperationInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ChannelDispatchOperationInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ChannelLost((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: Finished(); break;
        case 2: { QDBusPendingReply<> _r = HandleWith((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<> _r = Claim();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = Interfaces(); break;
        case 1: *reinterpret_cast< QDBusObjectPath*>(_v) = Connection(); break;
        case 2: *reinterpret_cast< QDBusObjectPath*>(_v) = Account(); break;
        case 3: *reinterpret_cast< Tp::ChannelDetailsList*>(_v) = Channels(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = PossibleHandlers(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Tp::Client::ChannelDispatchOperationInterface::ChannelLost(const QDBusObjectPath & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::Client::ChannelDispatchOperationInterface::Finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
