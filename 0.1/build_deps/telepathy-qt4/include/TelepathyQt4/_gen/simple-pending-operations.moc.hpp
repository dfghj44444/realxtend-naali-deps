/****************************************************************************
** Meta object code from reading C++ file 'simple-pending-operations.h'
**
** Created: Wed 14. Oct 17:40:10 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simple-pending-operations.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__PendingSuccess[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

       0        // eod
};

static const char qt_meta_stringdata_Tp__PendingSuccess[] = {
    "Tp::PendingSuccess\0"
};

const QMetaObject Tp::PendingSuccess::staticMetaObject = {
    { &PendingOperation::staticMetaObject, qt_meta_stringdata_Tp__PendingSuccess,
      qt_meta_data_Tp__PendingSuccess, 0 }
};

const QMetaObject *Tp::PendingSuccess::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::PendingSuccess::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__PendingSuccess))
        return static_cast<void*>(const_cast< PendingSuccess*>(this));
    return PendingOperation::qt_metacast(_clname);
}

int Tp::PendingSuccess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PendingOperation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Tp__PendingFailure[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

       0        // eod
};

static const char qt_meta_stringdata_Tp__PendingFailure[] = {
    "Tp::PendingFailure\0"
};

const QMetaObject Tp::PendingFailure::staticMetaObject = {
    { &PendingOperation::staticMetaObject, qt_meta_stringdata_Tp__PendingFailure,
      qt_meta_data_Tp__PendingFailure, 0 }
};

const QMetaObject *Tp::PendingFailure::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::PendingFailure::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__PendingFailure))
        return static_cast<void*>(const_cast< PendingFailure*>(this));
    return PendingOperation::qt_metacast(_clname);
}

int Tp::PendingFailure::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PendingOperation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Tp__PendingVoidMethodCall[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tp__PendingVoidMethodCall[] = {
    "Tp::PendingVoidMethodCall\0\0"
    "watcherFinished(QDBusPendingCallWatcher*)\0"
};

const QMetaObject Tp::PendingVoidMethodCall::staticMetaObject = {
    { &PendingOperation::staticMetaObject, qt_meta_stringdata_Tp__PendingVoidMethodCall,
      qt_meta_data_Tp__PendingVoidMethodCall, 0 }
};

const QMetaObject *Tp::PendingVoidMethodCall::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::PendingVoidMethodCall::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__PendingVoidMethodCall))
        return static_cast<void*>(const_cast< PendingVoidMethodCall*>(this));
    return PendingOperation::qt_metacast(_clname);
}

int Tp::PendingVoidMethodCall::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PendingOperation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: watcherFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
