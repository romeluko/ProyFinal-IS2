#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDialog>
#include <montura.h>
#include "modulousuarios.h"
#include <luna.h>
#include "ui_proveedores.h"
#include "ui_datos_proveedor.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
  delete ui;
  delete ActiveModule;
}

void MainWindow::on_actionProducto_triggered()
{
    ui_producto* produc_fom;
    produc_fom = new ui_producto;
    setCentralWidget(produc_fom);
    //produc_fom->showMaximized();
}

void MainWindow::on_actionUsuario_triggered()
{
    /*UI_USER *USER_FORM;
    USER_FORM = new UI_USER;
    setCentralWidget(USER_FORM);
    USER_FORM->showMaximized();*/
  ActiveModule = new ModuloUsuarios(this);
  this->setCentralWidget(ActiveModule);
  //ActiveModule->showMaximized();
}

void MainWindow::on_actionCliente_triggered()
{
    ui_cliente* cliente_form;
    cliente_form=new ui_cliente;
    setCentralWidget(cliente_form);
}

void MainWindow::on_actionBuscar_triggered()
{
  //QDialog::accept()
    ActiveModule->Buscar();
}

void MainWindow::on_actionTiendas_triggered()
{
    ui_tienda* tienda_form;
    tienda_form=new ui_tienda;
    setCentralWidget(tienda_form);
    //tienda_form->showMaximized();
}

void MainWindow::on_actionEmpresas_triggered()
{
    ui_empresa* empresa_form;
    empresa_form=new ui_empresa;
    setCentralWidget(empresa_form);
    //empresa_form->showMaximized();
}

void MainWindow::on_actionAlmacen_triggered()
{
    ui_almacen* almacen_form;
    almacen_form = new ui_almacen;
    setCentralWidget(almacen_form);
}

void MainWindow::on_actionProveedores_triggered()
{
    /*ui_proveedores*  proveedore_form;
    proveedore_form = new ui_proveedores;
    setCentralWidget(proveedore_form);
    proveedore_form->showMaximized();*/

    ui_datos_proveedor *datos_proveedor_form;
    datos_proveedor_form = new ui_datos_proveedor;
    setCentralWidget(datos_proveedor_form);

}
