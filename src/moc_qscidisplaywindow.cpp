/****************************************************************************
** Meta object code from reading C++ file 'qscidisplaywindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qscidisplaywindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscidisplaywindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QsciDisplayWindow_t {
    QByteArrayData data[15];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QsciDisplayWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QsciDisplayWindow_t qt_meta_stringdata_QsciDisplayWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QsciDisplayWindow"
QT_MOC_LITERAL(1, 18, 9), // "delayWork"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "sign_find"
QT_MOC_LITERAL(4, 39, 1), // "v"
QT_MOC_LITERAL(5, 41, 15), // "sign_saveAsFile"
QT_MOC_LITERAL(6, 57, 14), // "slot_delayWork"
QT_MOC_LITERAL(7, 72, 23), // "slot_showFileInExplorer"
QT_MOC_LITERAL(8, 96, 23), // "slot_scrollYValueChange"
QT_MOC_LITERAL(9, 120, 5), // "value"
QT_MOC_LITERAL(10, 126, 23), // "slot_scrollXValueChange"
QT_MOC_LITERAL(11, 150, 13), // "slot_findText"
QT_MOC_LITERAL(12, 164, 21), // "slot_FindTextWithPara"
QT_MOC_LITERAL(13, 186, 10), // "prevOrNext"
QT_MOC_LITERAL(14, 197, 4) // "text"

    },
    "QsciDisplayWindow\0delayWork\0\0sign_find\0"
    "v\0sign_saveAsFile\0slot_delayWork\0"
    "slot_showFileInExplorer\0slot_scrollYValueChange\0"
    "value\0slot_scrollXValueChange\0"
    "slot_findText\0slot_FindTextWithPara\0"
    "prevOrNext\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QsciDisplayWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    1,   65,    2, 0x06 /* Public */,
       3,    0,   68,    2, 0x26 /* Public | MethodCloned */,
       5,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   70,    2, 0x08 /* Private */,
       7,    0,   71,    2, 0x0a /* Public */,
       8,    1,   72,    2, 0x0a /* Public */,
      10,    1,   75,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    2,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   13,   14,

       0        // eod
};

void QsciDisplayWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QsciDisplayWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->delayWork(); break;
        case 1: _t->sign_find((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->sign_find(); break;
        case 3: _t->sign_saveAsFile(); break;
        case 4: _t->slot_delayWork(); break;
        case 5: _t->slot_showFileInExplorer(); break;
        case 6: _t->slot_scrollYValueChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slot_scrollXValueChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->slot_findText(); break;
        case 9: _t->slot_FindTextWithPara((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QsciDisplayWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QsciDisplayWindow::delayWork)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QsciDisplayWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QsciDisplayWindow::sign_find)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QsciDisplayWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QsciDisplayWindow::sign_saveAsFile)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QsciDisplayWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QsciScintilla::staticMetaObject>(),
    qt_meta_stringdata_QsciDisplayWindow.data,
    qt_meta_data_QsciDisplayWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QsciDisplayWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QsciDisplayWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QsciDisplayWindow.stringdata0))
        return static_cast<void*>(this);
    return QsciScintilla::qt_metacast(_clname);
}

int QsciDisplayWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QsciScintilla::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QsciDisplayWindow::delayWork()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QsciDisplayWindow::sign_find(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void QsciDisplayWindow::sign_saveAsFile()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
