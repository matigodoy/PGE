#include "ventana.h"
#include "ui_ventana.h"

Ventana::Ventana(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Ventana)
{
    ui->setupUi(this);

    ui->ltUsuario->setTipo(LineaDeTexto::SOLO_NUMERO);
    ui->ltClave->setTipo(LineaDeTexto::SIN_RESTRICCION);
}

Ventana::~Ventana()
{
    delete ui;
}

