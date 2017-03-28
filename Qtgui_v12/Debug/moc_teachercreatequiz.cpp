/****************************************************************************
** Meta object code from reading C++ file 'teachercreatequiz.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../teachercreatequiz.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teachercreatequiz.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_teacherCreateQuiz_t {
    QByteArrayData data[9];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_teacherCreateQuiz_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_teacherCreateQuiz_t qt_meta_stringdata_teacherCreateQuiz = {
    {
QT_MOC_LITERAL(0, 0, 17), // "teacherCreateQuiz"
QT_MOC_LITERAL(1, 18, 18), // "on_homeBtn_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 22), // "on_viewquizBtn_clicked"
QT_MOC_LITERAL(4, 61, 24), // "on_createquizBtn_clicked"
QT_MOC_LITERAL(5, 86, 29), // "on_createquiztitleBtn_clicked"
QT_MOC_LITERAL(6, 116, 17), // "on_mcqBtn_clicked"
QT_MOC_LITERAL(7, 134, 16), // "on_tfBtn_clicked"
QT_MOC_LITERAL(8, 151, 16) // "on_saBtn_clicked"

    },
    "teacherCreateQuiz\0on_homeBtn_clicked\0"
    "\0on_viewquizBtn_clicked\0"
    "on_createquizBtn_clicked\0"
    "on_createquiztitleBtn_clicked\0"
    "on_mcqBtn_clicked\0on_tfBtn_clicked\0"
    "on_saBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_teacherCreateQuiz[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void teacherCreateQuiz::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        teacherCreateQuiz *_t = static_cast<teacherCreateQuiz *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_homeBtn_clicked(); break;
        case 1: _t->on_viewquizBtn_clicked(); break;
        case 2: _t->on_createquizBtn_clicked(); break;
        case 3: _t->on_createquiztitleBtn_clicked(); break;
        case 4: _t->on_mcqBtn_clicked(); break;
        case 5: _t->on_tfBtn_clicked(); break;
        case 6: _t->on_saBtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject teacherCreateQuiz::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_teacherCreateQuiz.data,
      qt_meta_data_teacherCreateQuiz,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *teacherCreateQuiz::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *teacherCreateQuiz::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_teacherCreateQuiz.stringdata0))
        return static_cast<void*>(const_cast< teacherCreateQuiz*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int teacherCreateQuiz::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
