#include <QApplication>
#include "lineadetexto.h"

int main( int argc, char ** argv )  {
    QApplication a( argc, argv );

    LineaDeTexto linea;

    {
        LineaDeTexto l1 = "Hola";
        LineaDeTexto l2 = "che";

        linea = l1 + l2;
    }

    linea.show();  // Esta línea mostrará un QLineEdit con el texto 'Hola che'

    return a.exec();
}
