#include "Listado.h"
#include <QApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
     QApplication a( argc, argv);

     Listado<float> l1(5);

     qDebug()<< l1.add(0);
     qDebug()<< l1.add(1);
     qDebug()<< l1.add(2);
     qDebug()<< l1.add(3);
     qDebug()<< l1.add(4);

     for(int i = 0 ; i < l1.size(); i++){
         qDebug() << l1.get(i);
     }
    return 0;
}
