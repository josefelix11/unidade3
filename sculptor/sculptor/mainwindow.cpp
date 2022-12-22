#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);

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

}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::sair(){
    exit(0);
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


