#include "ventana.h"
#include "lineadetexto.h"

#include <QApplication>
#include <QVector>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ventana w;
    w.show();

    LineaDeTexto l1;
    QVector< LineaDeTexto > v;

    v.push_back( l1 );

    return a.exec();
}
