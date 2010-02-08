/****************************************************************************
** Meta object code from reading C++ file 'channel-request.h'
**
** Created: Wed 14. Oct 17:39:37 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'channel-request.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__ChannelRequest[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      43,   20,   19,   19, 0x05,
      67,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      87,   79,   19,   19, 0x08,
     134,  131,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tp__ChannelRequest[] = {
    "Tp::ChannelRequest\0\0errorName,errorMessage\0"
    "failed(QString,QString)\0succeeded()\0"
    "watcher\0gotMainProperties(QDBusPendingCallWatcher*)\0"
    "op\0onAccountReady(Tp::PendingOperation*)\0"
};

const QMetaObject Tp::ChannelRequest::staticMetaObject = {
    { &StatefulDBusProxy::staticMetaObject, qt_meta_stringdata_Tp__ChannelRequest,
      qt_meta_data_Tp__ChannelRequest, 0 }
};

const QMetaObject *Tp::ChannelRequest::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::ChannelRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__ChannelRequest))
        return static_cast<void*>(const_cast< ChannelRequest*>(this));
    if (!strcmp(_clname, "OptionalInterfaceFactory<ChannelRequest>"))
        return static_cast< OptionalInterfaceFactory<ChannelRequest>*>(const_cast< ChannelRequest*>(this));
    if (!strcmp(_clname, "ReadyObject"))
        return static_cast< ReadyObject*>(const_cast< ChannelRequest*>(this));
    if (!strcmp(_clname, "RefCounted"))
        return static_cast< RefCounted*>(const_cast< ChannelRequest*>(this));
    return StatefulDBusProxy::qt_metacast(_clname);
}

int Tp::ChannelRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StatefulDBusProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: failed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: succeeded(); break;
        case 2: gotMainProperties((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 3: onAccountReady((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Tp::ChannelRequest::failed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::ChannelRequest::succeeded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
