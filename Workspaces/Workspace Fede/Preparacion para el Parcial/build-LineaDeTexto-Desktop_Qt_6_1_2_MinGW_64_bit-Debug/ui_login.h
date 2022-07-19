/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "lineadetexto.h"

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout;
    LineaDeTexto *leUsuario;
    LineaDeTexto *leClave;
    QLabel *lUsuario;
    QLabel *lClave;
    QPushButton *pb;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(382, 218);
        gridLayout = new QGridLayout(Login);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        leUsuario = new LineaDeTexto(Login);
        leUsuario->setObjectName(QString::fromUtf8("leUsuario"));

        gridLayout->addWidget(leUsuario, 0, 1, 1, 1);

        leClave = new LineaDeTexto(Login);
        leClave->setObjectName(QString::fromUtf8("leClave"));

        gridLayout->addWidget(leClave, 2, 1, 1, 1);

        lUsuario = new QLabel(Login);
        lUsuario->setObjectName(QString::fromUtf8("lUsuario"));

        gridLayout->addWidget(lUsuario, 0, 0, 1, 1);

        lClave = new QLabel(Login);
        lClave->setObjectName(QString::fromUtf8("lClave"));

        gridLayout->addWidget(lClave, 2, 0, 1, 1);

        pb = new QPushButton(Login);
        pb->setObjectName(QString::fromUtf8("pb"));

        gridLayout->addWidget(pb, 3, 1, 1, 1);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        lUsuario->setText(QCoreApplication::translate("Login", "Usuario", nullptr));
        lClave->setText(QCoreApplication::translate("Login", "Clave", nullptr));
        pb->setText(QCoreApplication::translate("Login", "Validar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
