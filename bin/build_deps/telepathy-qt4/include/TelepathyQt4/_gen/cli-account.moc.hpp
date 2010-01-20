/****************************************************************************
** Meta object code from reading C++ file 'cli-account.h'
**
** Created: Mon 7. Dec 18:09:22 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cli-account.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__Client__AccountInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   12, // methods
      16,   37, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,
      51,   40,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
     107,   29,   87,   29, 0x0a,
     157,  147,  116,   29, 0x0a,
     199,   29,   87,   29, 0x0a,

 // properties: name, type, flags
     223,  211, 0x0b095001,
     242,  234, 0x0a095103,
     254,  234, 0x0a095103,
     264,  259, 0x01095001,
     270,  259, 0x01095103,
     278,  234, 0x0a095103,
     299,  287, 0x08095001,
     329,  310, 0x0009510b,
     347,  259, 0x01095103,
     384,  368, 0x00095009,
     400,  395, 0x03095001,
     417,  395, 0x03095001,
     440,  310, 0x00095009,
     456,  310, 0x0009510b,
     474,  234, 0x0a095001,
     489,  259, 0x01095001,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__AccountInterface[] = {
    "Tp::Client::AccountInterface\0\0Removed()\0"
    "properties\0AccountPropertyChanged(QVariantMap)\0"
    "QDBusPendingReply<>\0Remove()\0"
    "QDBusPendingReply<QStringList>\0set,unset\0"
    "UpdateParameters(QVariantMap,QStringList)\0"
    "Reconnect()\0QStringList\0Interfaces\0"
    "QString\0DisplayName\0Icon\0bool\0Valid\0"
    "Enabled\0Nickname\0QVariantMap\0Parameters\0"
    "Tp::SimplePresence\0AutomaticPresence\0"
    "ConnectAutomatically\0QDBusObjectPath\0"
    "Connection\0uint\0ConnectionStatus\0"
    "ConnectionStatusReason\0CurrentPresence\0"
    "RequestedPresence\0NormalizedName\0"
    "HasBeenOnline\0"
};

const QMetaObject Tp::Client::AccountInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__AccountInterface,
      qt_meta_data_Tp__Client__AccountInterface, 0 }
};

const QMetaObject *Tp::Client::AccountInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::AccountInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__AccountInterface))
        return static_cast<void*>(const_cast< AccountInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::AccountInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: Removed(); break;
        case 1: AccountPropertyChanged((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 2: { QDBusPendingReply<> _r = Remove();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<QStringList> _r = UpdateParameters((*reinterpret_cast< const QVariantMap(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QStringList>*>(_a[0]) = _r; }  break;
        case 4: { QDBusPendingReply<> _r = Reconnect();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = Interfaces(); break;
        case 1: *reinterpret_cast< QString*>(_v) = DisplayName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = Icon(); break;
        case 3: *reinterpret_cast< bool*>(_v) = Valid(); break;
        case 4: *reinterpret_cast< bool*>(_v) = Enabled(); break;
        case 5: *reinterpret_cast< QString*>(_v) = Nickname(); break;
        case 6: *reinterpret_cast< QVariantMap*>(_v) = Parameters(); break;
        case 7: *reinterpret_cast< Tp::SimplePresence*>(_v) = AutomaticPresence(); break;
        case 8: *reinterpret_cast< bool*>(_v) = ConnectAutomatically(); break;
        case 9: *reinterpret_cast< QDBusObjectPath*>(_v) = Connection(); break;
        case 10: *reinterpret_cast< uint*>(_v) = ConnectionStatus(); break;
        case 11: *reinterpret_cast< uint*>(_v) = ConnectionStatusReason(); break;
        case 12: *reinterpret_cast< Tp::SimplePresence*>(_v) = CurrentPresence(); break;
        case 13: *reinterpret_cast< Tp::SimplePresence*>(_v) = RequestedPresence(); break;
        case 14: *reinterpret_cast< QString*>(_v) = NormalizedName(); break;
        case 15: *reinterpret_cast< bool*>(_v) = HasBeenOnline(); break;
        }
        _id -= 16;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setDisplayName(*reinterpret_cast< QString*>(_v)); break;
        case 2: setIcon(*reinterpret_cast< QString*>(_v)); break;
        case 4: setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 5: setNickname(*reinterpret_cast< QString*>(_v)); break;
        case 7: setAutomaticPresence(*reinterpret_cast< Tp::SimplePresence*>(_v)); break;
        case 8: setConnectAutomatically(*reinterpret_cast< bool*>(_v)); break;
        case 13: setRequestedPresence(*reinterpret_cast< Tp::SimplePresence*>(_v)); break;
        }
        _id -= 16;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Tp::Client::AccountInterface::Removed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Tp::Client::AccountInterface::AccountPropertyChanged(const QVariantMap & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_Tp__Client__AccountInterfaceAvatarInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       1,   17, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      45,   44,   44,   44, 0x05,

 // properties: name, type, flags
      72,   61, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__AccountInterfaceAvatarInterface[] = {
    "Tp::Client::AccountInterfaceAvatarInterface\0"
    "\0AvatarChanged()\0Tp::Avatar\0Avatar\0"
};

const QMetaObject Tp::Client::AccountInterfaceAvatarInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__AccountInterfaceAvatarInterface,
      qt_meta_data_Tp__Client__AccountInterfaceAvatarInterface, 0 }
};

const QMetaObject *Tp::Client::AccountInterfaceAvatarInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::AccountInterfaceAvatarInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__AccountInterfaceAvatarInterface))
        return static_cast<void*>(const_cast< AccountInterfaceAvatarInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::AccountInterfaceAvatarInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: AvatarChanged(); break;
        default: ;
        }
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Tp::Avatar*>(_v) = Avatar(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAvatar(*reinterpret_cast< Tp::Avatar*>(_v)); break;
        }
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
void Tp::Client::AccountInterfaceAvatarInterface::AvatarChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
