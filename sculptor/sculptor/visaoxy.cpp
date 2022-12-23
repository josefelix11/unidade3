#include "sculptor.h"
#include "visaoxy.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QMouseEvent>
#include <QDebug>


VisaoXY::VisaoXY(QWidget *parent) : QWidget{parent}{
/**
 * @brief Construtor da classe VisaoXY
 * @param parent
 * @details O construtor da classe VisaoXY é responsável por criar a janela principal do programa, onde é possível desenhar a escultura.
 * @details Os valores iniciais dos parâmetros da escultura são definidos aqui.
*/

    gridX = 30; gridY = 30; gridZ = 30;
    s = new Sculptor(gridX, gridY, gridZ);
    typeShape = 1;
    x = 0; y = 0; z = 0;
    r = 0.0; g = 0.0; b = 0.0;
    rx = 0; ry = 0; rz = 0;
    dimX = 0; dimY = 0; dimZ = 0;
    radius = 0;
}

void VisaoXY::paintEvent(QPaintEvent *event){

/**
 * @brief paintEvent
 * @param event
 * @details Essa função é responsável por desenhar a escultura na janela principal do programa.
 * @details A função é chamada toda vez que há uma mudança na escultura.
*/



    QPainter painter(this);
    QBrush brush;
    QPen pen;

    int nV = gridX;
    int nH = gridY;

    pZ = s->sliceOfZ(z);

    brush.setColor(QColor(211,211,211));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(0,0,0));
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0,0,width(),height());

    pen.setWidth(1);
    painter.setPen(pen);

    for(int i = 0; i < nH; i++){
        painter.drawLine(0, i*height()/nH, width(), i*height()/nH);
    }
    for(int i = 0; i < nV; i++){
        painter.drawLine(i*width()/nV, 0, i*width()/nV, height());
    }
    for(int i = 0; i < nH; i++){
        for(int j = 0; j < nV; j++){
            if(pZ[i][j].isOn){
                brush.setColor(QColor(pZ[i][j].r*255,pZ[i][j].g*255,pZ[i][j].b*255));
                brush.setStyle(Qt::SolidPattern);
                qDebug()<<"r: "<<pZ[i][j].r<<" g: "<<pZ[i][j].g<<" b: "<<pZ[i][j].b;
                painter.setBrush(brush);
                painter.drawRect(i*width()/nV,j*height()/nH,width()/nV, height()/nH);
            }
        }
    }
}

void VisaoXY::mousePressEvent(QMouseEvent *event){
/**
 * @brief mousePressEvent
 * @param event
 * @details Essa função é responsável por receber os eventos de clique do mouse.
 * @details A função é chamada toda vez que o usuário clica com o botão esquerdo do mouse.
 * @details A função é responsável por chamar a função createShape, que é responsável por criar a forma desejada.
 * @details A função também é responsável por chamar a função repaint, que é responsável por redesenhar a escultura na janela principal do programa.
 * @details A função também é responsável por chamar a função setXY, que é responsável por definir as coordenadas x e y da forma desejada.
 * @details A função também é responsável por chamar a função setZ, que é responsável por definir a coordenada z da forma desejada.
 * @details A função também é responsável por chamar a função setRadius, que é responsável por definir o raio da forma desejada.
 * @details A função também é responsável por chamar a função setColor, que é responsável por definir a cor da forma desejada.
 * @details A função também é responsável por chamar a função setDim, que é responsável por definir as dimensões da forma desejada.
 * @details A função também é responsável por chamar a função setRx, que é responsável por definir o valor de rx da forma desejada.
 * @details A função também é responsável por chamar a função setRy, que é responsável por definir o valor de ry da forma desejada.
 * @details A função também é responsável por chamar a função setRz, que é responsável por definir o valor de rz da forma desejada.
 * @details A função também é responsável por chamar a função setDimX, que é responsável por definir o valor de dimX da forma desejada.
*/

    if(event->button() == Qt::LeftButton ){
        emit mouseClickXY(event->x(), event->y());

        leftButtonPressed = true;

        VisaoXY::createShape(typeShape);
        repaint();
    }
}

void VisaoXY::mouseReleaseEvent(QMouseEvent *event){
    if(!(event->button() == Qt::LeftButton)){
        leftButtonPressed = false;
    }
}

void VisaoXY::mouseMoveEvent(QMouseEvent *event){
    if(leftButtonPressed){
        emit mouseClickXY(event->x(), event->y());

        VisaoXY::createShape(typeShape);
        repaint();
    }
}

void VisaoXY::setXY(int X, int Y){
    x = (X * gridX)/width();
    y = (Y * gridY)/height();
    qDebug() << "X = "<< x<< "Y = "<< y;
}

void VisaoXY::setZ(int Z){
    z = Z;
    repaint();
    qDebug()<<"z: "<<z;
}

void VisaoXY::setRadius(int _radius){
    radius = _radius;
    qDebug()<<"Radius: "<<radius;
}

void VisaoXY::setRX(int _rx){
    rx = _rx;
    qDebug()<<"rx: "<<_rx;
}

void VisaoXY::setRY(int _ry){
    ry = _ry;
    qDebug()<<"ry: "<<_ry;
}

void VisaoXY::setRZ(int _rz){
    rz = _rz;
    qDebug()<<"rx: "<<_rz;
}

void VisaoXY::setDimX(int _dimX){
    dimX = _dimX;
    qDebug()<<"dimX: "<<_dimX;
}

void VisaoXY::setDimY(int _dimY){
    dimY = _dimY;
    qDebug()<<"dimY: "<<_dimY;
}

void VisaoXY::setDimZ(int _dimZ){
    dimZ = _dimZ;
    qDebug()<<"dimZ: "<<_dimZ;
}

void VisaoXY::setCorR(int _r){
    r = _r/255.0;
    s->setColor(r, g, b, 1.0);
}
void VisaoXY::setCorG(int _g){
    g = _g/255.0;
    s->setColor(r, g, b, 1.0);
}
void VisaoXY::setCorB(int _b){
    b = _b/255.0;
    s->setColor(r, g, b, 1.0);
}

void VisaoXY::createShape(int type){
    switch (type) {
        case 1:
            s->putVoxel(x,y,z);
            break;
        case 2:
            s->cutVoxel(x,y,z);
            break;
        case 3:
            s->putSphere(x, y, z, radius);
            break;
        case 4:
            s->cutSphere(x, y, z, radius);
            break;
        case 5:
            s->putEllipsoid(x, y, z, rx, ry, rz);
            break;
        case 6:
            s->cutEllipsoid(x, y, z, rx, ry, rz);
            break;
        case 7:
            s->putBox(x, x+dimX, y, y+dimY, z, z+dimZ);
            break;
        case 8:
            s->cutBox(x, x+dimX, y, y+dimY, z, z+dimZ);
            break;
    }
}

void VisaoXY::createOFF(){
    /**
     * @brief s
     * @details A função é responsável por criar um arquivo .off, que é o formato de arquivo utilizado para salvar a escultura.
     * @details A função também é responsável por chamar a função writeOFF, que é responsável por escrever no arquivo .off.
    */
    s->writeOFF("C:/Users/Jose Felix/Documents/git/unidade3/sculptor/sculptor/docs/Visao.off");
    qDebug()<<"Criou off, ou deveria ter criado...";
}
