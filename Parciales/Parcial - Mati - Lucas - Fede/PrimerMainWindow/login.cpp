#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) : QWidget(parent), ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

/*Login::Login(const Login &login)
{
    this->resize(login.width(), login.height());
}*/

bool Login::operator>(const Login * login)
{
    int aux1 = this->width() * this->height();
    int aux2 = login->width() * login->height();
    if(aux1 > aux2){
        return true;
    }
    return false;
}

bool Login::operator<(const Login * login)
{
    int aux1 = this->width() * this->height();
    int aux2 = login->width() * login->height();
    if(aux1 < aux2){
        return true;
    }
    return false;
}
