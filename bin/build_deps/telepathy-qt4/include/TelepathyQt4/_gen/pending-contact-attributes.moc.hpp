/****************************************************************************
** Meta object code from reading C++ file 'pending-contact-attributes.h'
**
** Created: Wed 14. Oct 17:40:08 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pending-contact-attributes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__PendingContactAttributes[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      38,   30,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tp__PendingContactAttributes[] = {
    "Tp::PendingContactAttributes\0\0watcher\0"
    "onCallFinished(QDBusPendingCallWatcher*)\0"
};

const QMetaObject Tp::PendingContactAttributes::staticMetaObject = {
    { &PendingOperation::staticMetaObject, qt_meta_stringdata_Tp__PendingContactAttributes,
      qt_meta_data_Tp__PendingContactAttributes, 0 }
};

const QMetaObject *Tp::PendingContactAttributes::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::PendingContactAttributes::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__PendingContactAttributes))
        return static_cast<void*>(const_cast< PendingContactAttributes*>(this));
    return PendingOperation::qt_metacast(_clname);
}

int Tp::PendingContactAttributes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PendingOperation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onCallFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE