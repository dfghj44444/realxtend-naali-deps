/****************************************************************************
** Meta object code from reading C++ file 'contact.h'
**
** Created: Wed 14. Oct 17:40:04 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contact.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__Contact[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x05,
      53,   41,   12,   12, 0x05,
     109,   81,   12,   12, 0x05,
     159,  153,   12,   12, 0x05,
     212,  153,   12,   12, 0x05,
     268,  260,   12,   12, 0x05,
     299,  293,   12,   12, 0x05,
     321,  293,   12,   12, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Contact[] = {
    "Tp::Contact\0\0alias\0aliasChanged(QString)\0"
    "avatarToken\0avatarTokenChanged(QString)\0"
    "status,type,presenceMessage\0"
    "simplePresenceChanged(QString,uint,QString)\0"
    "state\0subscriptionStateChanged(Tp::Contact::PresenceState)\0"
    "publishStateChanged(Tp::Contact::PresenceState)\0"
    "blocked\0blockStatusChanged(bool)\0group\0"
    "addedToGroup(QString)\0removedFromGroup(QString)\0"
};

const QMetaObject Tp::Contact::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tp__Contact,
      qt_meta_data_Tp__Contact, 0 }
};

const QMetaObject *Tp::Contact::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Contact::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Contact))
        return static_cast<void*>(const_cast< Contact*>(this));
    return QObject::qt_metacast(_clname);
}

int Tp::Contact::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: aliasChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: avatarTokenChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: simplePresenceChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: subscriptionStateChanged((*reinterpret_cast< Tp::Contact::PresenceState(*)>(_a[1]))); break;
        case 4: publishStateChanged((*reinterpret_cast< Tp::Contact::PresenceState(*)>(_a[1]))); break;
        case 5: blockStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: addedToGroup((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: removedFromGroup((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Tp::Contact::aliasChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::Contact::avatarTokenChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tp::Contact::simplePresenceChanged(const QString & _t1, uint _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tp::Contact::subscriptionStateChanged(Tp::Contact::PresenceState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Tp::Contact::publishStateChanged(Tp::Contact::PresenceState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Tp::Contact::blockStatusChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Tp::Contact::addedToGroup(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Tp::Contact::removedFromGroup(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
