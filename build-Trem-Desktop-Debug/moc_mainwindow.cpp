/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Código QT5 Ubuntu - Trem/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[11];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "updateInterface"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "joinRail"
QT_MOC_LITERAL(4, 37, 7), // "outRail"
QT_MOC_LITERAL(5, 45, 32), // "on_horizontalSlider_valueChanged"
QT_MOC_LITERAL(6, 78, 5), // "value"
QT_MOC_LITERAL(7, 84, 34), // "on_horizontalSlider_2_valueCh..."
QT_MOC_LITERAL(8, 119, 34), // "on_horizontalSlider_3_valueCh..."
QT_MOC_LITERAL(9, 154, 34), // "on_horizontalSlider_4_valueCh..."
QT_MOC_LITERAL(10, 189, 34) // "on_horizontalSlider_5_valueCh..."

    },
    "MainWindow\0updateInterface\0\0joinRail\0"
    "outRail\0on_horizontalSlider_valueChanged\0"
    "value\0on_horizontalSlider_2_valueChanged\0"
    "on_horizontalSlider_3_valueChanged\0"
    "on_horizontalSlider_4_valueChanged\0"
    "on_horizontalSlider_5_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   54,    2, 0x0a /* Public */,
       3,    2,   61,    2, 0x0a /* Public */,
       4,    1,   66,    2, 0x0a /* Public */,
       5,    1,   69,    2, 0x08 /* Private */,
       7,    1,   72,    2, 0x08 /* Private */,
       8,    1,   75,    2, 0x08 /* Private */,
       9,    1,   78,    2, 0x08 /* Private */,
      10,    1,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateInterface((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->joinRail((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->outRail((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_horizontalSlider_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_horizontalSlider_3_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_horizontalSlider_4_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_horizontalSlider_5_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
