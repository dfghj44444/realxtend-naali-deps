/****************************************************************************
** Meta object code from reading C++ file 'text-channel.h'
**
** Created: Wed 14. Oct 17:39:59 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'text-channel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__PendingSendMessage[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x08,
      61,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tp__PendingSendMessage[] = {
    "Tp::PendingSendMessage\0\0"
    "onTextSent(QDBusPendingCallWatcher*)\0"
    "onMessageSent(QDBusPendingCallWatcher*)\0"
};

const QMetaObject Tp::PendingSendMessage::staticMetaObject = {
    { &PendingOperation::staticMetaObject, qt_meta_stringdata_Tp__PendingSendMessage,
      qt_meta_data_Tp__PendingSendMessage, 0 }
};

const QMetaObject *Tp::PendingSendMessage::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::PendingSendMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__PendingSendMessage))
        return static_cast<void*>(const_cast< PendingSendMessage*>(this));
    return PendingOperation::qt_metacast(_clname);
}

int Tp::PendingSendMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PendingOperation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onTextSent((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 1: onMessageSent((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_Tp__TextChannel[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      48,   17,   16,   16, 0x05,
     113,  105,   16,   16, 0x05,
     150,  105,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     202,  193,   16,   16, 0x0a,
     238,  193,   16,   16, 0x0a,
     299,  289,  269,   16, 0x0a,
     341,  336,  269,   16, 0x2a,
     361,  355,  269,   16, 0x0a,
     418,  401,  383,   16, 0x0a,
     469,  460,  383,   16, 0x2a,
     503,   16,   16,   16, 0x08,
     545,   16,   16,   16, 0x08,
     608,  605,   16,   16, 0x08,
     656,   16,   16,   16, 0x08,
     695,   16,   16,   16, 0x08,
     734,  605,   16,   16, 0x08,
     770,  764,   16,   16, 0x08,
     823,  819,   16,   16, 0x08,
     863,   16,   16,   16, 0x08,
     903,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tp__TextChannel[] = {
    "Tp::TextChannel\0\0message,flags,sentMessageToken\0"
    "messageSent(Tp::Message,Tp::MessageSendingFlags,QString)\0"
    "message\0messageReceived(Tp::ReceivedMessage)\0"
    "pendingMessageRemoved(Tp::ReceivedMessage)\0"
    "messages\0acknowledge(QList<ReceivedMessage>)\0"
    "forget(QList<ReceivedMessage>)\0"
    "PendingSendMessage*\0text,type\0"
    "send(QString,ChannelTextMessageType)\0"
    "text\0send(QString)\0parts\0send(MessagePartList)\0"
    "PendingOperation*\0contacts,message\0"
    "inviteContacts(QList<ContactPtr>,QString)\0"
    "contacts\0inviteContacts(QList<ContactPtr>)\0"
    "onContactsFinished(Tp::PendingOperation*)\0"
    "onAcknowledgePendingMessagesReply(QDBusPendingCallWatcher*)\0"
    ",,\0onMessageSent(Tp::MessagePartList,uint,QString)\0"
    "onMessageReceived(Tp::MessagePartList)\0"
    "onPendingMessagesRemoved(Tp::UIntList)\0"
    "onTextSent(uint,uint,QString)\0,,,,,\0"
    "onTextReceived(uint,uint,uint,uint,uint,QString)\0"
    ",,,\0onTextSendError(uint,uint,uint,QString)\0"
    "gotProperties(QDBusPendingCallWatcher*)\0"
    "gotPendingMessages(QDBusPendingCallWatcher*)\0"
};

const QMetaObject Tp::TextChannel::staticMetaObject = {
    { &Channel::staticMetaObject, qt_meta_stringdata_Tp__TextChannel,
      qt_meta_data_Tp__TextChannel, 0 }
};

const QMetaObject *Tp::TextChannel::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::TextChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__TextChannel))
        return static_cast<void*>(const_cast< TextChannel*>(this));
    return Channel::qt_metacast(_clname);
}

int Tp::TextChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Channel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: messageSent((*reinterpret_cast< const Tp::Message(*)>(_a[1])),(*reinterpret_cast< Tp::MessageSendingFlags(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: messageReceived((*reinterpret_cast< const Tp::ReceivedMessage(*)>(_a[1]))); break;
        case 2: pendingMessageRemoved((*reinterpret_cast< const Tp::ReceivedMessage(*)>(_a[1]))); break;
        case 3: acknowledge((*reinterpret_cast< const QList<ReceivedMessage>(*)>(_a[1]))); break;
        case 4: forget((*reinterpret_cast< const QList<ReceivedMessage>(*)>(_a[1]))); break;
        case 5: { PendingSendMessage* _r = send((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< ChannelTextMessageType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< PendingSendMessage**>(_a[0]) = _r; }  break;
        case 6: { PendingSendMessage* _r = send((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< PendingSendMessage**>(_a[0]) = _r; }  break;
        case 7: { PendingSendMessage* _r = send((*reinterpret_cast< const MessagePartList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< PendingSendMessage**>(_a[0]) = _r; }  break;
        case 8: { PendingOperation* _r = inviteContacts((*reinterpret_cast< const QList<ContactPtr>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< PendingOperation**>(_a[0]) = _r; }  break;
        case 9: { PendingOperation* _r = inviteContacts((*reinterpret_cast< const QList<ContactPtr>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< PendingOperation**>(_a[0]) = _r; }  break;
        case 10: onContactsFinished((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        case 11: onAcknowledgePendingMessagesReply((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 12: onMessageSent((*reinterpret_cast< const Tp::MessagePartList(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 13: onMessageReceived((*reinterpret_cast< const Tp::MessagePartList(*)>(_a[1]))); break;
        case 14: onPendingMessagesRemoved((*reinterpret_cast< const Tp::UIntList(*)>(_a[1]))); break;
        case 15: onTextSent((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 16: onTextReceived((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        case 17: onTextSendError((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 18: gotProperties((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 19: gotPendingMessages((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void Tp::TextChannel::messageSent(const Tp::Message & _t1, Tp::MessageSendingFlags _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::TextChannel::messageReceived(const Tp::ReceivedMessage & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tp::TextChannel::pendingMessageRemoved(const Tp::ReceivedMessage & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
