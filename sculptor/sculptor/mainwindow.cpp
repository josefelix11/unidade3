#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <QDebug>


/**
 * @brief MainWindow::MainWindow
 * @param parent
 * @details Construtor da classe MainWindow, onde são inicializados os componentes da interface gráfica
 * e são feitas as conexões entre os sinais e os slots.
*/


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);

/**
 * @brief Conexões entre os sinais e os slots
 * @details Aqui são feitas as conexões entre os sinais e os slots, onde os sinais são os eventos
 * gerados pelos componentes da interface gráfica e os slots são os métodos que serão executados
 * quando esses eventos ocorrerem.
 * @details Os métodos que são chamados quando os eventos ocorrem estão definidos na classe Widget,
 * que é a classe que representa a área de desenho da interface gráfica.
 * @details Os métodos que são chamados quando os eventos ocorrem estão definidos na classe Widget,
*/
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
    /**
     * @brief Destrutor da classe MainWindow
     * @details Aqui é deletado o objeto ui, que é o objeto que representa a interface gráfica.
    */
    delete ui;
}

void MainWindow::sair(){
    /**
     * @brief Método que fecha a aplicação
     * @details Aqui é fechada a aplicação.
    */
    exit(0);
}

void MainWindow::setGrid(){
/**
 * @brief Método que define o tamanho da grade
 * @details Aqui é definido o tamanho da grade, que é o tamanho da matriz 3D que representa a escultura.
 * @details O tamanho da grade é definido pelos valores dos sliders de dimensão da grade.
*/

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
    /**
     * @brief Método que define o tipo de forma a ser desenhada
     * @details Aqui é definido o tipo de forma a ser desenhada, que é o tipo de forma que será desenhada na escultura.
     * @details O tipo de forma é definido pelos botões de desenho de formas.
     * setTypePutVoxel() e setTypeCutVoxel() são métodos que definem o tipo de forma a ser desenhada.
    */
    ui->widget->typeShape = 1;
    qDebug() << ui->widget->typeShape;
}

void MainWindow::setTypeCutVoxel(){
    /**
     * @brief Método que define o tipo de forma a ser desenhada
     * @details Aqui é definido o tipo de forma a ser desenhada, que é o tipo de forma que será desenhada na escultura.
     * setTypePutVoxel() e setTypeCutVoxel() são métodos que definem o tipo de forma a ser desenhada.
    */
    ui->widget->typeShape = 2;
    qDebug() << ui->widget->typeShape;
}

void MainWindow::setTypePutSphere(){
    /**
     * @brief Método que define o tipo de forma a ser desenhada
     * @details Aqui é definido o tipo de forma a ser desenhada, que é o tipo de forma que será desenhada na escultura.
     * setTypePutSphere() e setTypeCutSphere() são métodos que definem o tipo de forma a ser desenhada.
    */
    ui->widget->typeShape = 3;
    qDebug() << ui->widget->typeShape;
}

void MainWindow::setTypeCutSphere(){
    /**
     * @brief Método que define o tipo de forma a ser desenhada
     * @details Aqui é definido o tipo de forma a ser desenhada, que é o tipo de forma que será desenhada na escultura.
     * setTypePutSphere() e setTypeCutSphere() são métodos que definem o tipo de forma a ser desenhada.
    */
    ui->widget->typeShape = 4;
    qDebug() << ui->widget->typeShape;
}

void MainWindow::setTypePutEllipsoid(){
    /**
     * @brief Método que define o tipo de forma a ser desenhada 
     * @details Aqui é definido o tipo de forma a ser desenhada, que é o tipo de forma que será desenhada na escultura.
     * setTypePutEllipsoid() e setTypeCutEllipsoid() são métodos que definem o tipo de forma a ser desenhada.
     */    
    ui->widget->typeShape = 5;
    qDebug() << ui->widget->typeShape;
}

void MainWindow::setTypeCutEllipsoid(){
    /**
     * @brief Método que define o tipo de forma a ser desenhada
     * @details Aqui é definido o tipo de forma a ser desenhada, que é o tipo de forma que será desenhada na escultura.
     * setTypePutEllipsoid() e setTypeCutEllipsoid() são métodos que definem o tipo de forma a ser desenhada.
    */
    ui->widget->typeShape = 6;
    qDebug() << ui->widget->typeShape;
}

void MainWindow::setTypePutBox(){
    /**
     * @brief Método que define o tipo de forma a ser desenhada
     * @details Aqui é definido o tipo de forma a ser desenhada, que é o tipo de forma que será desenhada na escultura.
     * setTypePutBox() e setTypeCutBox() são métodos que definem o tipo de forma a ser desenhada.
    */
    ui->widget->typeShape = 7;
    qDebug() << ui->widget->typeShape;
}

void MainWindow::setTypeCutBox(){
    /**
     * @brief Método que define o tipo de forma a ser desenhada
     * @details Aqui é definido o tipo de forma a ser desenhada, que é o tipo de forma que será desenhada na escultura.
     * setTypePutBox() e setTypeCutBox() são métodos que definem o tipo de forma a ser desenhada.
    */
    ui->widget->typeShape = 8;
    qDebug() << ui->widget->typeShape;
}


