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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "boton.h"

QT_BEGIN_NAMESPACE

class Ui_Ventana
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    Boton *boton2;
    Boton *boton4;
    Boton *boton3;
    Boton *boton1;
    Boton *boton5;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Ventana)
    {
        if (Ventana->objectName().isEmpty())
            Ventana->setObjectName(QString::fromUtf8("Ventana"));
        Ventana->resize(498, 448);
        gridLayout = new QGridLayout(Ventana);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 0, 1, 1);

        boton2 = new Boton(Ventana);
        boton2->setObjectName(QString::fromUtf8("boton2"));
        boton2->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(boton2, 2, 0, 1, 1);

        boton4 = new Boton(Ventana);
        boton4->setObjectName(QString::fromUtf8("boton4"));
        boton4->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(boton4, 4, 0, 1, 1);

        boton3 = new Boton(Ventana);
        boton3->setObjectName(QString::fromUtf8("boton3"));
        boton3->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(boton3, 3, 0, 1, 1);

        boton1 = new Boton(Ventana);
        boton1->setObjectName(QString::fromUtf8("boton1"));
        boton1->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(boton1, 1, 0, 1, 1);

        boton5 = new Boton(Ventana);
        boton5->setObjectName(QString::fromUtf8("boton5"));
        boton5->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(boton5, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);


        retranslateUi(Ventana);

        QMetaObject::connectSlotsByName(Ventana);
    } // setupUi

    void retranslateUi(QWidget *Ventana)
    {
        Ventana->setWindowTitle(QCoreApplication::translate("Ventana", "Ventana", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ventana: public Ui_Ventana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA_H
