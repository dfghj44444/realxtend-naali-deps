/****************************************************************************
** Meta object code from reading C++ file 'file-transfer-channel.h'
**
** Created: Wed 14. Oct 17:39:49 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'file-transfer-channel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__FileTransferChannel[] = {

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

static const char qt_meta_stringdata_Tp__FileTransferChannel[] = {
    "Tp::FileTransferChannel\0"
};

const QMetaObject Tp::FileTransferChannel::staticMetaObject = {
    { &Channel::staticMetaObject, qt_meta_stringdata_Tp__FileTransferChannel,
      qt_meta_data_Tp__FileTransferChannel, 0 }
};

const QMetaObject *Tp::FileTransferChannel::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::FileTransferChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__FileTransferChannel))
        return static_cast<void*>(const_cast< FileTransferChannel*>(this));
    return Channel::qt_metacast(_clname);
}

int Tp::FileTransferChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Channel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
