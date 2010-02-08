/****************************************************************************
** Meta object code from reading C++ file 'cli-connection-manager.h'
**
** Created: Mon 7. Dec 18:09:14 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cli-connection-manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__Client__ConnectionManagerInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       1,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      68,   40,   39,   39, 0x05,

 // slots: signature, parameters, type, tag, flags
     161,  152,  115,   39, 0x0a,
     215,   39,  184,   39, 0x0a,
     294,  274,  231,   39, 0x0a,

 // properties: name, type, flags
     345,  333, 0x0b095001,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ConnectionManagerInterface[] = {
    "Tp::Client::ConnectionManagerInterface\0"
    "\0busName,objectPath,protocol\0"
    "NewConnection(QString,QDBusObjectPath,QString)\0"
    "QDBusPendingReply<Tp::ParamSpecList>\0"
    "protocol\0GetParameters(QString)\0"
    "QDBusPendingReply<QStringList>\0"
    "ListProtocols()\0"
    "QDBusPendingReply<QString,QDBusObjectPath>\0"
    "protocol,parameters\0"
    "RequestConnection(QString,QVariantMap)\0"
    "QStringList\0Interfaces\0"
};

const QMetaObject Tp::Client::ConnectionManagerInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ConnectionManagerInterface,
      qt_meta_data_Tp__Client__ConnectionManagerInterface, 0 }
};

const QMetaObject *Tp::Client::ConnectionManagerInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ConnectionManagerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ConnectionManagerInterface))
        return static_cast<void*>(const_cast< ConnectionManagerInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ConnectionManagerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: NewConnection((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: { QDBusPendingReply<Tp::ParamSpecList> _r = GetParameters((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::ParamSpecList>*>(_a[0]) = _r; }  break;
        case 2: { QDBusPendingReply<QStringList> _r = ListProtocols();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QStringList>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<QString,QDBusObjectPath> _r = RequestConnection((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString,QDBusObjectPath>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 4;
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

// SIGNAL 0
void Tp::Client::ConnectionManagerInterface::NewConnection(const QString & _t1, const QDBusObjectPath & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
