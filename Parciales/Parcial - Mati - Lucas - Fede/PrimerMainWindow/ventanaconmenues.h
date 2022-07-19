#ifndef VENTANACONMENUES_H
#define VENTANACONMENUES_H

#include <QMainWindow>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class VentanaConMenues; }
QT_END_NAMESPACE

class VentanaConMenues : public QMainWindow
{
    Q_OBJECT

public:
    enum Modo {DARK, CLASSIC};
    VentanaConMenues(Modo modo , QWidget *parent = nullptr);
    ~VentanaConMenues();


private:
    Ui::VentanaConMenues *ui;

    void comprobarImagen();

private slots:
    void slot_compararImagenes();
    void slot_buscarImagen1();
    void slot_buscarImagen2();
    void slot_compararPersona();
    void slot_abrirLogin();
    void slot_modoOscuro();
    void slot_modoClaro();
};
#endif // VENTANACONMENUES_H
