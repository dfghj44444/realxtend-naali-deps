/****************************************************************************
** Meta object code from reading C++ file 'cli-channel-dispatcher.h'
**
** Created: Mon 7. Dec 18:09:18 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cli-channel-dispatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__Client__ChannelDispatcherInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       1,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
     135,   75,   40,   39, 0x0a,
     196,   75,   40,   39, 0x0a,

 // properties: name, type, flags
     269,  257, 0x0b095001,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ChannelDispatcherInterface[] = {
    "Tp::Client::ChannelDispatcherInterface\0"
    "\0QDBusPendingReply<QDBusObjectPath>\0"
    "account,requestedProperties,userActionTime,preferredHandler\0"
    "CreateChannel(QDBusObjectPath,QVariantMap,qlonglong,QString)\0"
    "EnsureChannel(QDBusObjectPath,QVariantMap,qlonglong,QString)\0"
    "QStringList\0Interfaces\0"
};

const QMetaObject Tp::Client::ChannelDispatcherInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ChannelDispatcherInterface,
      qt_meta_data_Tp__Client__ChannelDispatcherInterface, 0 }
};

const QMetaObject *Tp::Client::ChannelDispatcherInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ChannelDispatcherInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ChannelDispatcherInterface))
        return static_cast<void*>(const_cast< ChannelDispatcherInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ChannelDispatcherInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QDBusPendingReply<QDBusObjectPath> _r = CreateChannel((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< qlonglong(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusObjectPath>*>(_a[0]) = _r; }  break;
        case 1: { QDBusPendingReply<QDBusObjectPath> _r = EnsureChannel((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< qlonglong(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusObjectPath>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
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
QT_END_MOC_NAMESPACE
