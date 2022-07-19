/********************************************************************************
** Form generated from reading UI file 'ventanaconmenues.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANACONMENUES_H
#define UI_VENTANACONMENUES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
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
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuEdici_n;
    QMenu *menuOpciones;
    QMenu *menuAyuda;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *VentanaConMenues)
    {
        if (VentanaConMenues->objectName().isEmpty())
            VentanaConMenues->setObjectName(QString::fromUtf8("VentanaConMenues"));
        VentanaConMenues->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/recursos/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        VentanaConMenues->setWindowIcon(icon);
        VentanaConMenues->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 98, 255);"));
        actionNuevo = new QAction(VentanaConMenues);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/recursos/file-regular.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNuevo->setIcon(icon1);
        actionAbrir = new QAction(VentanaConMenues);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        actionGuardar = new QAction(VentanaConMenues);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/recursos/save-regular.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar->setIcon(icon2);
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
        centralwidget = new QWidget(VentanaConMenues);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        VentanaConMenues->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VentanaConMenues);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        menuEdici_n = new QMenu(menubar);
        menuEdici_n->setObjectName(QString::fromUtf8("menuEdici_n"));
        menuOpciones = new QMenu(menubar);
        menuOpciones->setObjectName(QString::fromUtf8("menuOpciones"));
        menuAyuda = new QMenu(menubar);
        menuAyuda->setObjectName(QString::fromUtf8("menuAyuda"));
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
        toolBar->addAction(actionNuevo);
        toolBar->addAction(actionGuardar);

        retranslateUi(VentanaConMenues);

        QMetaObject::connectSlotsByName(VentanaConMenues);
    } // setupUi

    void retranslateUi(QMainWindow *VentanaConMenues)
    {
        VentanaConMenues->setWindowTitle(QCoreApplication::translate("VentanaConMenues", "AbstractText", nullptr));
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
        menuArchivo->setTitle(QCoreApplication::translate("VentanaConMenues", "Archivo", nullptr));
        menuEdici_n->setTitle(QCoreApplication::translate("VentanaConMenues", "Edici\303\263n", nullptr));
        menuOpciones->setTitle(QCoreApplication::translate("VentanaConMenues", "Opciones", nullptr));
        menuAyuda->setTitle(QCoreApplication::translate("VentanaConMenues", "Ayuda", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("VentanaConMenues", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaConMenues: public Ui_VentanaConMenues {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANACONMENUES_H
