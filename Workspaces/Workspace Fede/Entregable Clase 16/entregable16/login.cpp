#include "login.h"
#include "ui_login.h"
#include "fmline.h"

Login::Login(QWidget *parent) : QWidget(parent), ui(new Ui::Login)
{
    ui->setupUi( this );

    ui->leUsuario->sugerirCon( FMLine::GOOGLE );

    QStringList lista;
    lista << "julio" << "carlos" << "miguel" << "admin" << "administrador"
    << "Carlos" << "Franco" << "Lucas" << "Matias" << "Matias" << "Matias" << "Matias" << "Matias" << "Matias";

    ui->leUsuario->setLista( lista );
}

Login::~Login()
{
    delete ui;
}
