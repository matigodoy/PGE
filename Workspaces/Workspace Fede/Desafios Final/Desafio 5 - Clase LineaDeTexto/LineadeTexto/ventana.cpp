#include "ventana.h"
#include "ui_ventana.h"

Ventana::Ventana(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Ventana)
{
    ui->setupUi(this);

    ui->ltClave->setTipo(LineaDeTexto::SOLO_NUMERO);
}

Ventana::~Ventana()
{
    delete ui;
}

