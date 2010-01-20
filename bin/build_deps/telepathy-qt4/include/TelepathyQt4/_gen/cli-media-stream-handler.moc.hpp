/****************************************************************************
** Meta object code from reading C++ file 'cli-media-stream-handler.h'
**
** Created: Mon 7. Dec 18:09:11 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cli-media-stream-handler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__Client__MediaStreamHandlerInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   12, // methods
       4,  127, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      64,   41,   40,   40, 0x05,
     128,   40,   40,   40, 0x05,
     148,  136,   40,   40, 0x05,
     215,  179,   40,   40, 0x05,
     272,  255,   40,   40, 0x05,
     339,  332,   40,   40, 0x05,
     396,  388,   40,   40, 0x05,
     427,  419,   40,   40, 0x05,
     456,  450,   40,   40, 0x05,
     483,   40,   40,   40, 0x05,
     509,  504,   40,   40, 0x05,

 // slots: signature, parameters, type, tag, flags
     557,  549,  529,   40, 0x0a,
     593,  575,  529,   40, 0x0a,
     613,   40,  529,   40, 0x0a,
     640,  179,  529,   40, 0x0a,
     680,   41,  529,   40, 0x0a,
     744,  332,  529,   40, 0x0a,
     783,  332,  529,   40, 0x0a,
     837,  831,  529,   40, 0x0a,
     855,  332,  529,   40, 0x0a,
     904,  332,  529,   40, 0x0a,
     951,  504,  529,   40, 0x0a,
     967,   40,  529,   40, 0x0a,

 // properties: name, type, flags
    1007,  983, 0x00095009,
    1024, 1019, 0x01095001,
    1047, 1039, 0x0a095001,
    1085, 1060, 0x00095009,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__MediaStreamHandlerInterface[] = {
    "Tp::Client::MediaStreamHandlerInterface\0"
    "\0candidateID,transports\0"
    "AddRemoteCandidate(QString,Tp::MediaStreamHandlerTransportList)\0"
    "Close()\0candidateID\0RemoveRemoteCandidate(QString)\0"
    "nativeCandidateID,remoteCandidateID\0"
    "SetActiveCandidatePair(QString,QString)\0"
    "remoteCandidates\0"
    "SetRemoteCandidateList(Tp::MediaStreamHandlerCandidateList)\0"
    "codecs\0SetRemoteCodecs(Tp::MediaStreamHandlerCodecList)\0"
    "playing\0SetStreamPlaying(bool)\0sending\0"
    "SetStreamSending(bool)\0event\0"
    "StartTelephonyEvent(uchar)\0"
    "StopTelephonyEvent()\0held\0SetStreamHeld(bool)\0"
    "QDBusPendingReply<>\0codecID\0"
    "CodecChoice(uint)\0errorCode,message\0"
    "Error(uint,QString)\0NativeCandidatesPrepared()\0"
    "NewActiveCandidatePair(QString,QString)\0"
    "NewNativeCandidate(QString,Tp::MediaStreamHandlerTransportList)\0"
    "Ready(Tp::MediaStreamHandlerCodecList)\0"
    "SetLocalCodecs(Tp::MediaStreamHandlerCodecList)\0"
    "state\0StreamState(uint)\0"
    "SupportedCodecs(Tp::MediaStreamHandlerCodecList)\0"
    "CodecsUpdated(Tp::MediaStreamHandlerCodecList)\0"
    "HoldState(bool)\0UnholdFailure()\0"
    "Tp::SocketAddressIPList\0STUNServers\0"
    "bool\0CreatedLocally\0QString\0NATTraversal\0"
    "Tp::StringVariantMapList\0RelayInfo\0"
};

const QMetaObject Tp::Client::MediaStreamHandlerInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__MediaStreamHandlerInterface,
      qt_meta_data_Tp__Client__MediaStreamHandlerInterface, 0 }
};

const QMetaObject *Tp::Client::MediaStreamHandlerInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::MediaStreamHandlerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__MediaStreamHandlerInterface))
        return static_cast<void*>(const_cast< MediaStreamHandlerInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::MediaStreamHandlerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: AddRemoteCandidate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Tp::MediaStreamHandlerTransportList(*)>(_a[2]))); break;
        case 1: Close(); break;
        case 2: RemoveRemoteCandidate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: SetActiveCandidatePair((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: SetRemoteCandidateList((*reinterpret_cast< const Tp::MediaStreamHandlerCandidateList(*)>(_a[1]))); break;
        case 5: SetRemoteCodecs((*reinterpret_cast< const Tp::MediaStreamHandlerCodecList(*)>(_a[1]))); break;
        case 6: SetStreamPlaying((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: SetStreamSending((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: StartTelephonyEvent((*reinterpret_cast< uchar(*)>(_a[1]))); break;
        case 9: StopTelephonyEvent(); break;
        case 10: SetStreamHeld((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: { QDBusPendingReply<> _r = CodecChoice((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 12: { QDBusPendingReply<> _r = Error((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 13: { QDBusPendingReply<> _r = NativeCandidatesPrepared();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 14: { QDBusPendingReply<> _r = NewActiveCandidatePair((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 15: { QDBusPendingReply<> _r = NewNativeCandidate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Tp::MediaStreamHandlerTransportList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 16: { QDBusPendingReply<> _r = Ready((*reinterpret_cast< const Tp::MediaStreamHandlerCodecList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 17: { QDBusPendingReply<> _r = SetLocalCodecs((*reinterpret_cast< const Tp::MediaStreamHandlerCodecList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 18: { QDBusPendingReply<> _r = StreamState((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 19: { QDBusPendingReply<> _r = SupportedCodecs((*reinterpret_cast< const Tp::MediaStreamHandlerCodecList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 20: { QDBusPendingReply<> _r = CodecsUpdated((*reinterpret_cast< const Tp::MediaStreamHandlerCodecList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 21: { QDBusPendingReply<> _r = HoldState((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 22: { QDBusPendingReply<> _r = UnholdFailure();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 23;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Tp::SocketAddressIPList*>(_v) = STUNServers(); break;
        case 1: *reinterpret_cast< bool*>(_v) = CreatedLocally(); break;
        case 2: *reinterpret_cast< QString*>(_v) = NATTraversal(); break;
        case 3: *reinterpret_cast< Tp::StringVariantMapList*>(_v) = RelayInfo(); break;
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
void Tp::Client::MediaStreamHandlerInterface::AddRemoteCandidate(const QString & _t1, const Tp::MediaStreamHandlerTransportList & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::Client::MediaStreamHandlerInterface::Close()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Tp::Client::MediaStreamHandlerInterface::RemoveRemoteCandidate(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tp::Client::MediaStreamHandlerInterface::SetActiveCandidatePair(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Tp::Client::MediaStreamHandlerInterface::SetRemoteCandidateList(const Tp::MediaStreamHandlerCandidateList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Tp::Client::MediaStreamHandlerInterface::SetRemoteCodecs(const Tp::MediaStreamHandlerCodecList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Tp::Client::MediaStreamHandlerInterface::SetStreamPlaying(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Tp::Client::MediaStreamHandlerInterface::SetStreamSending(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Tp::Client::MediaStreamHandlerInterface::StartTelephonyEvent(uchar _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Tp::Client::MediaStreamHandlerInterface::StopTelephonyEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void Tp::Client::MediaStreamHandlerInterface::SetStreamHeld(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
