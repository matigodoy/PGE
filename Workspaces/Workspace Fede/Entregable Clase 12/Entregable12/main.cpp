
#include <QWidget>
#include <QApplication>
#include <QVector>
#include <QDebug>

//class Login : public QWidget  {
//public:
//    Login()  {

//    }

//    Login( const Login & login )  {
//        this->resize( login.width(), login.height() );
//        this->setWindowTitle( login.windowTitle() );
//        this->move( login.pos() );
//    }

//    Login & operator=( const Login & login )  {
//        this->resize( login.width(), login.height() );
//        this->setWindowTitle( login.windowTitle() );
//        this->move( login.pos() );
//        return *this;
//    }

//};

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

    Ventana ventana1;
    ventana1.move( 200, 500 );
    ventana1.resize( 500, 200 );
    ventana1.setWindowTitle( "Ventana 1" );
    ventana1.setMaximumSize( 800, 800 );
    ventana1.setMinimumSize( 100, 100 );

    Ventana ventana2;
    ventana2.move( 500, 200 );
    ventana2.resize( 500, 200 );
    ventana2.setWindowTitle( "Ventana 2" );
    ventana2.setMaximumSize( 800, 800 );
    ventana2.setMinimumSize( 100, 100 );

    Ventana ventana3;
    ventana3.move( 1000, 500 );
    ventana3.resize( 500, 200 );
    ventana3.setWindowTitle( "Ventana 3" );
    ventana3.setMaximumSize( 800, 800 );
    ventana3.setMinimumSize( 100, 100 );

    QVector< Ventana > vVentana;
    vVentana.push_back( ventana1 );
    vVentana.push_back( ventana2 );
    vVentana.push_back( ventana3 );

    vVentana.push_back( Ventana() );
    vVentana[3].setWindowTitle("Prueba");

    for(int i=0; i<vVentana.size() ; i++){
        vVentana[i].show();
    }

    return a.exec();
}
