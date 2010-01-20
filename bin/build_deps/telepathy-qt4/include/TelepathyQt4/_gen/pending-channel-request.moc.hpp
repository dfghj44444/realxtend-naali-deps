/****************************************************************************
** Meta object code from reading C++ file 'pending-channel-request.h'
**
** Created: Wed 14. Oct 17:40:07 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pending-channel-request.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__PendingChannelRequest[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      42,   27,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
      95,   87,   26,   26, 0x08,
     142,  139,   26,   26, 0x08,
     192,  139,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tp__PendingChannelRequest[] = {
    "Tp::PendingChannelRequest\0\0channelRequest\0"
    "channelRequestCreated(Tp::ChannelRequestPtr)\0"
    "watcher\0onWatcherFinished(QDBusPendingCallWatcher*)\0"
    "op\0onProceedOperationFinished(Tp::PendingOperation*)\0"
    "onCancelOperationFinished(Tp::PendingOperation*)\0"
};

const QMetaObject Tp::PendingChannelRequest::staticMetaObject = {
    { &PendingOperation::staticMetaObject, qt_meta_stringdata_Tp__PendingChannelRequest,
      qt_meta_data_Tp__PendingChannelRequest, 0 }
};

const QMetaObject *Tp::PendingChannelRequest::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::PendingChannelRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__PendingChannelRequest))
        return static_cast<void*>(const_cast< PendingChannelRequest*>(this));
    return PendingOperation::qt_metacast(_clname);
}

int Tp::PendingChannelRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PendingOperation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: channelRequestCreated((*reinterpret_cast< const Tp::ChannelRequestPtr(*)>(_a[1]))); break;
        case 1: onWatcherFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 2: onProceedOperationFinished((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        case 3: onCancelOperationFinished((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Tp::PendingChannelRequest::channelRequestCreated(const Tp::ChannelRequestPtr & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
