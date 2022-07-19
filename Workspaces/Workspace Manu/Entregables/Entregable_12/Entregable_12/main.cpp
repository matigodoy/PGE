#include <QWidget>
#include <QApplication>
#include <QVector>
#include <QDebug>


class Ventana : public QWidget  {
public:
    Ventana()  {

    }

    Ventana( const Ventana & ventana )  {
        this->resize( ventana.width(), ventana.height() );
        this->setWindowTitle( ventana.windowTitle() );
        this->move( ventana.pos() );
        this->setMaximumSize( ventana.maximumWidth(), ventana.maximumHeight() );
        this->setMinimumSize( ventana.minimumWidth(), ventana.minimumHeight() );  
    }

    Ventana & operator=( const Ventana & ventana )  {
        this->resize( ventana.width(), ventana.height() );
        this->setWindowTitle( ventana.windowTitle() );
        this->move( ventana.pos() );
        this->setMaximumSize( ventana.maximumWidth(), ventana.maximumHeight() );
        this->setMinimumSize( ventana.minimumWidth(), ventana.minimumHeight() );
        return *this;
    }
};


int main( int argc, char ** argv )  {
    QApplication a( argc, argv );


    Ventana v1;
    v1.move( 200, 500 );
    v1.resize( 500, 200 );
    v1.setWindowTitle( "Ventana 1" );
    v1.setMaximumSize( 500, 500 );
    v1.setMinimumSize( 100, 100 );

    Ventana v2;
    v2.move( 500, 200 );
    v2.resize( 500, 200 );
    v2.setWindowTitle( "Ventana 2" );
    v2.setMaximumSize( 500, 500 );
    v2.setMinimumSize( 100, 100 );

    Ventana v3;
    v3.move( 1000, 500 );
    v3.resize( 500, 200 );
    v3.setWindowTitle( "Ventana 3" );
    v3.setMaximumSize( 500, 500 );
    v3.setMinimumSize( 100, 100 );

    QVector< Ventana > vVentana;
    vVentana.push_back( v1 );
    vVentana.push_back( v2 );
    vVentana.push_back( v3 );

    for(int i=0; i<vVentana.size() ; i++){
        vVentana[i].show();
    }

    return a.exec();
}
