/****************************************************************************
** Meta object code from reading C++ file 'ui_producto_agregar_montura.h'
**
** Created: Fri 30. Nov 13:16:57 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_producto_agregar_montura.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_producto_agregar_montura.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_producto_agregar_montura[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x08,
      62,   28,   28,   28, 0x08,
      93,   28,   28,   28, 0x08,
     126,   28,   28,   28, 0x08,
     157,   28,   28,   28, 0x08,
     183,   28,   28,   28, 0x08,
     209,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_producto_agregar_montura[] = {
    "ui_producto_agregar_montura\0\0"
    "on_pushButton_cancelar_clicked()\0"
    "on_pushButton_xmarca_clicked()\0"
    "on_pushButton_xtamanio_clicked()\0"
    "on_pushButton_xforma_clicked()\0"
    "on_pushButton_4_clicked()\0"
    "on_pushButton_8_clicked()\0"
    "on_pushButton_agregar_clicked()\0"
};

void ui_producto_agregar_montura::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_producto_agregar_montura *_t = static_cast<ui_producto_agregar_montura *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_cancelar_clicked(); break;
        case 1: _t->on_pushButton_xmarca_clicked(); break;
        case 2: _t->on_pushButton_xtamanio_clicked(); break;
        case 3: _t->on_pushButton_xforma_clicked(); break;
        case 4: _t->on_pushButton_4_clicked(); break;
        case 5: _t->on_pushButton_8_clicked(); break;
        case 6: _t->on_pushButton_agregar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ui_producto_agregar_montura::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_producto_agregar_montura::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ui_producto_agregar_montura,
      qt_meta_data_ui_producto_agregar_montura, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_producto_agregar_montura::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_producto_agregar_montura::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_producto_agregar_montura::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_producto_agregar_montura))
        return static_cast<void*>(const_cast< ui_producto_agregar_montura*>(this));
    return QDialog::qt_metacast(_clname);
}

int ui_producto_agregar_montura::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE