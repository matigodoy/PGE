#include "boton.h"
#include "ui_boton.h"
#include <QMouseEvent>
#include <QPainter>

Boton::Boton(QWidget *parent) : QWidget(parent), ui(new Ui::Boton), color(BLANCO)
{
    ui->setupUi(this);
}

Boton::~Boton()
{
    delete ui;
}

void Boton::setTexto(QString texto)
{
    ui->lBoton->setText(texto);
}

void Boton::setColor(Boton::Color color)
{
    this->color = color;
    repaint();
}

void Boton::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        emit signal_click();
    }
}

void Boton::paintEvent(QPaintEvent *)
{
    QPainter painter(this);

    switch(color){
    case BLANCO:
        painter.fillRect(0,0,this->width(), this->height(), QColor(255,255,255));
        break;
    case ROJO:
        painter.fillRect(0,0,this->width(), this->height(), QColor(255,0,0));
        break;
    case VERDE:
        painter.fillRect(0,0,this->width(), this->height(), QColor(0,255,0));
        break;
    case AZUL:
        painter.fillRect(0,0,this->width(), this->height(), QColor(0,0,255));
        break;
    }
}
