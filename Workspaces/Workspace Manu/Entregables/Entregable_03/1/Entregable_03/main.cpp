#include "Listado.h"
#include <QApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
     QApplication a( argc, argv);

     Listado<int> *l1 = new Listado <int>(5);

     l1->add(1);
     l1->add(2);
     l1->add(3);
     l1->add(4);
     l1->add(5);

     qDebug()<< "Listado Inicial";

     for(int i= 0; i < l1->size(); i++){
         qDebug()<<l1->get(i);
     }

     qDebug()<< l1->insertar(2,222);

     qDebug()<< "Listado despues de agregar";

     for(int i= 0; i < l1->size(); i++){
         qDebug()<<l1->get(i);
     }
//     qDebug()<<l1->eliminar(3);

//     qDebug()<< "Listado Modificado";

//     for(int i= 0; i < l1->size(); i++){
//         qDebug()<<l1->get(i);
//     }



//     l1->clear();

//     qDebug()<< "Listado despues del clear";

//     for(int i= 0; i < l1->size(); i++){
//         qDebug()<<l1->get(i);
//     }

//     delete l1;

    return 0;
}
