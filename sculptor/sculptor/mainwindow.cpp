#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);

    ui->horizontalSliderZ->setMaximum(ui->widget->gridZ);

    ui->horizontalSliderRaio->setMaximum(ui->widget->gridX/2 - 1);

    ui->horizontalSliderRX->setMaximum(ui->widget->gridX/2 - 1);
    ui->horizontalSliderRY->setMaximum(ui->widget->gridY/2 - 1);
    ui->horizontalSliderRZ->setMaximum(ui->widget->gridZ/2 - 1);

    ui->horizontalSliderDimX->setMaximum(ui->widget->gridX - 1);
    ui->horizontalSliderDimY->setMaximum(ui->widget->gridY - 1);
    ui->horizontalSliderDimZ->setMaximum(ui->widget->gridZ - 1);


    connect(ui->horizontalSliderR, SIGNAL(valueChanged(int)), ui->widget, SLOT(setCorR(int)));
    connect(ui->horizontalSliderG, SIGNAL(valueChanged(int)), ui->widget, SLOT(setCorG(int)));
    connect(ui->horizontalSliderB, SIGNAL(valueChanged(int)), ui->widget, SLOT(setCorB(int)));

    connect(ui->pushButtonPutVoxel, SIGNAL(clicked(bool)), this, SLOT(setTypePutVoxel()));
    connect(ui->pushButtonCutVoxel, SIGNAL(clicked(bool)), this, SLOT(setTypeCutVoxel()));
    connect(ui->pushButtonPutSphere, SIGNAL(clicked(bool)), this, SLOT(setTypePutSphere()));
    connect(ui->pushButtonCutSphere, SIGNAL(clicked(bool)), this, SLOT(setTypeCutSphere()));
    connect(ui->pushButtonPutEllipsoid, SIGNAL(clicked(bool)), this, SLOT(setTypePutEllipsoid()));
    connect(ui->pushButtonCutEllipsoid, SIGNAL(clicked(bool)), this, SLOT(setTypeCutEllipsoid()));
    connect(ui->pushButtonPutBox, SIGNAL(clicked(bool)), this, SLOT(setTypePutBox()));
    connect(ui->pushButtonCutBox, SIGNAL(clicked(bool)), this, SLOT(setTypeCutBox()));


    connect(ui->widget, SIGNAL(mouseClickXY(int,int)), ui->widget, SLOT(setXY(int,int)));
    connect(ui->horizontalSliderZ, SIGNAL(valueChanged(int)), ui->widget, SLOT(setZ(int)));

    connect(ui->horizontalSliderRaio, SIGNAL(valueChanged(int)), ui->widget, SLOT(setRadius(int)));

    connect(ui->horizontalSliderRX, SIGNAL(valueChanged(int)), ui->widget, SLOT(setRX(int)));
    connect(ui->horizontalSliderRY, SIGNAL(valueChanged(int)), ui->widget, SLOT(setRY(int)));
    connect(ui->horizontalSliderRZ, SIGNAL(valueChanged(int)), ui->widget, SLOT(setRZ(int)));

    connect(ui->horizontalSliderDimX, SIGNAL(valueChanged(int)), ui->widget, SLOT(setDimX(int)));
    connect(ui->horizontalSliderDimY, SIGNAL(valueChanged(int)), ui->widget, SLOT(setDimY(int)));
    connect(ui->horizontalSliderDimZ, SIGNAL(valueChanged(int)), ui->widget, SLOT(setDimZ(int)));

    connect(ui->pushButtonSave, SIGNAL(clicked(bool)), ui->widget, SLOT(createOFF()));

    connect(ui->pushButtonNew, SIGNAL(clicked(bool)), this, SLOT(setGrid()));

}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::sair(){
    exit(0);
}

void MainWindow::setGrid(){
    ui->widget->gridX = ui->horizontalSliderDimXGrid->value();
    ui->widget->gridY = ui->horizontalSliderDimYGrid->value();
    ui->widget->gridZ = ui->horizontalSliderDimZGrid->value();

    ui->widget->s->~Sculptor();
    ui->widget->s = new Sculptor(ui->widget->gridX, ui->widget->gridY, ui->widget->gridZ);

    ui->horizontalSliderZ->setMaximum(ui->widget->gridZ);

    ui->horizontalSliderRaio->setMaximum(ui->widget->gridX/2);

    ui->horizontalSliderRX->setMaximum(ui->widget->gridX/2);
    ui->horizontalSliderRY->setMaximum(ui->widget->gridY/2);
    ui->horizontalSliderRZ->setMaximum(ui->widget->gridZ/2);

    ui->horizontalSliderDimX->setMaximum(ui->widget->gridX - 1);
    ui->horizontalSliderDimY->setMaximum(ui->widget->gridY - 1);
    ui->horizontalSliderDimZ->setMaximum(ui->widget->gridZ - 1);
    ui->widget->repaint();
}

void MainWindow::setTypePutVoxel(){
    ui->widget->typeShape = 1;
    qDebug() << ui->widget->typeShape;
}

void MainWindow::setTypeCutVoxel(){
    ui->widget->typeShape = 2;
    qDebug() << ui->widget->typeShape;
}

void MainWindow::setTypePutSphere(){
    ui->widget->typeShape = 3;
    qDebug() << ui->widget->typeShape;
}

void MainWindow::setTypeCutSphere(){
    ui->widget->typeShape = 4;
    qDebug() << ui->widget->typeShape;
}

void MainWindow::setTypePutEllipsoid(){
    ui->widget->typeShape = 5;
    qDebug() << ui->widget->typeShape;
}

void MainWindow::setTypeCutEllipsoid(){
    ui->widget->typeShape = 6;
    qDebug() << ui->widget->typeShape;
}

void MainWindow::setTypePutBox(){
    ui->widget->typeShape = 7;
    qDebug() << ui->widget->typeShape;
}

void MainWindow::setTypeCutBox(){
    ui->widget->typeShape = 8;
    qDebug() << ui->widget->typeShape;
}


