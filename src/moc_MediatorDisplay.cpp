/****************************************************************************
** Meta object code from reading C++ file 'MediatorDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "MediatorDisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MediatorDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MediatorDisplay_t {
    QByteArrayData data[6];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MediatorDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MediatorDisplay_t qt_meta_stringdata_MediatorDisplay = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MediatorDisplay"
QT_MOC_LITERAL(1, 16, 14), // "syncCurLineNum"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "direction"
QT_MOC_LITERAL(4, 42, 18), // "syncCurScrollValue"
QT_MOC_LITERAL(5, 61, 19) // "syncCurScrollXValue"

    },
    "MediatorDisplay\0syncCurLineNum\0\0"
    "direction\0syncCurScrollValue\0"
    "syncCurScrollXValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MediatorDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       5,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void MediatorDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MediatorDisplay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->syncCurLineNum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->syncCurScrollValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->syncCurScrollXValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MediatorDisplay::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediatorDisplay::syncCurLineNum)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MediatorDisplay::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediatorDisplay::syncCurScrollValue)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MediatorDisplay::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediatorDisplay::syncCurScrollXValue)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MediatorDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MediatorDisplay.data,
    qt_meta_data_MediatorDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MediatorDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MediatorDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MediatorDisplay.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MediatorDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MediatorDisplay::syncCurLineNum(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MediatorDisplay::syncCurScrollValue(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MediatorDisplay::syncCurScrollXValue(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
