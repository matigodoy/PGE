/********************************************************************************
** Form generated from reading UI file 'vista.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISTA_H
#define UI_VISTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vista
{
public:
    QLineEdit *leBuscar;
    QPushButton *pbValidar;

    void setupUi(QWidget *Vista)
    {
        if (Vista->objectName().isEmpty())
            Vista->setObjectName(QString::fromUtf8("Vista"));
        Vista->resize(898, 481);
        leBuscar = new QLineEdit(Vista);
        leBuscar->setObjectName(QString::fromUtf8("leBuscar"));
        leBuscar->setGeometry(QRect(190, 210, 401, 22));
        pbValidar = new QPushButton(Vista);
        pbValidar->setObjectName(QString::fromUtf8("pbValidar"));
        pbValidar->setGeometry(QRect(620, 210, 80, 21));

        retranslateUi(Vista);

        QMetaObject::connectSlotsByName(Vista);
    } // setupUi

    void retranslateUi(QWidget *Vista)
    {
        Vista->setWindowTitle(QCoreApplication::translate("Vista", "Form", nullptr));
        pbValidar->setText(QCoreApplication::translate("Vista", "Buscar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Vista: public Ui_Vista {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISTA_H
