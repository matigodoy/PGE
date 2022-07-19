/********************************************************************************
** Form generated from reading UI file 'ventana.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA_H
#define UI_VENTANA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "lineadetexto.h"

QT_BEGIN_NAMESPACE

class Ui_Ventana
{
public:
    QGridLayout *gridLayout;
    QPushButton *pb;
    QSpacerItem *horizontalSpacer;
    LineaDeTexto *ltClave;
    LineaDeTexto *ltUsuario;

    void setupUi(QWidget *Ventana)
    {
        if (Ventana->objectName().isEmpty())
            Ventana->setObjectName(QString::fromUtf8("Ventana"));
        Ventana->resize(538, 233);
        gridLayout = new QGridLayout(Ventana);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pb = new QPushButton(Ventana);
        pb->setObjectName(QString::fromUtf8("pb"));

        gridLayout->addWidget(pb, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        ltClave = new LineaDeTexto(Ventana);
        ltClave->setObjectName(QString::fromUtf8("ltClave"));

        gridLayout->addWidget(ltClave, 1, 0, 1, 2);

        ltUsuario = new LineaDeTexto(Ventana);
        ltUsuario->setObjectName(QString::fromUtf8("ltUsuario"));

        gridLayout->addWidget(ltUsuario, 0, 0, 1, 2);


        retranslateUi(Ventana);

        QMetaObject::connectSlotsByName(Ventana);
    } // setupUi

    void retranslateUi(QWidget *Ventana)
    {
        Ventana->setWindowTitle(QCoreApplication::translate("Ventana", "Ventana", nullptr));
        pb->setText(QCoreApplication::translate("Ventana", "Ingresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ventana: public Ui_Ventana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA_H
