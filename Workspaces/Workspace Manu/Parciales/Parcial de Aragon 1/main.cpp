#include "ventanaconmenues.h"
#include "lineadetexto.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    VentanaConMenues w(VentanaConMenues::CLASSIC);
    w.show();
    w.setWindowTitle("Sublime Search - CLASSIC");

    VentanaConMenues x(VentanaConMenues::DARK);
    x.show();
    x.setWindowTitle("Sublime Search - DARK");
    return a.exec();
}
