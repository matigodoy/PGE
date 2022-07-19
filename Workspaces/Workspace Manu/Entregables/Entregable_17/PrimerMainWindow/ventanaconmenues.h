#ifndef VENTANACONMENUES_H
#define VENTANACONMENUES_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class VentanaConMenues; }
QT_END_NAMESPACE

class VentanaConMenues : public QMainWindow
{
    Q_OBJECT

public:
    VentanaConMenues(QWidget *parent = nullptr);
    ~VentanaConMenues();

private:
    Ui::VentanaConMenues *ui;

private slots:
    void slot_guardar();
};
#endif // VENTANACONMENUES_H
