/****************************************************************************
** Meta object code from reading C++ file 'productdatabase.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Flexxy/DataBase/productdatabase.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'productdatabase.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSProductDataBaseENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSProductDataBaseENDCLASS = QtMocHelpers::stringData(
    "ProductDataBase",
    "WorkerMenu",
    "",
    "on_ProductAdd_clicked",
    "on_ProductDelete_clicked",
    "on_ProductBackButton_clicked",
    "on_ApplyButton_clicked",
    "on_UpdateButton_clicked",
    "on_ProductTableView_clicked",
    "QModelIndex",
    "index"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSProductDataBaseENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[16];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[25];
    char stringdata5[29];
    char stringdata6[23];
    char stringdata7[24];
    char stringdata8[28];
    char stringdata9[12];
    char stringdata10[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSProductDataBaseENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSProductDataBaseENDCLASS_t qt_meta_stringdata_CLASSProductDataBaseENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "ProductDataBase"
        QT_MOC_LITERAL(16, 10),  // "WorkerMenu"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 21),  // "on_ProductAdd_clicked"
        QT_MOC_LITERAL(50, 24),  // "on_ProductDelete_clicked"
        QT_MOC_LITERAL(75, 28),  // "on_ProductBackButton_clicked"
        QT_MOC_LITERAL(104, 22),  // "on_ApplyButton_clicked"
        QT_MOC_LITERAL(127, 23),  // "on_UpdateButton_clicked"
        QT_MOC_LITERAL(151, 27),  // "on_ProductTableView_clicked"
        QT_MOC_LITERAL(179, 11),  // "QModelIndex"
        QT_MOC_LITERAL(191, 5)   // "index"
    },
    "ProductDataBase",
    "WorkerMenu",
    "",
    "on_ProductAdd_clicked",
    "on_ProductDelete_clicked",
    "on_ProductBackButton_clicked",
    "on_ApplyButton_clicked",
    "on_UpdateButton_clicked",
    "on_ProductTableView_clicked",
    "QModelIndex",
    "index"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSProductDataBaseENDCLASS[] = {

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
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    1,   62,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject ProductDataBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSProductDataBaseENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSProductDataBaseENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSProductDataBaseENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ProductDataBase, std::true_type>,
        // method 'WorkerMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ProductAdd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ProductDelete_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ProductBackButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ApplyButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_UpdateButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ProductTableView_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void ProductDataBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProductDataBase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->WorkerMenu(); break;
        case 1: _t->on_ProductAdd_clicked(); break;
        case 2: _t->on_ProductDelete_clicked(); break;
        case 3: _t->on_ProductBackButton_clicked(); break;
        case 4: _t->on_ApplyButton_clicked(); break;
        case 5: _t->on_UpdateButton_clicked(); break;
        case 6: _t->on_ProductTableView_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProductDataBase::*)();
            if (_t _q_method = &ProductDataBase::WorkerMenu; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *ProductDataBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProductDataBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSProductDataBaseENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ProductDataBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ProductDataBase::WorkerMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
