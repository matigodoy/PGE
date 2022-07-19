#include "formulario.h"
#include "ui_formulario.h"

Formulario * Formulario::form = nullptr;


Formulario::Formulario(QWidget *parent) : QWidget(parent), ui(new Ui::Formulario)
{
    ui->setupUi(this);
    connect( ui->pbMostrar, SIGNAL( pressed() ), this, SLOT( slot_mostrarVentana() ) );
}

void Formulario::slot_mostrarVentana()
{
    emit mostrarVentana();
}

Formulario *Formulario::getForm()
{
    if( form == nullptr )  {
        form = new Formulario;
    }
    return form;
}

Formulario::~Formulario()
{
    delete ui;
}

