/****************************************************************************
** Meta object code from reading C++ file 'hw02opengl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "hw02opengl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hw02opengl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Hw02opengl_t {
    QByteArrayData data[20];
    char stringdata[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Hw02opengl_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Hw02opengl_t qt_meta_stringdata_Hw02opengl = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 6),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 4),
QT_MOC_LITERAL(4, 24, 8),
QT_MOC_LITERAL(5, 33, 4),
QT_MOC_LITERAL(6, 38, 9),
QT_MOC_LITERAL(7, 48, 3),
QT_MOC_LITERAL(8, 52, 14),
QT_MOC_LITERAL(9, 67, 2),
QT_MOC_LITERAL(10, 70, 9),
QT_MOC_LITERAL(11, 80, 4),
QT_MOC_LITERAL(12, 85, 4),
QT_MOC_LITERAL(13, 90, 1),
QT_MOC_LITERAL(14, 92, 4),
QT_MOC_LITERAL(15, 97, 1),
QT_MOC_LITERAL(16, 99, 4),
QT_MOC_LITERAL(17, 104, 1),
QT_MOC_LITERAL(18, 106, 12),
QT_MOC_LITERAL(19, 119, 5)
    },
    "Hw02opengl\0angles\0\0text\0position\0zoom\0"
    "setShader\0sel\0setPerspective\0on\0"
    "setObject\0type\0setX\0X\0setY\0Y\0setZ\0Z\0"
    "setLightMove\0reset\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Hw02opengl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06,
       4,    1,   72,    2, 0x06,
       5,    1,   75,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    1,   78,    2, 0x0a,
       8,    1,   81,    2, 0x0a,
      10,    1,   84,    2, 0x0a,
      12,    1,   87,    2, 0x0a,
      14,    1,   90,    2, 0x0a,
      16,    1,   93,    2, 0x0a,
      18,    1,   96,    2, 0x0a,
      19,    0,   99,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,

       0        // eod
};

void Hw02opengl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Hw02opengl *_t = static_cast<Hw02opengl *>(_o);
        switch (_id) {
        case 0: _t->angles((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->position((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->zoom((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setShader((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setPerspective((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setObject((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setLightMove((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->reset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Hw02opengl::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Hw02opengl::angles)) {
                *result = 0;
            }
        }
        {
            typedef void (Hw02opengl::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Hw02opengl::position)) {
                *result = 1;
            }
        }
        {
            typedef void (Hw02opengl::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Hw02opengl::zoom)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Hw02opengl::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_Hw02opengl.data,
      qt_meta_data_Hw02opengl,  qt_static_metacall, 0, 0}
};


const QMetaObject *Hw02opengl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Hw02opengl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Hw02opengl.stringdata))
        return static_cast<void*>(const_cast< Hw02opengl*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int Hw02opengl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Hw02opengl::angles(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Hw02opengl::position(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Hw02opengl::zoom(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
