#ifndef BOTON_H
#define BOTON_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Boton; }
QT_END_NAMESPACE

class Boton : public QWidget
{
    Q_OBJECT

public:
    Boton(QWidget *parent = nullptr);
    ~Boton();
    enum Color {BLANCO, ROJO, AZUL, VERDE};

    void setTexto(QString texto);
    void setColor(Color color);

protected:
    void mousePressEvent(QMouseEvent * event);
    void paintEvent(QPaintEvent * event);

private:
    Ui::Boton *ui;
    Color color;

signals:
    void signal_click();
};
#endif // BOTON_H
