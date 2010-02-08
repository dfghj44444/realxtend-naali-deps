/****************************************************************************
** Meta object code from reading C++ file 'cli-media-session-handler.h'
**
** Created: Mon 7. Dec 18:09:12 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cli-media-session-handler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__Client__MediaSessionHandlerInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      79,   42,   41,   41, 0x05,

 // slots: signature, parameters, type, tag, flags
     166,  148,  128,   41, 0x0a,
     186,   41,  128,   41, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__MediaSessionHandlerInterface[] = {
    "Tp::Client::MediaSessionHandlerInterface\0"
    "\0streamHandler,ID,mediaType,direction\0"
    "NewStreamHandler(QDBusObjectPath,uint,uint,uint)\0"
    "QDBusPendingReply<>\0errorCode,message\0"
    "Error(uint,QString)\0Ready()\0"
};

const QMetaObject Tp::Client::MediaSessionHandlerInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__MediaSessionHandlerInterface,
      qt_meta_data_Tp__Client__MediaSessionHandlerInterface, 0 }
};

const QMetaObject *Tp::Client::MediaSessionHandlerInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::MediaSessionHandlerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__MediaSessionHandlerInterface))
        return static_cast<void*>(const_cast< MediaSessionHandlerInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::MediaSessionHandlerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: NewStreamHandler((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        case 1: { QDBusPendingReply<> _r = Error((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 2: { QDBusPendingReply<> _r = Ready();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Tp::Client::MediaSessionHandlerInterface::NewStreamHandler(const QDBusObjectPath & _t1, uint _t2, uint _t3, uint _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
