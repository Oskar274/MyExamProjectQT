/****************************************************************************
** Meta object code from reading C++ file 'databaseaddboss.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Flexxy/DataBase/DataBaseCommands/databaseaddboss.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'databaseaddboss.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDataBaseAddBossENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDataBaseAddBossENDCLASS = QtMocHelpers::stringData(
    "DataBaseAddBoss",
    "bossDBWindow",
    "",
    "on_BossAddButton_clicked",
    "on_BossCancelButton_clicked",
    "on_checkBox_stateChanged",
    "arg1"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDataBaseAddBossENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[16];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[28];
    char stringdata5[25];
    char stringdata6[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDataBaseAddBossENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDataBaseAddBossENDCLASS_t qt_meta_stringdata_CLASSDataBaseAddBossENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "DataBaseAddBoss"
        QT_MOC_LITERAL(16, 12),  // "bossDBWindow"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 24),  // "on_BossAddButton_clicked"
        QT_MOC_LITERAL(55, 27),  // "on_BossCancelButton_clicked"
        QT_MOC_LITERAL(83, 24),  // "on_checkBox_stateChanged"
        QT_MOC_LITERAL(108, 4)   // "arg1"
    },
    "DataBaseAddBoss",
    "bossDBWindow",
    "",
    "on_BossAddButton_clicked",
    "on_BossCancelButton_clicked",
    "on_checkBox_stateChanged",
    "arg1"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDataBaseAddBossENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    1,   41,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject DataBaseAddBoss::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSDataBaseAddBossENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDataBaseAddBossENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDataBaseAddBossENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DataBaseAddBoss, std::true_type>,
        // method 'bossDBWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_BossAddButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_BossCancelButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBox_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void DataBaseAddBoss::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataBaseAddBoss *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->bossDBWindow(); break;
        case 1: _t->on_BossAddButton_clicked(); break;
        case 2: _t->on_BossCancelButton_clicked(); break;
        case 3: _t->on_checkBox_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataBaseAddBoss::*)();
            if (_t _q_method = &DataBaseAddBoss::bossDBWindow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *DataBaseAddBoss::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataBaseAddBoss::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDataBaseAddBossENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int DataBaseAddBoss::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DataBaseAddBoss::bossDBWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
