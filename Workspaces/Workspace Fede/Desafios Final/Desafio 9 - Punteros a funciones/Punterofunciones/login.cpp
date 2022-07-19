#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) : QWidget(parent), ui(new Ui::Login), ventana(new QWidget)
{
    ui->setupUi(this);

    void (QPushButton::*puntero1 )();
    void (Login::*puntero2 )();

    puntero1 = &QPushButton::pressed;
    puntero2 = &Login::slot_validar;

    connect(ui->pb, puntero1, this, puntero2);

}

Login::~Login()
{
    delete ui;
}

void Login::slot_validar()
{
    if(ui->leUsuario->text() == "admin" && ui->leClave->text() == "1234"){
        ventana->show();
        this->hide();
    }
    else{
        this->close();
    }
}

