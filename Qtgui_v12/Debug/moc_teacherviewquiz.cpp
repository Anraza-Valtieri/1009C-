/****************************************************************************
** Meta object code from reading C++ file 'teacherviewquiz.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../teacherviewquiz.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teacherviewquiz.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_teacherViewQuiz_t {
    QByteArrayData data[8];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_teacherViewQuiz_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_teacherViewQuiz_t qt_meta_stringdata_teacherViewQuiz = {
    {
QT_MOC_LITERAL(0, 0, 15), // "teacherViewQuiz"
QT_MOC_LITERAL(1, 16, 18), // "on_homeBtn_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 22), // "on_viewquizBtn_clicked"
QT_MOC_LITERAL(4, 59, 24), // "on_createquizBtn_clicked"
QT_MOC_LITERAL(5, 84, 25), // "on_cherviewquiz_activated"
QT_MOC_LITERAL(6, 110, 5), // "index"
QT_MOC_LITERAL(7, 116, 29) // "on_cherviewquiz_doubleClicked"

    },
    "teacherViewQuiz\0on_homeBtn_clicked\0\0"
    "on_viewquizBtn_clicked\0on_createquizBtn_clicked\0"
    "on_cherviewquiz_activated\0index\0"
    "on_cherviewquiz_doubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_teacherViewQuiz[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void, QMetaType::QModelIndex,    6,

       0        // eod
};

void teacherViewQuiz::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        teacherViewQuiz *_t = static_cast<teacherViewQuiz *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_homeBtn_clicked(); break;
        case 1: _t->on_viewquizBtn_clicked(); break;
        case 2: _t->on_createquizBtn_clicked(); break;
        case 3: _t->on_cherviewquiz_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_cherviewquiz_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject teacherViewQuiz::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_teacherViewQuiz.data,
      qt_meta_data_teacherViewQuiz,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *teacherViewQuiz::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *teacherViewQuiz::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_teacherViewQuiz.stringdata0))
        return static_cast<void*>(const_cast< teacherViewQuiz*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int teacherViewQuiz::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
