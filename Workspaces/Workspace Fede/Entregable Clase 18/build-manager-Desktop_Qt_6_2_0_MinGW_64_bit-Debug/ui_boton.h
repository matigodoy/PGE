/********************************************************************************
** Form generated from reading UI file 'boton.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOTON_H
#define UI_BOTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Boton
{
public:
    QGridLayout *gridLayout;
    QLabel *lBoton;

    void setupUi(QWidget *Boton)
    {
        if (Boton->objectName().isEmpty())
            Boton->setObjectName(QString::fromUtf8("Boton"));
        Boton->resize(298, 148);
        gridLayout = new QGridLayout(Boton);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lBoton = new QLabel(Boton);
        lBoton->setObjectName(QString::fromUtf8("lBoton"));
        lBoton->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lBoton, 0, 0, 1, 1);


        retranslateUi(Boton);

        QMetaObject::connectSlotsByName(Boton);
    } // setupUi

    void retranslateUi(QWidget *Boton)
    {
        Boton->setWindowTitle(QCoreApplication::translate("Boton", "Boton", nullptr));
        lBoton->setText(QCoreApplication::translate("Boton", "Boton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Boton: public Ui_Boton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOTON_H
