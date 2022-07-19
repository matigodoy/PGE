#include "ventana.h"
#include "ui_ventana.h"
#include <QPainter>

Ventana * Ventana::vent = nullptr;

Ventana::Ventana(QWidget *parent) : QWidget(parent),im(QImage("../recursos/fondo.jpg")), ui(new Ui::Ventana)
{
    ui->setupUi(this);

    ui->boton1->setTexto("Boton 1");
    ui->boton2->setTexto("Boton 2");
    ui->boton3->setTexto("Boton 3");
    ui->boton4->setTexto("Boton 4");
    ui->boton5->setTexto("Cerrar");

    ui->boton1->setColor(Boton::AZUL);
    ui->boton2->setColor(Boton::VERDE);
    ui->boton3->setColor(Boton::BLANCO);
    ui->boton4->setColor(Boton::VERDE);
    ui->boton5->setColor(Boton::ROJO);

    connect(ui->boton5, SIGNAL(signal_click()), this, SLOT(close()));
}

void Ventana::paintEvent(QPaintEvent *)
{
    QPainter painter(this);

    if(! im.isNull()){
        painter.drawImage(0,0,im.scaled(this->width(), this->height()));
    }
}

Ventana *Ventana::getVent()
{
    if( vent == nullptr )  {
        vent = new Ventana;
    }
    return vent;
}

Ventana::~Ventana()
{
    delete ui;
}
