/****************************************************************************
** Meta object code from reading C++ file 'ventanaconmenues.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PrimerMainWindow/ventanaconmenues.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ventanaconmenues.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VentanaConMenues_t {
    const uint offsetsAndSize[18];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_VentanaConMenues_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_VentanaConMenues_t qt_meta_stringdata_VentanaConMenues = {
    {
QT_MOC_LITERAL(0, 16), // "VentanaConMenues"
QT_MOC_LITERAL(17, 21), // "slot_compararImagenes"
QT_MOC_LITERAL(39, 0), // ""
QT_MOC_LITERAL(40, 18), // "slot_buscarImagen1"
QT_MOC_LITERAL(59, 18), // "slot_buscarImagen2"
QT_MOC_LITERAL(78, 20), // "slot_compararPersona"
QT_MOC_LITERAL(99, 15), // "slot_abrirLogin"
QT_MOC_LITERAL(115, 15), // "slot_modoOscuro"
QT_MOC_LITERAL(131, 14) // "slot_modoClaro"

    },
    "VentanaConMenues\0slot_compararImagenes\0"
    "\0slot_buscarImagen1\0slot_buscarImagen2\0"
    "slot_compararPersona\0slot_abrirLogin\0"
    "slot_modoOscuro\0slot_modoClaro"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VentanaConMenues[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

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

void VentanaConMenues::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VentanaConMenues *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slot_compararImagenes(); break;
        case 1: _t->slot_buscarImagen1(); break;
        case 2: _t->slot_buscarImagen2(); break;
        case 3: _t->slot_compararPersona(); break;
        case 4: _t->slot_abrirLogin(); break;
        case 5: _t->slot_modoOscuro(); break;
        case 6: _t->slot_modoClaro(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject VentanaConMenues::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_VentanaConMenues.offsetsAndSize,
    qt_meta_data_VentanaConMenues,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_VentanaConMenues_t
, QtPrivate::TypeAndForceComplete<VentanaConMenues, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *VentanaConMenues::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VentanaConMenues::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VentanaConMenues.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int VentanaConMenues::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
