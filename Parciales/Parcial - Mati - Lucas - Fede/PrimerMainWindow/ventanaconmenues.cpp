#include "ventanaconmenues.h"
#include "ui_ventanaconmenues.h"
#include <QDebug>
#include <QFileDialog>
#include "imagen.h"
#include <QMessageBox>
#include "login.h"
#include "persona.h"
#include <iostream>
#include <random>
#include <QPalette>
#include <QPainter>


VentanaConMenues::VentanaConMenues(Modo modo ,QWidget *parent): QMainWindow(parent), ui(new Ui::VentanaConMenues)
{
    ui->setupUi(this);

    connect(ui->actionCerrar,SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->pbComparar,SIGNAL(pressed()), this, SLOT(slot_compararImagenes()));
    connect(ui->pbImagen1,SIGNAL(pressed()), this, SLOT(slot_buscarImagen1()));
    connect(ui->pbImagen2,SIGNAL(pressed()), this, SLOT(slot_buscarImagen2()));
    connect(ui->pbValidar,SIGNAL(pressed()), this, SLOT(slot_compararPersona()));
    connect(ui->pbAbrir,SIGNAL(pressed()), this, SLOT(slot_abrirLogin()));

    connect(ui->actionOscuro,SIGNAL(triggered()), this, SLOT(slot_modoOscuro()));
    connect(ui->actionClaro,SIGNAL(triggered()), this, SLOT(slot_modoClaro()));

    if(modo == VentanaConMenues::DARK){
        ui->actionGuardar->setIcon(QIcon(":/recursos/guardar2.png"));
        ui->actionNuevo->setIcon(QIcon(":/recursos/nuevo2.png"));
        this->setStyleSheet("background-color:#757575;");
    }
    else{
        ui->actionGuardar->setIcon(QIcon(":/recursos/guardar.png"));
        ui->actionNuevo->setIcon(QIcon(":/recursos/nuevo.png"));
        this->setStyleSheet("background-color:white;");
    }
}



VentanaConMenues::~VentanaConMenues()
{
    delete ui;
}

void VentanaConMenues::comprobarImagen()
{
    if(ui->leImagen1->text() != "" && ui->leImagen2->text() != ""){
        ui->pbComparar->setEnabled(true);
    }
}

void VentanaConMenues::slot_compararImagenes()
{
    qDebug() << "Entra nasheee";
    Imagen * imagen1 = new Imagen();
    imagen1->load(ui->leImagen1->text());
    Imagen * imagen2 = new Imagen();
    imagen2->load(ui->leImagen2->text());

    if(imagen1->operator<(imagen2)){
        QMessageBox::information(this,"Resultado","Imagen 1 es menor a Imagen 2");
        qDebug() << "imagen1 es menor a imagen2";
    }
    else if(imagen1->operator>(imagen2)){
        QMessageBox::information(this,"Resultado","Imagen 1 es mayor a Imagen 2");
        qDebug() << "imagen1 es mayor a imagen2";
    }
}

void VentanaConMenues::slot_buscarImagen1()
{
    QString file = QFileDialog::getOpenFileName( this, "Abrir", "../", "Imagen (*.png *.jpg)" );
    if(! file.isEmpty()){
        ui->leImagen1->setText(file);
        comprobarImagen();
    }
}

void VentanaConMenues::slot_buscarImagen2()
{
    QString file = QFileDialog::getOpenFileName( this, "Abrir", "../", "Imagen (*.png *.jpg)" );
    if(! file.isEmpty()){
        ui->leImagen2->setText(file);
        comprobarImagen();
    }
}

void VentanaConMenues::slot_compararPersona()
{
    Persona persona1(ui->leUsuarioP1->text(),ui->leApellidoP1->text(), ui->leEdadP1->text().toInt());
    Persona persona2(ui->leUsuarioP2->text(),ui->leApellidoP2->text(), ui->leEdadP2->text().toInt());

    if(persona1 < persona2){
        QMessageBox::information(this,"Resultado",ui->leUsuarioP1->text() + " es menor a " + ui->leUsuarioP2->text());
    }
    else if(persona1 > persona2){
        QMessageBox::information(this,"Resultado",ui->leUsuarioP1->text() + " es mayor a " + ui->leUsuarioP2->text());
    }

}

void VentanaConMenues::slot_abrirLogin()
{
    Login * login1 = new Login();
    login1->resize(100+rand()%(1000-100),100+rand()%(1000-100));
    login1->setWindowTitle("Ventanta 1");
    login1->show();
    Login * login2 = new Login();
    login2->resize(100+rand()%(1000-100),100+rand()%(1000-100));
    login2->setWindowTitle("Ventanta 2");
    login2->show();

    if(login1->operator<(login2)){
        QMessageBox::information(this,"Resultado","Ventanta 1 es menor a Ventanta 2");
    }
    else if(login1->operator>(login2)){
        QMessageBox::information(this,"Resultado","Ventanta 1 es mayor a Ventanta 2");
    }
}

void VentanaConMenues::slot_modoOscuro()
{
    qDebug() << "Modo oscuro";
    ui->actionGuardar->setIcon(QIcon(":/recursos/guardar2.png"));
    ui->actionNuevo->setIcon(QIcon(":/recursos/nuevo2.png"));

    this->setStyleSheet("background-color:#757575;");
}

void VentanaConMenues::slot_modoClaro()
{
    qDebug() << "Modo claro";
    ui->actionGuardar->setIcon(QIcon(":/recursos/guardar.png"));
    ui->actionNuevo->setIcon(QIcon(":/recursos/nuevo.png"));
    this->setStyleSheet("background-color:white;");
}



