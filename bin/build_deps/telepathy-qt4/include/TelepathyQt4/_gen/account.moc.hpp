/****************************************************************************
** Meta object code from reading C++ file 'account.h'
**
** Created: Wed 14. Oct 17:39:33 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'account.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__Account[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      41,   12,   12,   12, 0x05,
      62,   12,   12,   12, 0x05,
      87,   12,   12,   12, 0x05,
     118,   12,   12,   12, 0x05,
     140,   12,   12,   12, 0x05,
     159,   12,   12,   12, 0x05,
     202,   12,   12,   12, 0x05,
     216,   12,   12,   12, 0x05,
     247,   12,   12,   12, 0x05,
     292,   12,   12,   12, 0x05,
     335,   12,   12,   12, 0x05,
     380,   12,   12,   12, 0x05,
     408,  406,   12,   12, 0x05,
     496,  481,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     524,   12,   12,   12, 0x08,
     568,   12,   12,   12, 0x08,
     604,   12,   12,   12, 0x08,
     622,   12,   12,   12, 0x08,
     676,  670,   12,   12, 0x08,
     707,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Account[] = {
    "Tp::Account\0\0displayNameChanged(QString)\0"
    "iconChanged(QString)\0nicknameChanged(QString)\0"
    "normalizedNameChanged(QString)\0"
    "validityChanged(bool)\0stateChanged(bool)\0"
    "connectsAutomaticallyPropertyChanged(bool)\0"
    "firstOnline()\0parametersChanged(QVariantMap)\0"
    "automaticPresenceChanged(Tp::SimplePresence)\0"
    "currentPresenceChanged(Tp::SimplePresence)\0"
    "requestedPresenceChanged(Tp::SimplePresence)\0"
    "avatarChanged(Tp::Avatar)\0,\0"
    "connectionStatusChanged(Tp::ConnectionStatus,Tp::ConnectionStatusReaso"
    "n)\0"
    "haveConnection\0haveConnectionChanged(bool)\0"
    "gotMainProperties(QDBusPendingCallWatcher*)\0"
    "gotAvatar(QDBusPendingCallWatcher*)\0"
    "onAvatarChanged()\0"
    "onConnectionManagerReady(Tp::PendingOperation*)\0"
    "delta\0onPropertyChanged(QVariantMap)\0"
    "onRemoved()\0"
};

const QMetaObject Tp::Account::staticMetaObject = {
    { &StatelessDBusProxy::staticMetaObject, qt_meta_stringdata_Tp__Account,
      qt_meta_data_Tp__Account, 0 }
};

const QMetaObject *Tp::Account::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Account::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Account))
        return static_cast<void*>(const_cast< Account*>(this));
    if (!strcmp(_clname, "OptionalInterfaceFactory<Account>"))
        return static_cast< OptionalInterfaceFactory<Account>*>(const_cast< Account*>(this));
    if (!strcmp(_clname, "ReadyObject"))
        return static_cast< ReadyObject*>(const_cast< Account*>(this));
    if (!strcmp(_clname, "RefCounted"))
        return static_cast< RefCounted*>(const_cast< Account*>(this));
    return StatelessDBusProxy::qt_metacast(_clname);
}

int Tp::Account::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StatelessDBusProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: displayNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: iconChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: nicknameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: normalizedNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: validityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: stateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: connectsAutomaticallyPropertyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: firstOnline(); break;
        case 8: parametersChanged((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 9: automaticPresenceChanged((*reinterpret_cast< const Tp::SimplePresence(*)>(_a[1]))); break;
        case 10: currentPresenceChanged((*reinterpret_cast< const Tp::SimplePresence(*)>(_a[1]))); break;
        case 11: requestedPresenceChanged((*reinterpret_cast< const Tp::SimplePresence(*)>(_a[1]))); break;
        case 12: avatarChanged((*reinterpret_cast< const Tp::Avatar(*)>(_a[1]))); break;
        case 13: connectionStatusChanged((*reinterpret_cast< Tp::ConnectionStatus(*)>(_a[1])),(*reinterpret_cast< Tp::ConnectionStatusReason(*)>(_a[2]))); break;
        case 14: haveConnectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: gotMainProperties((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 16: gotAvatar((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 17: onAvatarChanged(); break;
        case 18: onConnectionManagerReady((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        case 19: onPropertyChanged((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 20: onRemoved(); break;
        default: ;
        }
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void Tp::Account::displayNameChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::Account::iconChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tp::Account::nicknameChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tp::Account::normalizedNameChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Tp::Account::validityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Tp::Account::stateChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Tp::Account::connectsAutomaticallyPropertyChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Tp::Account::firstOnline()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void Tp::Account::parametersChanged(const QVariantMap & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Tp::Account::automaticPresenceChanged(const Tp::SimplePresence & _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< Tp::Account *>(this), &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Tp::Account::currentPresenceChanged(const Tp::SimplePresence & _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< Tp::Account *>(this), &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Tp::Account::requestedPresenceChanged(const Tp::SimplePresence & _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< Tp::Account *>(this), &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Tp::Account::avatarChanged(const Tp::Avatar & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Tp::Account::connectionStatusChanged(Tp::ConnectionStatus _t1, Tp::ConnectionStatusReason _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Tp::Account::haveConnectionChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_END_MOC_NAMESPACE
