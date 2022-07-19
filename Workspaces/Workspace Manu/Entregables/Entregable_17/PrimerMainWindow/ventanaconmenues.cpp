#include "ventanaconmenues.h"
#include "ui_ventanaconmenues.h"
#include <QDebug>

VentanaConMenues::VentanaConMenues(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::VentanaConMenues)
{
    ui->setupUi(this);

    connect(ui->actionGuardar,SIGNAL(triggered()), this, SLOT(slot_guardar()));
    connect(ui->actionCerrar,SIGNAL(triggered()), this, SLOT(close()));

}

VentanaConMenues::~VentanaConMenues()
{
    delete ui;
}

void VentanaConMenues::slot_guardar()
{
    qDebug() << "Guardar";
}

