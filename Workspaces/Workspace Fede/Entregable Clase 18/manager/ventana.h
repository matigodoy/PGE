#ifndef VENTANA_H
#define VENTANA_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Ventana; }
QT_END_NAMESPACE

class Ventana : public QWidget
{
    Q_OBJECT

public:
    static Ventana * getVent();
    ~Ventana();

private:
    static Ventana * vent;
    Ventana(QWidget *parent = nullptr);
    QImage im;
    Ui::Ventana *ui;

protected:
    void paintEvent(QPaintEvent *);
};
#endif // VENTANA_H
