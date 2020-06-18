/****************************************************************************
** Meta object code from reading C++ file 'calmain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../calmain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_calMain_t {
    QByteArrayData data[12];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_calMain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_calMain_t qt_meta_stringdata_calMain = {
    {
QT_MOC_LITERAL(0, 0, 7), // "calMain"
QT_MOC_LITERAL(1, 8, 9), // "slotInput"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 5), // "input"
QT_MOC_LITERAL(4, 25, 5), // "paraR"
QT_MOC_LITERAL(5, 31, 10), // "slotOutput"
QT_MOC_LITERAL(6, 42, 6), // "output"
QT_MOC_LITERAL(7, 49, 13), // "slotToDisplay"
QT_MOC_LITERAL(8, 63, 16), // "slotDigtalNumber"
QT_MOC_LITERAL(9, 80, 14), // "slotFuncButton"
QT_MOC_LITERAL(10, 95, 17), // "slotOperationsEqu"
QT_MOC_LITERAL(11, 113, 18) // "slotSigalOperation"

    },
    "calMain\0slotInput\0\0input\0paraR\0"
    "slotOutput\0output\0slotToDisplay\0"
    "slotDigtalNumber\0slotFuncButton\0"
    "slotOperationsEqu\0slotSigalOperation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_calMain[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       5,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,
      10,    0,   62,    2, 0x0a /* Public */,
      11,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void calMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        calMain *_t = static_cast<calMain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotInput((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->slotOutput((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->slotToDisplay(); break;
        case 3: _t->slotDigtalNumber(); break;
        case 4: _t->slotFuncButton(); break;
        case 5: _t->slotOperationsEqu(); break;
        case 6: _t->slotSigalOperation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (calMain::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&calMain::slotInput)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (calMain::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&calMain::slotOutput)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject calMain::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_calMain.data,
      qt_meta_data_calMain,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *calMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *calMain::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_calMain.stringdata0))
        return static_cast<void*>(const_cast< calMain*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int calMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void calMain::slotInput(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void calMain::slotOutput(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
