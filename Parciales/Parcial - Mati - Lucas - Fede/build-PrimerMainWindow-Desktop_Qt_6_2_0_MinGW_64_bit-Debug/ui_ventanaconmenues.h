/********************************************************************************
** Form generated from reading UI file 'ventanaconmenues.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANACONMENUES_H
#define UI_VENTANACONMENUES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaConMenues
{
public:
    QAction *actionNuevo;
    QAction *actionAbrir;
    QAction *actionGuardar;
    QAction *actionGuardar_como;
    QAction *actionCerrar;
    QAction *actionImprimir;
    QAction *actionCopiar;
    QAction *actionPegar;
    QAction *actionCortar;
    QAction *actionHerramientas;
    QAction *actionConfiguraci_n;
    QAction *actionAcerca_de;
    QAction *actionIntercambiar_Modo;
    QAction *actionOscuro;
    QAction *actionClaro;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QPushButton *pbAbrir;
    QLabel *label_2;
    QGroupBox *groupBox;
    QLineEdit *leImagen1;
    QPushButton *pbComparar;
    QPushButton *pbImagen1;
    QPushButton *pbImagen2;
    QLineEdit *leImagen2;
    QLabel *label_7;
    QGroupBox *groupBox_2;
    QPushButton *pbValidar;
    QLineEdit *leUsuarioP2;
    QLineEdit *leUsuarioP1;
    QLineEdit *leApellidoP2;
    QLineEdit *leEdadP1;
    QLineEdit *leApellidoP1;
    QLineEdit *leEdadP2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuEdici_n;
    QMenu *menuOpciones;
    QMenu *menuAyuda;
    QMenu *menuModo;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *VentanaConMenues)
    {
        if (VentanaConMenues->objectName().isEmpty())
            VentanaConMenues->setObjectName(QString::fromUtf8("VentanaConMenues"));
        VentanaConMenues->resize(1080, 360);
        VentanaConMenues->setMinimumSize(QSize(1080, 360));
        VentanaConMenues->setMaximumSize(QSize(1080, 360));
        actionNuevo = new QAction(VentanaConMenues);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/recursos/nuevo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNuevo->setIcon(icon);
        actionAbrir = new QAction(VentanaConMenues);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        actionGuardar = new QAction(VentanaConMenues);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/recursos/guardar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar->setIcon(icon1);
        actionGuardar_como = new QAction(VentanaConMenues);
        actionGuardar_como->setObjectName(QString::fromUtf8("actionGuardar_como"));
        actionCerrar = new QAction(VentanaConMenues);
        actionCerrar->setObjectName(QString::fromUtf8("actionCerrar"));
        actionImprimir = new QAction(VentanaConMenues);
        actionImprimir->setObjectName(QString::fromUtf8("actionImprimir"));
        actionCopiar = new QAction(VentanaConMenues);
        actionCopiar->setObjectName(QString::fromUtf8("actionCopiar"));
        actionPegar = new QAction(VentanaConMenues);
        actionPegar->setObjectName(QString::fromUtf8("actionPegar"));
        actionCortar = new QAction(VentanaConMenues);
        actionCortar->setObjectName(QString::fromUtf8("actionCortar"));
        actionHerramientas = new QAction(VentanaConMenues);
        actionHerramientas->setObjectName(QString::fromUtf8("actionHerramientas"));
        actionConfiguraci_n = new QAction(VentanaConMenues);
        actionConfiguraci_n->setObjectName(QString::fromUtf8("actionConfiguraci_n"));
        actionAcerca_de = new QAction(VentanaConMenues);
        actionAcerca_de->setObjectName(QString::fromUtf8("actionAcerca_de"));
        actionIntercambiar_Modo = new QAction(VentanaConMenues);
        actionIntercambiar_Modo->setObjectName(QString::fromUtf8("actionIntercambiar_Modo"));
        actionOscuro = new QAction(VentanaConMenues);
        actionOscuro->setObjectName(QString::fromUtf8("actionOscuro"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/recursos/modo-claro.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOscuro->setIcon(icon2);
        actionClaro = new QAction(VentanaConMenues);
        actionClaro->setObjectName(QString::fromUtf8("actionClaro"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/recursos/modo-oscuro.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClaro->setIcon(icon3);
        centralwidget = new QWidget(VentanaConMenues);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        pbAbrir = new QPushButton(groupBox_3);
        pbAbrir->setObjectName(QString::fromUtf8("pbAbrir"));
        pbAbrir->setGeometry(QRect(130, 140, 80, 21));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 100, 211, 21));

        gridLayout->addWidget(groupBox_3, 0, 3, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        leImagen1 = new QLineEdit(groupBox);
        leImagen1->setObjectName(QString::fromUtf8("leImagen1"));
        leImagen1->setGeometry(QRect(30, 80, 113, 21));
        leImagen1->setReadOnly(true);
        pbComparar = new QPushButton(groupBox);
        pbComparar->setObjectName(QString::fromUtf8("pbComparar"));
        pbComparar->setEnabled(false);
        pbComparar->setGeometry(QRect(130, 190, 80, 21));
        pbImagen1 = new QPushButton(groupBox);
        pbImagen1->setObjectName(QString::fromUtf8("pbImagen1"));
        pbImagen1->setGeometry(QRect(40, 130, 91, 21));
        pbImagen2 = new QPushButton(groupBox);
        pbImagen2->setObjectName(QString::fromUtf8("pbImagen2"));
        pbImagen2->setGeometry(QRect(200, 130, 101, 21));
        leImagen2 = new QLineEdit(groupBox);
        leImagen2->setObjectName(QString::fromUtf8("leImagen2"));
        leImagen2->setGeometry(QRect(200, 80, 113, 21));
        leImagen2->setReadOnly(true);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 40, 231, 21));

        gridLayout->addWidget(groupBox, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        pbValidar = new QPushButton(groupBox_2);
        pbValidar->setObjectName(QString::fromUtf8("pbValidar"));
        pbValidar->setGeometry(QRect(160, 210, 80, 21));
        leUsuarioP2 = new QLineEdit(groupBox_2);
        leUsuarioP2->setObjectName(QString::fromUtf8("leUsuarioP2"));
        leUsuarioP2->setGeometry(QRect(210, 80, 113, 21));
        leUsuarioP1 = new QLineEdit(groupBox_2);
        leUsuarioP1->setObjectName(QString::fromUtf8("leUsuarioP1"));
        leUsuarioP1->setGeometry(QRect(80, 80, 113, 21));
        leApellidoP2 = new QLineEdit(groupBox_2);
        leApellidoP2->setObjectName(QString::fromUtf8("leApellidoP2"));
        leApellidoP2->setGeometry(QRect(210, 120, 113, 21));
        leEdadP1 = new QLineEdit(groupBox_2);
        leEdadP1->setObjectName(QString::fromUtf8("leEdadP1"));
        leEdadP1->setGeometry(QRect(80, 160, 113, 21));
        leApellidoP1 = new QLineEdit(groupBox_2);
        leApellidoP1->setObjectName(QString::fromUtf8("leApellidoP1"));
        leApellidoP1->setGeometry(QRect(80, 120, 113, 21));
        leEdadP2 = new QLineEdit(groupBox_2);
        leEdadP2->setObjectName(QString::fromUtf8("leEdadP2"));
        leEdadP2->setGeometry(QRect(210, 160, 113, 21));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 80, 47, 13));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 60, 61, 16));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(250, 60, 61, 16));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 120, 47, 13));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 160, 47, 16));

        gridLayout->addWidget(groupBox_2, 0, 2, 1, 1);

        VentanaConMenues->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VentanaConMenues);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1080, 20));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        menuEdici_n = new QMenu(menubar);
        menuEdici_n->setObjectName(QString::fromUtf8("menuEdici_n"));
        menuOpciones = new QMenu(menubar);
        menuOpciones->setObjectName(QString::fromUtf8("menuOpciones"));
        menuAyuda = new QMenu(menubar);
        menuAyuda->setObjectName(QString::fromUtf8("menuAyuda"));
        menuModo = new QMenu(menubar);
        menuModo->setObjectName(QString::fromUtf8("menuModo"));
        VentanaConMenues->setMenuBar(menubar);
        statusbar = new QStatusBar(VentanaConMenues);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        VentanaConMenues->setStatusBar(statusbar);
        toolBar = new QToolBar(VentanaConMenues);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        VentanaConMenues->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuEdici_n->menuAction());
        menubar->addAction(menuOpciones->menuAction());
        menubar->addAction(menuAyuda->menuAction());
        menubar->addAction(menuModo->menuAction());
        menuArchivo->addAction(actionNuevo);
        menuArchivo->addAction(actionAbrir);
        menuArchivo->addAction(actionGuardar);
        menuArchivo->addAction(actionGuardar_como);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionImprimir);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionCerrar);
        menuEdici_n->addAction(actionCopiar);
        menuEdici_n->addAction(actionPegar);
        menuEdici_n->addAction(actionCortar);
        menuOpciones->addAction(actionHerramientas);
        menuOpciones->addAction(actionConfiguraci_n);
        menuAyuda->addAction(actionAcerca_de);
        menuModo->addAction(actionOscuro);
        menuModo->addAction(actionClaro);
        toolBar->addAction(actionOscuro);
        toolBar->addAction(actionClaro);

        retranslateUi(VentanaConMenues);

        QMetaObject::connectSlotsByName(VentanaConMenues);
    } // setupUi

    void retranslateUi(QMainWindow *VentanaConMenues)
    {
        VentanaConMenues->setWindowTitle(QCoreApplication::translate("VentanaConMenues", "VentanaConMenues", nullptr));
        actionNuevo->setText(QCoreApplication::translate("VentanaConMenues", "Nuevo", nullptr));
        actionAbrir->setText(QCoreApplication::translate("VentanaConMenues", "Abrir", nullptr));
        actionGuardar->setText(QCoreApplication::translate("VentanaConMenues", "Guardar", nullptr));
        actionGuardar_como->setText(QCoreApplication::translate("VentanaConMenues", "Guardar como", nullptr));
        actionCerrar->setText(QCoreApplication::translate("VentanaConMenues", "Cerrar", nullptr));
        actionImprimir->setText(QCoreApplication::translate("VentanaConMenues", "Imprimir", nullptr));
        actionCopiar->setText(QCoreApplication::translate("VentanaConMenues", "Copiar", nullptr));
        actionPegar->setText(QCoreApplication::translate("VentanaConMenues", "Pegar", nullptr));
        actionCortar->setText(QCoreApplication::translate("VentanaConMenues", "Cortar", nullptr));
        actionHerramientas->setText(QCoreApplication::translate("VentanaConMenues", "Herramientas", nullptr));
        actionConfiguraci_n->setText(QCoreApplication::translate("VentanaConMenues", "Configuraci\303\263n", nullptr));
        actionAcerca_de->setText(QCoreApplication::translate("VentanaConMenues", "Acerca de", nullptr));
        actionIntercambiar_Modo->setText(QCoreApplication::translate("VentanaConMenues", "Intercambiar Modo", nullptr));
        actionOscuro->setText(QCoreApplication::translate("VentanaConMenues", "Oscuro", nullptr));
        actionClaro->setText(QCoreApplication::translate("VentanaConMenues", "Claro", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("VentanaConMenues", "Comparaci\303\263n de Login", nullptr));
        pbAbrir->setText(QCoreApplication::translate("VentanaConMenues", "Generar", nullptr));
        label_2->setText(QCoreApplication::translate("VentanaConMenues", "Se generaran Ventanas Aleatorias", nullptr));
        groupBox->setTitle(QCoreApplication::translate("VentanaConMenues", "Comparaci\303\263n de Im\303\241genes", nullptr));
        pbComparar->setText(QCoreApplication::translate("VentanaConMenues", "Comparar", nullptr));
        pbImagen1->setText(QCoreApplication::translate("VentanaConMenues", "Cargar Imagen 1", nullptr));
        pbImagen2->setText(QCoreApplication::translate("VentanaConMenues", "Cargar Imagen 2", nullptr));
        label_7->setText(QCoreApplication::translate("VentanaConMenues", "Seleccione dos imagenes para comparar", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("VentanaConMenues", "Comparaci\303\263n de Personas", nullptr));
        pbValidar->setText(QCoreApplication::translate("VentanaConMenues", "Comparar", nullptr));
        label->setText(QCoreApplication::translate("VentanaConMenues", "Nombre", nullptr));
        label_3->setText(QCoreApplication::translate("VentanaConMenues", "Persona 1", nullptr));
        label_4->setText(QCoreApplication::translate("VentanaConMenues", "Persona 2", nullptr));
        label_5->setText(QCoreApplication::translate("VentanaConMenues", "Apellido", nullptr));
        label_6->setText(QCoreApplication::translate("VentanaConMenues", "Edad", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("VentanaConMenues", "Archivo", nullptr));
        menuEdici_n->setTitle(QCoreApplication::translate("VentanaConMenues", "Edici\303\263n", nullptr));
        menuOpciones->setTitle(QCoreApplication::translate("VentanaConMenues", "Opciones", nullptr));
        menuAyuda->setTitle(QCoreApplication::translate("VentanaConMenues", "Ayuda", nullptr));
        menuModo->setTitle(QCoreApplication::translate("VentanaConMenues", "Modo", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("VentanaConMenues", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaConMenues: public Ui_VentanaConMenues {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANACONMENUES_H
