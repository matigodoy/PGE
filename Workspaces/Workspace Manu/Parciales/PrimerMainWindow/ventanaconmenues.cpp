#include "ventanaconmenues.h"
#include "ui_ventanaconmenues.h"
#include <QDebug>

VentanaConMenues::VentanaConMenues(Modo modo ,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::VentanaConMenues)
{
    ui->setupUi(this);

    connect(ui->actionGuardar,SIGNAL(triggered()), this, SLOT(slot_guardar()));
    connect(ui->actionCerrar,SIGNAL(triggered()), this, SLOT(close()));

    if(modo == VentanaConMenues::DARK){
        ui->actionGuardar->setIcon(QIcon(":/recursos/save_galleria.png"));
        ui->actionNuevo->setIcon(QIcon(":/recursos/new_galleria.png"));
        setStyleSheet("background-color:grey;");
        setAutoFillBackground( true );

    }
    else{
        if(modo == VentanaConMenues::CLASSIC){
        ui->actionGuardar->setIcon(QIcon(":/recursos/save_sublime.png"));
        ui->actionNuevo->setIcon(QIcon(":/recursos/new_sublime.png"));
        setStyleSheet("background-color:lightblue;");
        setAutoFillBackground( true );

        }
    }

}



VentanaConMenues::~VentanaConMenues()
{
    delete ui;
}

void VentanaConMenues::slot_guardar()
{
    qDebug() << "Guardar";
}




