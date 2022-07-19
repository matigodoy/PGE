#include "sublime.h"
#include "ui_sublime.h"

Sublime::Sublime(Color color, QWidget *parent) : QMainWindow(parent), ui(new Ui::Sublime)
{
    ui->setupUi(this);

    connect(ui->actionGuardar,SIGNAL(triggered()), this, SLOT(slot_guardar()));
    connect(ui->actionCerra,SIGNAL(triggered()), this, SLOT(close()));

    if(color == DARK){
        ui->actionAbrir->setIcon(QIcon(":/recursos/iconodark.png"));
        //SE SETEAN LOS ICONOS
    }
    else if(color == CLASSIC) {
        //Sete alos otros iconos
    }
}

Sublime::~Sublime()
{
    delete ui;
}

void Sublime::slot_guardar()
{
    qDebug() << "Guardar";
}
