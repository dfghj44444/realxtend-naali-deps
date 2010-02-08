/****************************************************************************
** Meta object code from reading C++ file 'pending-contacts.h'
**
** Created: Wed 14. Oct 17:40:09 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pending-contacts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__PendingContacts[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      65,   20,   20,   20, 0x08,
     113,   20,   20,   20, 0x08,
     163,   20,   20,   20, 0x08,
     203,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tp__PendingContacts[] = {
    "Tp::PendingContacts\0\0"
    "onAttributesFinished(Tp::PendingOperation*)\0"
    "onRequestHandlesFinished(Tp::PendingOperation*)\0"
    "onReferenceHandlesFinished(Tp::PendingOperation*)\0"
    "onNestedFinished(Tp::PendingOperation*)\0"
    "onInspectHandlesFinished(QDBusPendingCallWatcher*)\0"
};

const QMetaObject Tp::PendingContacts::staticMetaObject = {
    { &PendingOperation::staticMetaObject, qt_meta_stringdata_Tp__PendingContacts,
      qt_meta_data_Tp__PendingContacts, 0 }
};

const QMetaObject *Tp::PendingContacts::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::PendingContacts::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__PendingContacts))
        return static_cast<void*>(const_cast< PendingContacts*>(this));
    return PendingOperation::qt_metacast(_clname);
}

int Tp::PendingContacts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PendingOperation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onAttributesFinished((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        case 1: onRequestHandlesFinished((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        case 2: onReferenceHandlesFinished((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        case 3: onNestedFinished((*reinterpret_cast< Tp::PendingOperation*(*)>(_a[1]))); break;
        case 4: onInspectHandlesFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
