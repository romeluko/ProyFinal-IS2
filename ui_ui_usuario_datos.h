/********************************************************************************
** Form generated from reading UI file 'ui_usuario_datos.ui'
**
** Created: Thu Dec 6 20:40:07 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_USUARIO_DATOS_H
#define UI_UI_USUARIO_DATOS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_usuario_datos
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_Aceptar;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_Cancelar;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_25;
    QLineEdit *le_pApellido;
    QLabel *label_29;
    QLabel *label_21;
    QLineEdit *le_sApellido;
    QLineEdit *le_nombre;
    QLabel *label_24;
    QLabel *label_16;
    QLineEdit *le_numDoc;
    QLabel *label_28;
    QDateEdit *de_fechaNac;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_19;
    QLabel *label_22;
    QLabel *label_27;
    QLineEdit *le_telf;
    QLineEdit *le_cell;
    QLabel *label_30;
    QTextEdit *textEdit_2;
    QFrame *line_3;
    QLineEdit *le_Usuario;
    QFrame *line_5;
    QPushButton *pB_cambiarPass;
    QLineEdit *le_direccion;
    QComboBox *cB_tDoc;
    QLabel *label_17;
    QComboBox *cb_sexo;

    void setupUi(QWidget *ui_usuario_datos)
    {
        if (ui_usuario_datos->objectName().isEmpty())
            ui_usuario_datos->setObjectName(QString::fromUtf8("ui_usuario_datos"));
        ui_usuario_datos->resize(1085, 573);
        gridLayout_2 = new QGridLayout(ui_usuario_datos);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        pushButton_Aceptar = new QPushButton(ui_usuario_datos);
        pushButton_Aceptar->setObjectName(QString::fromUtf8("pushButton_Aceptar"));

        gridLayout_3->addWidget(pushButton_Aceptar, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 0, 3, 1, 1);

        pushButton_Cancelar = new QPushButton(ui_usuario_datos);
        pushButton_Cancelar->setObjectName(QString::fromUtf8("pushButton_Cancelar"));

        gridLayout_3->addWidget(pushButton_Cancelar, 0, 2, 1, 1);


        gridLayout->addLayout(gridLayout_3, 2, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(150, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_8, 0, 2, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(150, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_12, 0, 4, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(150, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_11, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(150, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        label_25 = new QLabel(ui_usuario_datos);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_4->addWidget(label_25, 1, 0, 1, 1);

        le_pApellido = new QLineEdit(ui_usuario_datos);
        le_pApellido->setObjectName(QString::fromUtf8("le_pApellido"));

        gridLayout_4->addWidget(le_pApellido, 2, 1, 1, 1);

        label_29 = new QLabel(ui_usuario_datos);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_4->addWidget(label_29, 2, 3, 1, 1);

        label_21 = new QLabel(ui_usuario_datos);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_4->addWidget(label_21, 2, 0, 1, 1);

        le_sApellido = new QLineEdit(ui_usuario_datos);
        le_sApellido->setObjectName(QString::fromUtf8("le_sApellido"));

        gridLayout_4->addWidget(le_sApellido, 2, 4, 1, 1);

        le_nombre = new QLineEdit(ui_usuario_datos);
        le_nombre->setObjectName(QString::fromUtf8("le_nombre"));

        gridLayout_4->addWidget(le_nombre, 1, 1, 1, 4);

        label_24 = new QLabel(ui_usuario_datos);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_4->addWidget(label_24, 3, 0, 1, 1);

        label_16 = new QLabel(ui_usuario_datos);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_4->addWidget(label_16, 3, 3, 1, 1);

        le_numDoc = new QLineEdit(ui_usuario_datos);
        le_numDoc->setObjectName(QString::fromUtf8("le_numDoc"));

        gridLayout_4->addWidget(le_numDoc, 3, 4, 1, 1);

        label_28 = new QLabel(ui_usuario_datos);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_4->addWidget(label_28, 4, 0, 1, 1);

        de_fechaNac = new QDateEdit(ui_usuario_datos);
        de_fechaNac->setObjectName(QString::fromUtf8("de_fechaNac"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(de_fechaNac->sizePolicy().hasHeightForWidth());
        de_fechaNac->setSizePolicy(sizePolicy);
        de_fechaNac->setCalendarPopup(true);

        gridLayout_4->addWidget(de_fechaNac, 4, 1, 1, 1);

        label_2 = new QLabel(ui_usuario_datos);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 8, 0, 1, 1);

        label_3 = new QLabel(ui_usuario_datos);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 8, 3, 1, 1);

        label_19 = new QLabel(ui_usuario_datos);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_4->addWidget(label_19, 5, 0, 1, 1);

        label_22 = new QLabel(ui_usuario_datos);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_4->addWidget(label_22, 7, 0, 1, 1);

        label_27 = new QLabel(ui_usuario_datos);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_4->addWidget(label_27, 7, 3, 1, 1);

        le_telf = new QLineEdit(ui_usuario_datos);
        le_telf->setObjectName(QString::fromUtf8("le_telf"));

        gridLayout_4->addWidget(le_telf, 7, 1, 1, 1);

        le_cell = new QLineEdit(ui_usuario_datos);
        le_cell->setObjectName(QString::fromUtf8("le_cell"));

        gridLayout_4->addWidget(le_cell, 7, 4, 1, 1);

        label_30 = new QLabel(ui_usuario_datos);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_4->addWidget(label_30, 10, 0, 1, 1);

        textEdit_2 = new QTextEdit(ui_usuario_datos);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit_2->sizePolicy().hasHeightForWidth());
        textEdit_2->setSizePolicy(sizePolicy1);
        textEdit_2->setMinimumSize(QSize(0, 50));
        textEdit_2->setMaximumSize(QSize(16777215, 50));

        gridLayout_4->addWidget(textEdit_2, 11, 0, 1, 5);

        line_3 = new QFrame(ui_usuario_datos);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_3, 6, 0, 1, 5);

        le_Usuario = new QLineEdit(ui_usuario_datos);
        le_Usuario->setObjectName(QString::fromUtf8("le_Usuario"));
        le_Usuario->setReadOnly(true);

        gridLayout_4->addWidget(le_Usuario, 8, 1, 1, 1);

        line_5 = new QFrame(ui_usuario_datos);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_5, 9, 0, 1, 5);

        pB_cambiarPass = new QPushButton(ui_usuario_datos);
        pB_cambiarPass->setObjectName(QString::fromUtf8("pB_cambiarPass"));

        gridLayout_4->addWidget(pB_cambiarPass, 8, 4, 1, 1);

        le_direccion = new QLineEdit(ui_usuario_datos);
        le_direccion->setObjectName(QString::fromUtf8("le_direccion"));

        gridLayout_4->addWidget(le_direccion, 5, 1, 1, 4);

        cB_tDoc = new QComboBox(ui_usuario_datos);
        cB_tDoc->setObjectName(QString::fromUtf8("cB_tDoc"));

        gridLayout_4->addWidget(cB_tDoc, 3, 1, 1, 1);

        label_17 = new QLabel(ui_usuario_datos);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_4->addWidget(label_17, 4, 3, 1, 1);

        cb_sexo = new QComboBox(ui_usuario_datos);
        cb_sexo->setObjectName(QString::fromUtf8("cb_sexo"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cb_sexo->sizePolicy().hasHeightForWidth());
        cb_sexo->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(cb_sexo, 4, 4, 1, 1);


        gridLayout->addLayout(gridLayout_4, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(ui_usuario_datos);

        QMetaObject::connectSlotsByName(ui_usuario_datos);
    } // setupUi

    void retranslateUi(QWidget *ui_usuario_datos)
    {
        ui_usuario_datos->setWindowTitle(QApplication::translate("ui_usuario_datos", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_Aceptar->setText(QApplication::translate("ui_usuario_datos", "Guardar", 0, QApplication::UnicodeUTF8));
        pushButton_Aceptar->setShortcut(QApplication::translate("ui_usuario_datos", "Return", 0, QApplication::UnicodeUTF8));
        pushButton_Cancelar->setText(QApplication::translate("ui_usuario_datos", "Cancelar", 0, QApplication::UnicodeUTF8));
        pushButton_Cancelar->setShortcut(QApplication::translate("ui_usuario_datos", "Esc", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("ui_usuario_datos", "Nombres", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("ui_usuario_datos", "Segundo Apellido", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("ui_usuario_datos", "Primer Apellido", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("ui_usuario_datos", "Tipo de Documento", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("ui_usuario_datos", "N\303\272mero de Documento", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("ui_usuario_datos", "Fecha de Nacimiento", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_usuario_datos", "Nombre de Usuario", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_usuario_datos", "Contrase\303\261a", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("ui_usuario_datos", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("ui_usuario_datos", "Tel\303\251fono", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("ui_usuario_datos", "Celular", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("ui_usuario_datos", "Observaciones", 0, QApplication::UnicodeUTF8));
        pB_cambiarPass->setText(QApplication::translate("ui_usuario_datos", "Cambiar Contrase\303\261a", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("ui_usuario_datos", "Sexo", 0, QApplication::UnicodeUTF8));
        cb_sexo->clear();
        cb_sexo->insertItems(0, QStringList()
         << QApplication::translate("ui_usuario_datos", "Masculino", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_usuario_datos", "Femenino", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class ui_usuario_datos: public Ui_ui_usuario_datos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_USUARIO_DATOS_H