#ifndef VISAOXY_H
#define VISAOXY_H

#include <QWidget>
#include "sculptor.h"
#include <iostream>

using namespace std;

class VisaoXY : public QWidget
{
    Q_OBJECT
public:

    /**
     * @brief Construtor da classe VisaoXY
     * @param parent
     * @details O construtor da classe VisaoXY é responsável por criar a janela principal do programa, onde é possível desenhar a escultura.
    */

    explicit VisaoXY(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

    int typeShape;
    int gridX, gridY, gridZ;
    int x, y, z;
    int rx, ry, rz;
    int dimX, dimY, dimZ;
    int radius;
    float r, g, b;
    bool leftButtonPressed;

    Sculptor *s;
private:
/**
 * @brief pZ
 * @details Essa variável é responsável por armazenar os voxels da escultura.
*/
    vector<vector<Voxel>> pZ;
    int square;

public slots:
    /// @brief Esses métodos são responsáveis por armazenar os valores dos parâmetros da escultura.
    
    void setXY(int X, int Y);
    void setZ(int Z);
    void setRadius(int _radius);
    void setRX(int _rx);
    void setRY(int _ry);
    void setRZ(int _rz);
    void setDimX(int _dimX);
    void setDimY(int _dimY);
    void setDimZ(int _dimZ);
    void setCorR(int _r);
    void setCorG(int _g);
    void setCorB(int _b);

    void createShape(int type);
    void createOFF();

signals:
    void mouseClickXY(int, int);
};

#endif // VISAOXY_H
