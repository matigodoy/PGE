/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout;
    QLabel *lClave;
    QPushButton *pbValidar;
    QLabel *lUsuario;
    QSpacerItem *horizontalSpacer;
    QLineEdit *leClave;
    QLineEdit *leUsuario;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(337, 374);
        gridLayout = new QGridLayout(Login);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lClave = new QLabel(Login);
        lClave->setObjectName(QString::fromUtf8("lClave"));

        gridLayout->addWidget(lClave, 1, 0, 1, 1);

        pbValidar = new QPushButton(Login);
        pbValidar->setObjectName(QString::fromUtf8("pbValidar"));

        gridLayout->addWidget(pbValidar, 2, 1, 1, 1);

        lUsuario = new QLabel(Login);
        lUsuario->setObjectName(QString::fromUtf8("lUsuario"));

        gridLayout->addWidget(lUsuario, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        leClave = new QLineEdit(Login);
        leClave->setObjectName(QString::fromUtf8("leClave"));

        gridLayout->addWidget(leClave, 1, 1, 1, 2);

        leUsuario = new QLineEdit(Login);
        leUsuario->setObjectName(QString::fromUtf8("leUsuario"));

        gridLayout->addWidget(leUsuario, 0, 1, 1, 2);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        lClave->setText(QCoreApplication::translate("Login", "Clave", nullptr));
        pbValidar->setText(QCoreApplication::translate("Login", "Validar", nullptr));
        lUsuario->setText(QCoreApplication::translate("Login", "Usuario", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
