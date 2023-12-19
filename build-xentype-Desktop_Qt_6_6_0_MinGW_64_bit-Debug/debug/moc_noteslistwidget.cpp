/****************************************************************************
** Meta object code from reading C++ file 'noteslistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../xentype/noteslistwidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'noteslistwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSNotesListWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSNotesListWidgetENDCLASS = QtMocHelpers::stringData(
    "NotesListWidget",
    "selectedNoteChanged",
    "",
<<<<<<< HEAD
    "id"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSNotesListWidgetENDCLASS_t {
    uint offsetsAndSizes[8];
=======
    "id",
    "removeNote",
    "renameNote",
    "newTitle"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSNotesListWidgetENDCLASS_t {
    uint offsetsAndSizes[14];
>>>>>>> 37221a0 (Resolve conflicts)
    char stringdata0[16];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[3];
<<<<<<< HEAD
=======
    char stringdata4[11];
    char stringdata5[11];
    char stringdata6[9];
>>>>>>> 37221a0 (Resolve conflicts)
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSNotesListWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSNotesListWidgetENDCLASS_t qt_meta_stringdata_CLASSNotesListWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "NotesListWidget"
        QT_MOC_LITERAL(16, 19),  // "selectedNoteChanged"
        QT_MOC_LITERAL(36, 0),  // ""
<<<<<<< HEAD
        QT_MOC_LITERAL(37, 2)   // "id"
=======
        QT_MOC_LITERAL(37, 2),  // "id"
        QT_MOC_LITERAL(40, 10),  // "removeNote"
        QT_MOC_LITERAL(51, 10),  // "renameNote"
        QT_MOC_LITERAL(62, 8)   // "newTitle"
>>>>>>> 37221a0 (Resolve conflicts)
    },
    "NotesListWidget",
    "selectedNoteChanged",
    "",
<<<<<<< HEAD
    "id"
=======
    "id",
    "removeNote",
    "renameNote",
    "newTitle"
>>>>>>> 37221a0 (Resolve conflicts)
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSNotesListWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
<<<<<<< HEAD
       1,   14, // methods
=======
       3,   14, // methods
>>>>>>> 37221a0 (Resolve conflicts)
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
<<<<<<< HEAD
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
=======
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,
       4,    1,   35,    2, 0x06,    3 /* Public */,
       5,    2,   38,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    6,
>>>>>>> 37221a0 (Resolve conflicts)

       0        // eod
};

Q_CONSTINIT const QMetaObject NotesListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSNotesListWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSNotesListWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSNotesListWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NotesListWidget, std::true_type>,
        // method 'selectedNoteChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
<<<<<<< HEAD
        QtPrivate::TypeAndForceComplete<int, std::false_type>
=======
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'removeNote'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'renameNote'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
>>>>>>> 37221a0 (Resolve conflicts)
    >,
    nullptr
} };

void NotesListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NotesListWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectedNoteChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
<<<<<<< HEAD
=======
        case 1: _t->removeNote((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->renameNote((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
>>>>>>> 37221a0 (Resolve conflicts)
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NotesListWidget::*)(int );
            if (_t _q_method = &NotesListWidget::selectedNoteChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
<<<<<<< HEAD
=======
        {
            using _t = void (NotesListWidget::*)(int );
            if (_t _q_method = &NotesListWidget::removeNote; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NotesListWidget::*)(int , const QString & );
            if (_t _q_method = &NotesListWidget::renameNote; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
>>>>>>> 37221a0 (Resolve conflicts)
    }
}

const QMetaObject *NotesListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NotesListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSNotesListWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NotesListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
<<<<<<< HEAD
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
=======
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
>>>>>>> 37221a0 (Resolve conflicts)
    }
    return _id;
}

// SIGNAL 0
void NotesListWidget::selectedNoteChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
<<<<<<< HEAD
=======

// SIGNAL 1
void NotesListWidget::removeNote(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NotesListWidget::renameNote(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
>>>>>>> 37221a0 (Resolve conflicts)
QT_WARNING_POP
