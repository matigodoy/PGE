#include "manager.h"
#include "login.h"
#include "formulario.h"
#include "ventana.h"

Manager * Manager::man = nullptr;

Manager::Manager( QObject * parent ) : QObject( parent )
{
    connect( Login::getLog(), SIGNAL( signal_usuarioValidado( bool, QStringList ) ), this, SLOT( slot_ingreso( bool, QStringList ) ) );
    connect( Formulario::getForm(), SIGNAL( mostrarVentana() ), this, SLOT( slot_mostrarVentana() ) );

    QVector< QStringList > nuevosUsuarios;

    QStringList usuario1;  usuario1 << "carlos" << "123";
    QStringList usuario2;  usuario2 << "miguel" << "1234";
    QStringList usuario3;  usuario3 << "julio" << "12345";

    nuevosUsuarios << usuario1 << usuario2 << usuario3;

    Login::getLog()->setBaseUsuarios( nuevosUsuarios );
}

Manager *Manager::getMan()
{
    if( man == nullptr )  {
        man = new Manager;
    }
    return man;
}

void Manager::iniciar()
{
    Login::getLog()->show();
}

void Manager::slot_ingreso( bool valido, QStringList usuario )
{
    if ( valido )  {
        Login::getLog()->hide();
        Formulario::getForm()->show();
        Formulario::getForm()->setWindowTitle( "Bienvenido: " + usuario.at( 0 ) );
    }
    else  {
        Login::getLog()->close();
    }
}

void Manager::slot_mostrarVentana()
{
    Formulario::getForm()->hide();
    Ventana::getVent()->show();
}


