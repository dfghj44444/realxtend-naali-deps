/****************************************************************************
** Meta object code from reading C++ file 'pending-ready.h'
**
** Created: Wed 14. Oct 17:40:11 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pending-ready.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__PendingReady[] = {

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

static const char qt_meta_stringdata_Tp__PendingReady[] = {
    "Tp::PendingReady\0"
};

const QMetaObject Tp::PendingReady::staticMetaObject = {
    { &PendingOperation::staticMetaObject, qt_meta_stringdata_Tp__PendingReady,
      qt_meta_data_Tp__PendingReady, 0 }
};

const QMetaObject *Tp::PendingReady::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::PendingReady::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__PendingReady))
        return static_cast<void*>(const_cast< PendingReady*>(this));
    return PendingOperation::qt_metacast(_clname);
}

int Tp::PendingReady::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PendingOperation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE