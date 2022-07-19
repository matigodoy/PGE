#include "listado.h"
#include <QApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Listado<int> * l1 = new  Listado<int>;

    l1->add(1);
    l1->add(3);
    l1->add(4);
    l1->add(5);

    for (int i = 0 ; i < l1->size() ;i++ ) {
        qDebug()<< l1->get(i);
    }
    return 0;
}
