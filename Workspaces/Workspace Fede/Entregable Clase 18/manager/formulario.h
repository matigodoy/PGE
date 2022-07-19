#ifndef FORMULARIO_H
#define FORMULARIO_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Formulario; }
QT_END_NAMESPACE

class Formulario : public QWidget
{
    Q_OBJECT

public:
    static Formulario * getForm();
    ~Formulario();

private:
    static Formulario * form;
    Formulario(QWidget *parent = nullptr);

    Ui::Formulario *ui;

private slots:
    void slot_mostrarVentana();

signals:
    void mostrarVentana();
};
#endif // FORMULARIO_H
