/****************************************************************************
** Meta object code from reading C++ file 'ui_cliente_datos.h'
**
** Created: Fri 30. Nov 13:16:43 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_cliente_datos.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_cliente_datos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_cliente_datos[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      27,   17,   17,   17, 0x08,
      59,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_cliente_datos[] = {
    "ui_cliente_datos\0\0guarde()\0"
    "on_pushButton_Aceptar_clicked()\0"
    "on_pushButton_Cancelar_clicked()\0"
};

void ui_cliente_datos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_cliente_datos *_t = static_cast<ui_cliente_datos *>(_o);
        switch (_id) {
        case 0: _t->guarde(); break;
        case 1: _t->on_pushButton_Aceptar_clicked(); break;
        case 2: _t->on_pushButton_Cancelar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ui_cliente_datos::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_cliente_datos::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_cliente_datos,
      qt_meta_data_ui_cliente_datos, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_cliente_datos::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_cliente_datos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_cliente_datos::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_cliente_datos))
        return static_cast<void*>(const_cast< ui_cliente_datos*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_cliente_datos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ui_cliente_datos::guarde()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE