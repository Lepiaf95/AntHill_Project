/****************************************************************************
** Meta object code from reading C++ file 'ennemy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AntHill/ennemy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ennemy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Ennemy_t {
    QByteArrayData data[6];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Ennemy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Ennemy_t qt_meta_stringdata_Ennemy = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Ennemy"
QT_MOC_LITERAL(1, 7, 8), // "moveNord"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 7), // "moveSud"
QT_MOC_LITERAL(4, 25, 9), // "moveOuest"
QT_MOC_LITERAL(5, 35, 7) // "moveEst"

    },
    "Ennemy\0moveNord\0\0moveSud\0moveOuest\0"
    "moveEst"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ennemy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Ennemy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Ennemy *_t = static_cast<Ennemy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->moveNord(); break;
        case 1: _t->moveSud(); break;
        case 2: _t->moveOuest(); break;
        case 3: _t->moveEst(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Ennemy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Ennemy.data,
      qt_meta_data_Ennemy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Ennemy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ennemy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Ennemy.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Element"))
        return static_cast< Element*>(this);
    return QObject::qt_metacast(_clname);
}

int Ennemy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_Legionnaire_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Legionnaire_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Legionnaire_t qt_meta_stringdata_Legionnaire = {
    {
QT_MOC_LITERAL(0, 0, 11) // "Legionnaire"

    },
    "Legionnaire"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Legionnaire[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Legionnaire::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Legionnaire::staticMetaObject = {
    { &Ennemy::staticMetaObject, qt_meta_stringdata_Legionnaire.data,
      qt_meta_data_Legionnaire,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Legionnaire::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Legionnaire::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Legionnaire.stringdata0))
        return static_cast<void*>(this);
    return Ennemy::qt_metacast(_clname);
}

int Legionnaire::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Ennemy::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Decurion_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Decurion_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Decurion_t qt_meta_stringdata_Decurion = {
    {
QT_MOC_LITERAL(0, 0, 8) // "Decurion"

    },
    "Decurion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Decurion[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Decurion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Decurion::staticMetaObject = {
    { &Ennemy::staticMetaObject, qt_meta_stringdata_Decurion.data,
      qt_meta_data_Decurion,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Decurion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Decurion::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Decurion.stringdata0))
        return static_cast<void*>(this);
    return Ennemy::qt_metacast(_clname);
}

int Decurion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Ennemy::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Centurion_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Centurion_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Centurion_t qt_meta_stringdata_Centurion = {
    {
QT_MOC_LITERAL(0, 0, 9) // "Centurion"

    },
    "Centurion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Centurion[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Centurion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Centurion::staticMetaObject = {
    { &Ennemy::staticMetaObject, qt_meta_stringdata_Centurion.data,
      qt_meta_data_Centurion,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Centurion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Centurion::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Centurion.stringdata0))
        return static_cast<void*>(this);
    return Ennemy::qt_metacast(_clname);
}

int Centurion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Ennemy::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Cesar_t {
    QByteArrayData data[1];
    char stringdata0[6];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cesar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cesar_t qt_meta_stringdata_Cesar = {
    {
QT_MOC_LITERAL(0, 0, 5) // "Cesar"

    },
    "Cesar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cesar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Cesar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Cesar::staticMetaObject = {
    { &Ennemy::staticMetaObject, qt_meta_stringdata_Cesar.data,
      qt_meta_data_Cesar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cesar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cesar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cesar.stringdata0))
        return static_cast<void*>(this);
    return Ennemy::qt_metacast(_clname);
}

int Cesar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Ennemy::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
