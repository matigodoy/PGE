#include <QApplication>
#include <QDebug>
#include "listado.h"

int main(int argc, char ** argv){
    QApplication a(argc, argv);

    Listado<int> * l1 = new Listado<int>;

    l1->add(10);
    l1->add(20);
    l1->add(30);
    l1->add(40);
    l1->add(50);

    for(int i=0; i<l1->size(); i++){
        qDebug() << l1->get(i);
    }

    return 0;
}
