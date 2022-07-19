/********************************************************************************
** Form generated from reading UI file 'vista.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISTA_H
#define UI_VISTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vista
{
public:
    QLineEdit *leBuscar;

    void setupUi(QWidget *Vista)
    {
        if (Vista->objectName().isEmpty())
            Vista->setObjectName(QString::fromUtf8("Vista"));
        Vista->resize(898, 481);
        leBuscar = new QLineEdit(Vista);
        leBuscar->setObjectName(QString::fromUtf8("leBuscar"));
        leBuscar->setGeometry(QRect(190, 210, 401, 22));

        retranslateUi(Vista);

        QMetaObject::connectSlotsByName(Vista);
    } // setupUi

    void retranslateUi(QWidget *Vista)
    {
        Vista->setWindowTitle(QCoreApplication::translate("Vista", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Vista: public Ui_Vista {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISTA_H
