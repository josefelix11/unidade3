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
    explicit VisaoXY(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);

    int typeShape;
    int x, y, z;
    int rx, ry, rz;
    int dimX, dimY, dimZ;
    int radius;
    float r, g, b;
private:
    vector<vector<Voxel>> pZ;
    int square;

public slots:
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

private:
    Sculptor *s;

signals:
    void mouseClickXY(int, int);
};

#endif // VISAOXY_H
