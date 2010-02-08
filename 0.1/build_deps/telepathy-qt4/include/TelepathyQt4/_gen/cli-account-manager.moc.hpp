/****************************************************************************
** Meta object code from reading C++ file 'cli-account-manager.h'
**
** Created: Mon 7. Dec 18:09:21 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cli-account-manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__Client__AccountManagerInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       4,   27, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      45,   37,   36,   36, 0x05,
      91,   77,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
     232,  171,  136,   36, 0x0a,

 // properties: name, type, flags
     307,  295, 0x0b095001,
     337,  318, 0x00095009,
     351,  318, 0x00095009,
     367,  295, 0x0b095001,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__AccountManagerInterface[] = {
    "Tp::Client::AccountManagerInterface\0"
    "\0account\0AccountRemoved(QDBusObjectPath)\0"
    "account,valid\0"
    "AccountValidityChanged(QDBusObjectPath,bool)\0"
    "QDBusPendingReply<QDBusObjectPath>\0"
    "connectionManager,protocol,displayName,parameters,properties\0"
    "CreateAccount(QString,QString,QString,QVariantMap,QVariantMap)\0"
    "QStringList\0Interfaces\0Tp::ObjectPathList\0"
    "ValidAccounts\0InvalidAccounts\0"
    "SupportedAccountProperties\0"
};

const QMetaObject Tp::Client::AccountManagerInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__AccountManagerInterface,
      qt_meta_data_Tp__Client__AccountManagerInterface, 0 }
};

const QMetaObject *Tp::Client::AccountManagerInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::AccountManagerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__AccountManagerInterface))
        return static_cast<void*>(const_cast< AccountManagerInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::AccountManagerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: AccountRemoved((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        case 1: AccountValidityChanged((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: { QDBusPendingReply<QDBusObjectPath> _r = CreateAccount((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariantMap(*)>(_a[4])),(*reinterpret_cast< const QVariantMap(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusObjectPath>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = Interfaces(); break;
        case 1: *reinterpret_cast< Tp::ObjectPathList*>(_v) = ValidAccounts(); break;
        case 2: *reinterpret_cast< Tp::ObjectPathList*>(_v) = InvalidAccounts(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = SupportedAccountProperties(); break;
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
void Tp::Client::AccountManagerInterface::AccountRemoved(const QDBusObjectPath & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::Client::AccountManagerInterface::AccountValidityChanged(const QDBusObjectPath & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
