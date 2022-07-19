
#include <QWidget>
#include <QApplication>
#include <QVector>
#include <QString>



class Ventana : public QWidget  {

public:
    Ventana()  {

    }

    Ventana( const Ventana & ventana )  {
        this->resize( ventana.width(), ventana.height() );
        this->setWindowTitle( ventana.windowTitle() );
        this->setWindowOpacity( ventana.windowOpacity() );
        this->setCursor( ventana.cursor() );
        this->move( ventana.pos() );
    }

    Ventana & operator=( const Ventana & ventana )  {
        this->resize( ventana.width(), ventana.height() );
        this->setWindowTitle( ventana.windowTitle() );
        this->move( ventana.pos() );
        this->setWindowOpacity( ventana.windowOpacity() );
        this->setCursor( ventana.cursor() );
        return *this;
    }

};



int main( int argc, char ** argv )  {

    QApplication a( argc, argv );

    Ventana login;
    login.move( 200, 500 );
    login.resize( 500, 200 );
    login.setWindowTitle( "Login 1" );
    login.setWindowOpacity(0.5);

    Ventana login2;
    login2.move( 0, 0 );
    login2.resize( 400, 100 );
    login2.setWindowTitle( "Login 2" );
    login2.setCursor(Qt::WaitCursor);

    QVector< Ventana > vLogin;
    vLogin.push_back( login );
    vLogin.push_back( login2 );


    for(int i=0; i < vLogin.size(); i++){
        vLogin[i].show();
    }

    return a.exec();
}
