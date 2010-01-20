/****************************************************************************
** Meta object code from reading C++ file 'streamed-media-channel.h'
**
** Created: Wed 14. Oct 17:39:57 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streamed-media-channel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__PendingMediaStreams[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      62,   24,   24,   24, 0x08,
      98,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tp__PendingMediaStreams[] = {
    "Tp::PendingMediaStreams\0\0"
    "gotStreams(QDBusPendingCallWatcher*)\0"
    "onStreamRemoved(Tp::MediaStreamPtr)\0"
    "onStreamReady(Tp::PendingOperation*)\0"
};

const QMetaObject Tp::PendingMediaStreams::staticMetaObject = {
    { &PendingOperation::staticMetaObject, qt_meta_stringdata_Tp__PendingMediaStreams,
      qt_meta_data_Tp__PendingMediaStreams, 0 }
};

const QMetaObject *Tp::PendingMediaStreams::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::PendingMediaStreams::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__PendingMediaStreams))
        return static_cast<void*>(const_cast< PendingMediaStreams*>(this));
    return PendingOperation::qt_metacast(_clname);
}

int Tp::PendingMediaStreams::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PendingOperation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: gotStreams((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 1: onStreamRemoved((*reinterpret_cast< Tp::MediaStreamPtr(*)>(_a[1]))); break;
        case 2: onStreamReady((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_Tp__MediaStream[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      20,   17,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tp__MediaStream[] = {
    "Tp::MediaStream\0\0op\0"
    "gotContact(Tp::PendingOperation*)\0"
};

const QMetaObject Tp::MediaStream::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tp__MediaStream,
      qt_meta_data_Tp__MediaStream, 0 }
};

const QMetaObject *Tp::MediaStream::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::MediaStream::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__MediaStream))
        return static_cast<void*>(const_cast< MediaStream*>(this));
    if (!strcmp(_clname, "RefCounted"))
        return static_cast< RefCounted*>(const_cast< MediaStream*>(this));
    return QObject::qt_metacast(_clname);
}

int Tp::MediaStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: gotContact((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_Tp__StreamedMediaChannel[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      33,   26,   25,   25, 0x05,
      65,   26,   25,   25, 0x05,
     128,   99,   25,   25, 0x05,
     231,  223,   25,   25, 0x05,
     321,  291,   25,   25, 0x05,
     395,  382,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
     462,   25,   25,   25, 0x08,
     499,   25,   25,   25, 0x08,
     539,  536,   25,   25, 0x08,
     569,   25,   25,   25, 0x08,
     591,  536,   25,   25, 0x08,
     634,  632,   25,   25, 0x08,
     666,  536,   25,   25, 0x08,
     699,   25,   25,   25, 0x08,
     743,  632,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tp__StreamedMediaChannel[] = {
    "Tp::StreamedMediaChannel\0\0stream\0"
    "streamAdded(Tp::MediaStreamPtr)\0"
    "streamRemoved(Tp::MediaStreamPtr)\0"
    "stream,direction,pendingSend\0"
    "streamDirectionChanged(Tp::MediaStreamPtr,Tp::MediaStreamDirection,Tp:"
    ":MediaStreamPendingSend)\0"
    "stream,\0"
    "streamStateChanged(Tp::MediaStreamPtr,Tp::MediaStreamState)\0"
    "stream,errorCode,errorMessage\0"
    "streamError(Tp::MediaStreamPtr,Tp::MediaStreamError,QString)\0"
    "state,reason\0"
    "localHoldStateChanged(Tp::LocalHoldState,Tp::LocalHoldStateReason)\0"
    "gotStreams(QDBusPendingCallWatcher*)\0"
    "onStreamReady(Tp::PendingOperation*)\0"
    ",,\0onStreamAdded(uint,uint,uint)\0"
    "onStreamRemoved(uint)\0"
    "onStreamDirectionChanged(uint,uint,uint)\0"
    ",\0onStreamStateChanged(uint,uint)\0"
    "onStreamError(uint,uint,QString)\0"
    "gotLocalHoldState(QDBusPendingCallWatcher*)\0"
    "onLocalHoldStateChanged(uint,uint)\0"
};

const QMetaObject Tp::StreamedMediaChannel::staticMetaObject = {
    { &Channel::staticMetaObject, qt_meta_stringdata_Tp__StreamedMediaChannel,
      qt_meta_data_Tp__StreamedMediaChannel, 0 }
};

const QMetaObject *Tp::StreamedMediaChannel::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::StreamedMediaChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__StreamedMediaChannel))
        return static_cast<void*>(const_cast< StreamedMediaChannel*>(this));
    return Channel::qt_metacast(_clname);
}

int Tp::StreamedMediaChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Channel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: streamAdded((*reinterpret_cast< const Tp::MediaStreamPtr(*)>(_a[1]))); break;
        case 1: streamRemoved((*reinterpret_cast< const Tp::MediaStreamPtr(*)>(_a[1]))); break;
        case 2: streamDirectionChanged((*reinterpret_cast< const Tp::MediaStreamPtr(*)>(_a[1])),(*reinterpret_cast< Tp::MediaStreamDirection(*)>(_a[2])),(*reinterpret_cast< Tp::MediaStreamPendingSend(*)>(_a[3]))); break;
        case 3: streamStateChanged((*reinterpret_cast< const Tp::MediaStreamPtr(*)>(_a[1])),(*reinterpret_cast< Tp::MediaStreamState(*)>(_a[2]))); break;
        case 4: streamError((*reinterpret_cast< const Tp::MediaStreamPtr(*)>(_a[1])),(*reinterpret_cast< Tp::MediaStreamError(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: localHoldStateChanged((*reinterpret_cast< Tp::LocalHoldState(*)>(_a[1])),(*reinterpret_cast< Tp::LocalHoldStateReason(*)>(_a[2]))); break;
        case 6: gotStreams((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 7: onStreamReady((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        case 8: onStreamAdded((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 9: onStreamRemoved((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 10: onStreamDirectionChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 11: onStreamStateChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 12: onStreamError((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 13: gotLocalHoldState((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 14: onLocalHoldStateChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Tp::StreamedMediaChannel::streamAdded(const Tp::MediaStreamPtr & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::StreamedMediaChannel::streamRemoved(const Tp::MediaStreamPtr & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tp::StreamedMediaChannel::streamDirectionChanged(const Tp::MediaStreamPtr & _t1, Tp::MediaStreamDirection _t2, Tp::MediaStreamPendingSend _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tp::StreamedMediaChannel::streamStateChanged(const Tp::MediaStreamPtr & _t1, Tp::MediaStreamState _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Tp::StreamedMediaChannel::streamError(const Tp::MediaStreamPtr & _t1, Tp::MediaStreamError _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Tp::StreamedMediaChannel::localHoldStateChanged(Tp::LocalHoldState _t1, Tp::LocalHoldStateReason _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
