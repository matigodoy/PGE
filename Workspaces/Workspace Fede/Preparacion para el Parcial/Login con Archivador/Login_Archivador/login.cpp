#include "login.h"
#include "ui_login.h"
#include "admindb.h"
#include "archivador.h"

Login::Login(QWidget *parent) : QWidget(parent), ui(new Ui::Login)
{
    ui->setupUi(this);

    connect(ui->pb, SIGNAL(pressed()),this,SLOT(slot_validar()));

    //Se conecta a la base de datos
    if ( ! AdminDB::getInstancia()->conectar( "../db/usuarios.sqlite" ) )  {
        qDebug() << "Error de conexion a la base, No se pudo conectar";
        //hacer el log que no se conecto a la base
        Archivador::getInstancia()->loguear("Error Base de Datos", "La Base de Datos no se pudo conectar");
    }
    else{
        //hacer el log que si se conecto a la base
        Archivador::getInstancia()->loguear("Base de Datos conectada", "La Base de Datos se conecto correctamente");
    }
}

Login::~Login()
{
    delete ui;
}

void Login::slot_validar()
{
    //validamos el usuario con los datos
    QStringList persona = AdminDB::getInstancia()->validarUsuario(ui->leUsuario->text(),ui->leClave->text(),"usuarios");

    qDebug() << ui->leUsuario->text() << " | " << ui->leClave->text() << persona;

    //si el QStringList es mayor a 0 significa que tiene 1 persona validada. Si no significa que no se valido el usuario
    if ( persona.size() > 0 )  {
        qDebug() << "Usuario valido";
        //hacer el log con el usuario valido
        Archivador::getInstancia()->loguear("Usuario Valido", "El usuario " + ui->leUsuario->text() + " se logueo correctamente");
    }
    else  {
        qDebug() << "Usuario no valido";
        //hacer el log con el usuario invalido
        Archivador::getInstancia()->loguear("Usuario NO Valido", "El usuario " + ui->leUsuario->text() + " no se logueo correctamente");
    }
}

