#ifndef SCULPTOR_H
#define SCULPTOR_H

#include <iostream>
#include <vector>

using namespace std;

struct Voxel {
    float r,g,b;
    float a;
    bool isOn;
};

class Sculptor {
private:
    /**
     * @brief Sculptor
     * @details Essa classe é responsável por criar a escultura.
     * 
    */
    Voxel ***v;
    int nx,ny,nz;
    float r,g,b,a;

public:

/**
 * @brief Construtor da classe Sculptor
 * @param _nx
 * @param _ny
 * @param _nz
 * @details O construtor da classe Sculptor é responsável por criar a escultura.
 * ~Sculptor é o destrutor da classe Sculptor
 * @details setColor() é um método que é responsável por definir a cor da escultura.
 * @details putVoxel() é um método que é responsável por desenhar um voxel.
 * @details cutVoxel() é um método que é responsável por apagar um voxel.
 * @details putBox() é um método que é responsável por desenhar uma caixa.
 * @details cutBox() é um método que é responsável por apagar uma caixa.
 * @details putSphere() é um método que é responsável por desenhar uma esfera.
 * @details cutSphere() é um método que é responsável por apagar uma esfera.
 * @details putEllipsoid() é um método que é responsável por desenhar uma elipse.
 * @details cutEllipsoid() é um método que é responsável por apagar uma elipse.
 * @details writeOFF() é um método que é responsável por escrever o arquivo OFF.
 * 
*/

    Sculptor(int _nx, int _ny, int _nz);
    ~Sculptor();
    void setColor(float r, float g, float b, float a);
    void putVoxel(int x, int y, int z);
    void cutVoxel(int x, int y, int z);
    void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
    void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    void putSphere(int xcenter, int ycenter, int zcenter, int radius);
    void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
    void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    void writeOFF(const char* filename);
    vector<vector<Voxel>> sliceOfZ(int z = 0);
};

#endif
