#include <QApplication>
#include "lineadetexto.h"

int main( int argc, char ** argv )  {
    QApplication a( argc, argv );

    LineaDeTexto linea;

    QStringList lista;
    lista << "julio" << "carlos" << "miguel" << "admin" << "administrador"
    << "Carlos" << "Franco" << "Lucas" << "Matias" << "Matias" << "Matias" << "Matias" << "Matias" << "Matias";

    linea.setLista( lista );

    {
        LineaDeTexto l1 = "Hola";
        LineaDeTexto l2 = "che";

        linea = l1 + l2;
    }

    linea.resize(300,50);
    linea.show();  // Esta línea mostrará un QLineEdit con el texto 'Hola che'

    return a.exec();
}
