/****************************************************************************
** Meta object code from reading C++ file 'pending-handles.h'
**
** Created: Wed 14. Oct 17:40:10 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pending-handles.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__PendingHandles[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      28,   20,   19,   19, 0x08,
      79,   20,   19,   19, 0x08,
     127,   20,   19,   19, 0x08,
     186,   20,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tp__PendingHandles[] = {
    "Tp::PendingHandles\0\0watcher\0"
    "onRequestHandlesFinished(QDBusPendingCallWatcher*)\0"
    "onHoldHandlesFinished(QDBusPendingCallWatcher*)\0"
    "onRequestHandlesFallbackFinished(QDBusPendingCallWatcher*)\0"
    "onHoldHandlesFallbackFinished(QDBusPendingCallWatcher*)\0"
};

const QMetaObject Tp::PendingHandles::staticMetaObject = {
    { &PendingOperation::staticMetaObject, qt_meta_stringdata_Tp__PendingHandles,
      qt_meta_data_Tp__PendingHandles, 0 }
};

const QMetaObject *Tp::PendingHandles::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::PendingHandles::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__PendingHandles))
        return static_cast<void*>(const_cast< PendingHandles*>(this));
    return PendingOperation::qt_metacast(_clname);
}

int Tp::PendingHandles::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PendingOperation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onRequestHandlesFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 1: onHoldHandlesFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 2: onRequestHandlesFallbackFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 3: onHoldHandlesFallbackFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
