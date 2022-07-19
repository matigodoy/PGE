#include <QApplication>
#include "lineadetexto.h"
#include <QTreeWidget>

int main( int argc, char ** argv )  {
    QApplication a( argc, argv );

    LineaDeTexto linea;

    {
        LineaDeTexto l1 = "Hola";
        LineaDeTexto l2 = "che";

        linea = l1 + l2;
    }

   // linea.show();  // Esta línea mostrará un QLineEdit con el texto 'Hola che'

    QTreeWidget * treeWidget = new QTreeWidget;
    treeWidget->setColumnCount( 2 );
    QList< QTreeWidgetItem * > items;

    QStringList campos;
    campos << "Campo 1" << "Campo 2";

    QStringList lista;
    lista << "Hola" << "che";

    for ( int i = 0; i < 5; ++i )
       items.append( new QTreeWidgetItem( lista ) );

    treeWidget->addTopLevelItems( items );
    treeWidget->show();

    return a.exec();
}


