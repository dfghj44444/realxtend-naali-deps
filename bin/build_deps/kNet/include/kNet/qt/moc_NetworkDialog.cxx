/****************************************************************************
** Meta object code from reading C++ file 'NetworkDialog.h'
**
** Created: Fri 6. May 13:47:50 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "NetworkDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetworkDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_kNet__NetworkDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      35,   30,   20,   20, 0x0a,
      71,   30,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_kNet__NetworkDialog[] = {
    "kNet::NetworkDialog\0\0Update()\0item\0"
    "ItemDoubleClicked(QTreeWidgetItem*)\0"
    "EventItemDoubleClicked(QTreeWidgetItem*)\0"
};

const QMetaObject kNet::NetworkDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_kNet__NetworkDialog,
      qt_meta_data_kNet__NetworkDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &kNet::NetworkDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *kNet::NetworkDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *kNet::NetworkDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_kNet__NetworkDialog))
        return static_cast<void*>(const_cast< NetworkDialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int kNet::NetworkDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: Update(); break;
        case 1: ItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: EventItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
