/****************************************************************************
** Meta object code from reading C++ file 'workerdatabase.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Flexxy/DataBase/workerdatabase.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'workerdatabase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSWorkerDataBaseENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSWorkerDataBaseENDCLASS = QtMocHelpers::stringData(
    "WorkerDataBase",
    "ManagerMenu",
    "",
    "on_WorkerAddButton_clicked",
    "on_WorkerBackButton_clicked",
    "on_WorkerDBTableView_clicked",
    "QModelIndex",
    "index",
    "on_pushButton_clicked",
    "on_WorkerDeleteButton_2_clicked",
    "on_pushButton_2_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWorkerDataBaseENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[15];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[28];
    char stringdata5[29];
    char stringdata6[12];
    char stringdata7[6];
    char stringdata8[22];
    char stringdata9[32];
    char stringdata10[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSWorkerDataBaseENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSWorkerDataBaseENDCLASS_t qt_meta_stringdata_CLASSWorkerDataBaseENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "WorkerDataBase"
        QT_MOC_LITERAL(15, 11),  // "ManagerMenu"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 26),  // "on_WorkerAddButton_clicked"
        QT_MOC_LITERAL(55, 27),  // "on_WorkerBackButton_clicked"
        QT_MOC_LITERAL(83, 28),  // "on_WorkerDBTableView_clicked"
        QT_MOC_LITERAL(112, 11),  // "QModelIndex"
        QT_MOC_LITERAL(124, 5),  // "index"
        QT_MOC_LITERAL(130, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(152, 31),  // "on_WorkerDeleteButton_2_clicked"
        QT_MOC_LITERAL(184, 23)   // "on_pushButton_2_clicked"
    },
    "WorkerDataBase",
    "ManagerMenu",
    "",
    "on_WorkerAddButton_clicked",
    "on_WorkerBackButton_clicked",
    "on_WorkerDBTableView_clicked",
    "QModelIndex",
    "index",
    "on_pushButton_clicked",
    "on_WorkerDeleteButton_2_clicked",
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWorkerDataBaseENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    1,   59,    2, 0x08,    4 /* Private */,
       8,    0,   62,    2, 0x08,    6 /* Private */,
       9,    0,   63,    2, 0x08,    7 /* Private */,
      10,    0,   64,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject WorkerDataBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSWorkerDataBaseENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWorkerDataBaseENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWorkerDataBaseENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WorkerDataBase, std::true_type>,
        // method 'ManagerMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_WorkerAddButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_WorkerBackButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_WorkerDBTableView_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_WorkerDeleteButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void WorkerDataBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WorkerDataBase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ManagerMenu(); break;
        case 1: _t->on_WorkerAddButton_clicked(); break;
        case 2: _t->on_WorkerBackButton_clicked(); break;
        case 3: _t->on_WorkerDBTableView_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_WorkerDeleteButton_2_clicked(); break;
        case 6: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WorkerDataBase::*)();
            if (_t _q_method = &WorkerDataBase::ManagerMenu; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *WorkerDataBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorkerDataBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWorkerDataBaseENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int WorkerDataBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void WorkerDataBase::ManagerMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
