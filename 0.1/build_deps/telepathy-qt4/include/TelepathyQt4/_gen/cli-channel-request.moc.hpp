/****************************************************************************
** Meta object code from reading C++ file 'cli-channel-request.h'
**
** Created: Mon 7. Dec 18:09:16 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cli-channel-request.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__Client__ChannelRequestInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       5,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      51,   37,   36,   36, 0x05,
      75,   36,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
     107,   36,   87,   36, 0x0a,
     117,   36,   87,   36, 0x0a,

 // properties: name, type, flags
     142,  126, 0x00095009,
     160,  150, 0x04095001,
     183,  175, 0x0a095001,
     234,  200, 0x00095009,
     255,  243, 0x0b095001,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__ChannelRequestInterface[] = {
    "Tp::Client::ChannelRequestInterface\0"
    "\0error,message\0Failed(QString,QString)\0"
    "Succeeded()\0QDBusPendingReply<>\0"
    "Proceed()\0Cancel()\0QDBusObjectPath\0"
    "Account\0qlonglong\0UserActionTime\0"
    "QString\0PreferredHandler\0"
    "Tp::QualifiedPropertyValueMapList\0"
    "Requests\0QStringList\0Interfaces\0"
};

const QMetaObject Tp::Client::ChannelRequestInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__ChannelRequestInterface,
      qt_meta_data_Tp__Client__ChannelRequestInterface, 0 }
};

const QMetaObject *Tp::Client::ChannelRequestInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::ChannelRequestInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__ChannelRequestInterface))
        return static_cast<void*>(const_cast< ChannelRequestInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::ChannelRequestInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: Failed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: Succeeded(); break;
        case 2: { QDBusPendingReply<> _r = Proceed();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<> _r = Cancel();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDBusObjectPath*>(_v) = Account(); break;
        case 1: *reinterpret_cast< qlonglong*>(_v) = UserActionTime(); break;
        case 2: *reinterpret_cast< QString*>(_v) = PreferredHandler(); break;
        case 3: *reinterpret_cast< Tp::QualifiedPropertyValueMapList*>(_v) = Requests(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = Interfaces(); break;
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
void Tp::Client::ChannelRequestInterface::Failed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::Client::ChannelRequestInterface::Succeeded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
