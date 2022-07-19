#include "login.h"
#include "ui_login.h"

Login * Login::instancia = nullptr;

Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

Login *Login::getInstancia()
{
    if(instancia == nullptr){
        instancia = new Login;
    }
    return instancia;
}

