#include "vista.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Vista vista;

    QStringList lista;
    lista << "julio" << "carlos" << "miguel" << "admin" << "administrador"
          << "Carlos" << "Franco" << "Lucas" << "Matias" << "Matias" << "Matias" << "Matias" << "Matias" << "Matias";

    vista.setLista( lista );
    vista.show();

    return a.exec();
}
