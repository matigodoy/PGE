#include "ventanaconmenues.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VentanaConMenues w(VentanaConMenues::CLASSIC);
    w.show();
    VentanaConMenues x(VentanaConMenues::DARK);
    x.show();

    return a.exec();
}
