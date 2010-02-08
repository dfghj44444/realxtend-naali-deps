/****************************************************************************
** Meta object code from reading C++ file 'account-manager.h'
**
** Created: Wed 14. Oct 17:39:31 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'account-manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__AccountManager[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      25,   20,   19,   19, 0x05,
      49,   20,   19,   19, 0x05,
      84,   73,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     121,   19,   19,   19, 0x08,
     167,  165,   19,   19, 0x08,
     214,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tp__AccountManager[] = {
    "Tp::AccountManager\0\0path\0"
    "accountCreated(QString)\0accountRemoved(QString)\0"
    "path,valid\0accountValidityChanged(QString,bool)\0"
    "gotMainProperties(QDBusPendingCallWatcher*)\0"
    ",\0onAccountValidityChanged(QDBusObjectPath,bool)\0"
    "onAccountRemoved(QDBusObjectPath)\0"
};

const QMetaObject Tp::AccountManager::staticMetaObject = {
    { &StatelessDBusProxy::staticMetaObject, qt_meta_stringdata_Tp__AccountManager,
      qt_meta_data_Tp__AccountManager, 0 }
};

const QMetaObject *Tp::AccountManager::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::AccountManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__AccountManager))
        return static_cast<void*>(const_cast< AccountManager*>(this));
    if (!strcmp(_clname, "OptionalInterfaceFactory<AccountManager>"))
        return static_cast< OptionalInterfaceFactory<AccountManager>*>(const_cast< AccountManager*>(this));
    if (!strcmp(_clname, "ReadyObject"))
        return static_cast< ReadyObject*>(const_cast< AccountManager*>(this));
    if (!strcmp(_clname, "RefCounted"))
        return static_cast< RefCounted*>(const_cast< AccountManager*>(this));
    return StatelessDBusProxy::qt_metacast(_clname);
}

int Tp::AccountManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StatelessDBusProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: accountCreated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: accountRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: accountValidityChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: gotMainProperties((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 4: onAccountValidityChanged((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: onAccountRemoved((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Tp::AccountManager::accountCreated(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::AccountManager::accountRemoved(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tp::AccountManager::accountValidityChanged(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
