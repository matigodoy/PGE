#include "ventanaconmenues.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VentanaConMenues w(VentanaConMenues::DARK);
    w.show();
    return a.exec();
}
