/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../xentype/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "onSearchTextChanged",
    "",
    "searchText",
    "on_actionCopy_triggered",
    "on_actionCut_triggered",
    "on_actionPaste_triggered",
    "on_pushButton_15_clicked",
    "on_pushButton_16_clicked",
    "on_actionUndo_triggered",
    "on_actionRedo_triggered",
    "on_pushButton_9_clicked",
    "on_pushButton_10_clicked",
    "on_pushButton_11_clicked",
    "on_pushButton_12_clicked",
    "on_pushButton_8_clicked",
    "on_pushButton_7_clicked",
    "on_pushButton_6_clicked",
    "on_pushButton_5_clicked",
    "on_pushButton_3_clicked",
    "on_pushButton_4_clicked",
    "on_pushButton_13_clicked",
    "on_pushButton_14_clicked",
    "onNewNoteBtnClicked",
    "onRemoveNoteBtnClicked",
    "on_actionXenType_triggered",
    "onNewNoteCreated",
    "id",
    "onNoteContentChanged",
    "onSelectedNoteChanged",
    "onRemoveNote",
    "onRenameNote",
    "newTitle",
    "on_pushButton_2_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[68];
    char stringdata0[11];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[24];
    char stringdata5[23];
    char stringdata6[25];
    char stringdata7[25];
    char stringdata8[25];
    char stringdata9[24];
    char stringdata10[24];
    char stringdata11[24];
    char stringdata12[25];
    char stringdata13[25];
    char stringdata14[25];
    char stringdata15[24];
    char stringdata16[24];
    char stringdata17[24];
    char stringdata18[24];
    char stringdata19[24];
    char stringdata20[24];
    char stringdata21[25];
    char stringdata22[25];
    char stringdata23[20];
    char stringdata24[23];
    char stringdata25[27];
    char stringdata26[17];
    char stringdata27[3];
    char stringdata28[21];
    char stringdata29[22];
    char stringdata30[13];
    char stringdata31[13];
    char stringdata32[9];
    char stringdata33[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 19),  // "onSearchTextChanged"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 10),  // "searchText"
        QT_MOC_LITERAL(43, 23),  // "on_actionCopy_triggered"
        QT_MOC_LITERAL(67, 22),  // "on_actionCut_triggered"
        QT_MOC_LITERAL(90, 24),  // "on_actionPaste_triggered"
        QT_MOC_LITERAL(115, 24),  // "on_pushButton_15_clicked"
        QT_MOC_LITERAL(140, 24),  // "on_pushButton_16_clicked"
        QT_MOC_LITERAL(165, 23),  // "on_actionUndo_triggered"
        QT_MOC_LITERAL(189, 23),  // "on_actionRedo_triggered"
        QT_MOC_LITERAL(213, 23),  // "on_pushButton_9_clicked"
        QT_MOC_LITERAL(237, 24),  // "on_pushButton_10_clicked"
        QT_MOC_LITERAL(262, 24),  // "on_pushButton_11_clicked"
        QT_MOC_LITERAL(287, 24),  // "on_pushButton_12_clicked"
        QT_MOC_LITERAL(312, 23),  // "on_pushButton_8_clicked"
        QT_MOC_LITERAL(336, 23),  // "on_pushButton_7_clicked"
        QT_MOC_LITERAL(360, 23),  // "on_pushButton_6_clicked"
        QT_MOC_LITERAL(384, 23),  // "on_pushButton_5_clicked"
        QT_MOC_LITERAL(408, 23),  // "on_pushButton_3_clicked"
        QT_MOC_LITERAL(432, 23),  // "on_pushButton_4_clicked"
        QT_MOC_LITERAL(456, 24),  // "on_pushButton_13_clicked"
        QT_MOC_LITERAL(481, 24),  // "on_pushButton_14_clicked"
        QT_MOC_LITERAL(506, 19),  // "onNewNoteBtnClicked"
        QT_MOC_LITERAL(526, 22),  // "onRemoveNoteBtnClicked"
        QT_MOC_LITERAL(549, 26),  // "on_actionXenType_triggered"
        QT_MOC_LITERAL(576, 16),  // "onNewNoteCreated"
        QT_MOC_LITERAL(593, 2),  // "id"
        QT_MOC_LITERAL(596, 20),  // "onNoteContentChanged"
        QT_MOC_LITERAL(617, 21),  // "onSelectedNoteChanged"
        QT_MOC_LITERAL(639, 12),  // "onRemoveNote"
        QT_MOC_LITERAL(652, 12),  // "onRenameNote"
        QT_MOC_LITERAL(665, 8),  // "newTitle"
        QT_MOC_LITERAL(674, 23)   // "on_pushButton_2_clicked"
    },
    "MainWindow",
    "onSearchTextChanged",
    "",
    "searchText",
    "on_actionCopy_triggered",
    "on_actionCut_triggered",
    "on_actionPaste_triggered",
    "on_pushButton_15_clicked",
    "on_pushButton_16_clicked",
    "on_actionUndo_triggered",
    "on_actionRedo_triggered",
    "on_pushButton_9_clicked",
    "on_pushButton_10_clicked",
    "on_pushButton_11_clicked",
    "on_pushButton_12_clicked",
    "on_pushButton_8_clicked",
    "on_pushButton_7_clicked",
    "on_pushButton_6_clicked",
    "on_pushButton_5_clicked",
    "on_pushButton_3_clicked",
    "on_pushButton_4_clicked",
    "on_pushButton_13_clicked",
    "on_pushButton_14_clicked",
    "onNewNoteBtnClicked",
    "onRemoveNoteBtnClicked",
    "on_actionXenType_triggered",
    "onNewNoteCreated",
    "id",
    "onNoteContentChanged",
    "onSelectedNoteChanged",
    "onRemoveNote",
    "onRenameNote",
    "newTitle",
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  188,    2, 0x0a,    1 /* Public */,
       4,    0,  191,    2, 0x08,    3 /* Private */,
       5,    0,  192,    2, 0x08,    4 /* Private */,
       6,    0,  193,    2, 0x08,    5 /* Private */,
       7,    0,  194,    2, 0x08,    6 /* Private */,
       8,    0,  195,    2, 0x08,    7 /* Private */,
       9,    0,  196,    2, 0x08,    8 /* Private */,
      10,    0,  197,    2, 0x08,    9 /* Private */,
      11,    0,  198,    2, 0x08,   10 /* Private */,
      12,    0,  199,    2, 0x08,   11 /* Private */,
      13,    0,  200,    2, 0x08,   12 /* Private */,
      14,    0,  201,    2, 0x08,   13 /* Private */,
      15,    0,  202,    2, 0x08,   14 /* Private */,
      16,    0,  203,    2, 0x08,   15 /* Private */,
      17,    0,  204,    2, 0x08,   16 /* Private */,
      18,    0,  205,    2, 0x08,   17 /* Private */,
      19,    0,  206,    2, 0x08,   18 /* Private */,
      20,    0,  207,    2, 0x08,   19 /* Private */,
      21,    0,  208,    2, 0x08,   20 /* Private */,
      22,    0,  209,    2, 0x08,   21 /* Private */,
      23,    0,  210,    2, 0x08,   22 /* Private */,
      24,    0,  211,    2, 0x08,   23 /* Private */,
      25,    0,  212,    2, 0x08,   24 /* Private */,
      26,    1,  213,    2, 0x08,   25 /* Private */,
      28,    1,  216,    2, 0x08,   27 /* Private */,
      29,    1,  219,    2, 0x08,   29 /* Private */,
      30,    1,  222,    2, 0x08,   31 /* Private */,
      31,    2,  225,    2, 0x08,   33 /* Private */,
      33,    0,  230,    2, 0x08,   36 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   27,   32,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'onSearchTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_actionCopy_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCut_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPaste_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_15_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_16_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionUndo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRedo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_9_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_10_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_11_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_12_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_8_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_7_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_6_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_5_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_13_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_14_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNewNoteBtnClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoveNoteBtnClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionXenType_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNewNoteCreated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onNoteContentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onSelectedNoteChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onRemoveNote'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onRenameNote'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_pushButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSearchTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->on_actionCopy_triggered(); break;
        case 2: _t->on_actionCut_triggered(); break;
        case 3: _t->on_actionPaste_triggered(); break;
        case 4: _t->on_pushButton_15_clicked(); break;
        case 5: _t->on_pushButton_16_clicked(); break;
        case 6: _t->on_actionUndo_triggered(); break;
        case 7: _t->on_actionRedo_triggered(); break;
        case 8: _t->on_pushButton_9_clicked(); break;
        case 9: _t->on_pushButton_10_clicked(); break;
        case 10: _t->on_pushButton_11_clicked(); break;
        case 11: _t->on_pushButton_12_clicked(); break;
        case 12: _t->on_pushButton_8_clicked(); break;
        case 13: _t->on_pushButton_7_clicked(); break;
        case 14: _t->on_pushButton_6_clicked(); break;
        case 15: _t->on_pushButton_5_clicked(); break;
        case 16: _t->on_pushButton_3_clicked(); break;
        case 17: _t->on_pushButton_4_clicked(); break;
        case 18: _t->on_pushButton_13_clicked(); break;
        case 19: _t->on_pushButton_14_clicked(); break;
        case 20: _t->onNewNoteBtnClicked(); break;
        case 21: _t->onRemoveNoteBtnClicked(); break;
        case 22: _t->on_actionXenType_triggered(); break;
        case 23: _t->onNewNoteCreated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 24: _t->onNoteContentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->onSelectedNoteChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->onRemoveNote((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 27: _t->onRenameNote((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 28: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 29;
    }
    return _id;
}
QT_WARNING_POP
