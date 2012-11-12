#ifndef UI_DATA_CLIENT_H
#define UI_DATA_CLIENT_H

#include "cliente.h"

#include <QWidget>
#include <string>

using namespace std;

namespace Ui {
class UI_DATA_CLIENT;
}

class UI_DATA_CLIENT : public QWidget
{
    Q_OBJECT
    
public:
    explicit UI_DATA_CLIENT(QWidget *parent = 0);
    ~UI_DATA_CLIENT();
    
    //EXTRA METHODS - START

    void setTitleWindow(string title);
    void setCliente(Cliente* cliente);

    //EXTRA METHODS - END

signals:
    void guardar();
private slots:
    void on_pushButton_Cancelar_clicked();
    void on_pushButton_Aceptar_clicked();

private:
    Ui::UI_DATA_CLIENT *ui;

    Cliente* cliente;
};

#endif // UI_DATA_CLIENT_H