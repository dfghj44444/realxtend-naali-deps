/****************************************************************************
** Meta object code from reading C++ file 'cli-properties.h'
**
** Created: Mon 7. Dec 18:09:10 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cli-properties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tp__Client__PropertiesInterfaceInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      53,   42,   41,   41, 0x05,
      94,   42,   41,   41, 0x05,

 // slots: signature, parameters, type, tag, flags
     185,   42,  144,   41, 0x0a,
     253,   41,  213,   41, 0x0a,
     290,   42,  270,   41, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tp__Client__PropertiesInterfaceInterface[] = {
    "Tp::Client::PropertiesInterfaceInterface\0"
    "\0properties\0PropertiesChanged(Tp::PropertyValueList)\0"
    "PropertyFlagsChanged(Tp::PropertyFlagsChangeList)\0"
    "QDBusPendingReply<Tp::PropertyValueList>\0"
    "GetProperties(Tp::UIntList)\0"
    "QDBusPendingReply<Tp::PropertySpecList>\0"
    "ListProperties()\0QDBusPendingReply<>\0"
    "SetProperties(Tp::PropertyValueList)\0"
};

const QMetaObject Tp::Client::PropertiesInterfaceInterface::staticMetaObject = {
    { &Tp::AbstractInterface::staticMetaObject, qt_meta_stringdata_Tp__Client__PropertiesInterfaceInterface,
      qt_meta_data_Tp__Client__PropertiesInterfaceInterface, 0 }
};

const QMetaObject *Tp::Client::PropertiesInterfaceInterface::metaObject() const
{
    return &staticMetaObject;
}

void *Tp::Client::PropertiesInterfaceInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tp__Client__PropertiesInterfaceInterface))
        return static_cast<void*>(const_cast< PropertiesInterfaceInterface*>(this));
    typedef Tp::AbstractInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Tp::Client::PropertiesInterfaceInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Tp::AbstractInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: PropertiesChanged((*reinterpret_cast< const Tp::PropertyValueList(*)>(_a[1]))); break;
        case 1: PropertyFlagsChanged((*reinterpret_cast< const Tp::PropertyFlagsChangeList(*)>(_a[1]))); break;
        case 2: { QDBusPendingReply<Tp::PropertyValueList> _r = GetProperties((*reinterpret_cast< const Tp::UIntList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::PropertyValueList>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<Tp::PropertySpecList> _r = ListProperties();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<Tp::PropertySpecList>*>(_a[0]) = _r; }  break;
        case 4: { QDBusPendingReply<> _r = SetProperties((*reinterpret_cast< const Tp::PropertyValueList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Tp::Client::PropertiesInterfaceInterface::PropertiesChanged(const Tp::PropertyValueList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tp::Client::PropertiesInterfaceInterface::PropertyFlagsChanged(const Tp::PropertyFlagsChangeList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
