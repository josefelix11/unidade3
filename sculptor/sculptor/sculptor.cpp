#include "sculptor.h"
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

/**
 * @brief Construtor da classe Sculptor
 * @param _nx
 * @param _ny
 * @param _nz
 * @details O construtor da classe Sculptor é responsável por criar a matriz 3D que representa a escultura.
*/

Sculptor::Sculptor(int _nx, int _ny, int _nz) {
    nx = _nx;
    ny = _ny;
    nz = _nz;

    v = new Voxel**[nx];
    v[0] = new Voxel*[nx*ny];
    v[0][0] = new Voxel[nx*ny*nz];

    for(int i = 1; i < nz; i++)
        v[i] = v[i-1] + ny;

    for(int i = 1; i < nz*ny; i++)
        v[0][i] = v[0][i-1] + nx;

    for(int x = 0; x < nx; x++){
        for(int y = 0; y < ny; y++){
            for(int z = 0; z < nz; z++){
                v[x][y][z].isOn = false;
            }
        }
    }
}

Sculptor::~Sculptor(){
    /**
     * @brief Destrutor da classe Sculptor
     * @details O destrutor da classe Sculptor é responsável por deletar a matriz 3D que representa a escultura.
     * @details delete v[0][0] deleta a matriz 3D.
     * @details delete v[0] deleta a matriz 2D.
     * @details delete v deleta a matriz 1D.
    */

    delete v[0][0];
    delete v[0];
    delete v;
}

void Sculptor::setColor(float r, float g, float b, float alpha){
    /// @brief setColor
    /// @param r 
    /// @param g 
    /// @param b 
    /// @param alpha 

    if(r >= 0 && r <= 1)
        this -> r = r;
    if(g >= 0 && g <= 1)
        this -> g = g;
    if(b >= 0 && b <= 1)
        this -> b = b;
    if(alpha >= 0 && alpha <= 1)
        a = alpha;
    std::cout<<"R: "<<r<<" G: "<<g<<" B: "<<b;
}

void Sculptor::putVoxel(int x, int y, int z){
/**
 * @brief putVoxel
 * @param x
 * @param y
 * @param z
 * @details Essa função é responsável por ativar o voxel na posição (x,y,z) e atribuir a ele a cor atual de desenho.
 * @details A função também verifica se a posição (x,y,z) está dentro dos limites da escultura.
 * @details Se estiver, o voxel é ativado e recebe a cor atual de desenho.
*/

    v[x][y][z].r = r;
    v[x][y][z].g = g;
    v[x][y][z].b = b;
    v[x][y][z].a = a;
    v[x][y][z].isOn = true;
}

void Sculptor::cutVoxel(int x, int y, int z){
/**
 * @brief cutVoxel
 * @param x
 * @param y
 * @param z
 * @details Essa função é responsável por desativar o voxel na posição (x,y,z).
 * 
*/
    v[x][y][z].isOn = false;
}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1){

    /**
     * @brief putBox
     * @param x0
     * @param x1
     * @param y0
     * @param y1
     * @param z0
     * @param z1
     * @details Essa função é responsável por ativar todos os voxels que satisfazem às equações:
     * @details x0 <= x <= x1
     * @details y0 <= y <= y1
     * @details z0 <= z <= z1
     * @details e atribuir a eles a cor atual de desenho.
     * @details A função também verifica se a posição (x,y,z) está dentro dos limites da escultura.
     * @details Se estiver, o voxel é ativado e recebe a cor atual de desenho.
     * @details A função também verifica se a posição (x,y,z) está dentro dos limites da escultura.
     * @details Se estiver, o voxel é ativado e recebe a cor atual de desenho.
    */


    for(int x = x0; x < x1; x++){
        for(int y = y0; y < y1; y++){
            for(int z = z0; z < z1; z++){
                putVoxel(x,y,z);
            }
        }
    }
}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1){

/**
 * @brief cutBox
 * @param x0
 * @param x1
 * @param y0
 * @param y1
 * @param z0
 * @param z1
 * @details Essa função é responsável por desativar todos os voxels que satisfazem às equações:
 * @details x0 <= x <= x1
 * @details y0 <= y <= y1
 * @details z0 <= z <= z1
*/

    for(int x = x0; x < x1; x++){
        for(int y = y0; y < y1; y++){
            for(int z = z0; z < z1; z++){
                cutVoxel(x,y,z);
            }
        }
    }
}

void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius){
/**
 * @brief putSphere
 * @param xcenter
 * @param ycenter
 * @param zcenter
 * @param radius
 * @details Essa função é responsável por ativar todos os voxels que satisfazem à equação:
 * @details (x-xcenter)^2 + (y-ycenter)^2 + (z-zcenter)^2 <= radius^2
 * @details e atribuir a eles a cor atual de desenho.
*/


    float calcX, calcY, calcZ;
    for(int x = 0; x < nx; x++){
        for(int y = 0; y < ny; y++){
            for(int z = 0; z < nz; z++){
                calcX = pow(x-xcenter,2);
                calcY = pow(y-ycenter,2);
                calcZ = pow(z-zcenter,2);

                if((calcX + calcY + calcZ) <= pow(radius,2)) putVoxel(x,y,z);
            }
        }
    }
}

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius){
/**
 * @brief cutSphere
 * @param xcenter
 * @param ycenter
 * @param zcenter
 * @param radius
*/



    float calcX, calcY, calcZ;
    for(int x = 0; x < nx; x++){
        for(int y = 0; y < ny; y++){
            for(int z = 0; z < nz; z++){
                calcX = pow(x-xcenter,2);
                calcY = pow(y-ycenter,2);
                calcZ = pow(z-zcenter,2);

                if((calcX + calcY + calcZ) <= pow(radius,2)) cutVoxel(x,y,z);
            }
        }
    }
}

void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){

/**
 * @brief putEllipsoid
 * @param xcenter
 * @param ycenter
 * @param zcenter
 * @param rx
 * @param ry    
 * @param rz
*/


    float calcX, calcY, calcZ;
    for(int x = 0; x < nx; x++){
        for(int y = 0; y < ny; y++){
            for(int z = 0; z < nz; z++){
                calcX = pow(x-xcenter,2) / pow(rx,2);
                calcY = pow(y-ycenter,2) / pow(ry,2);
                calcZ = pow(z-zcenter,2) / pow(rz,2);

                if((calcX + calcY + calcZ) <= 1) putVoxel(x,y,z);
            }
        }
    }
}

void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){
    
    /**
     * @brief cutEllipsoid      
     * @param xcenter
     * @param ycenter
     *  @param zcenter
     * @param rx
     * @param ry
    */
    
    float calcX, calcY, calcZ;
    for(int x = 0; x < nx; x++){
        for(int y = 0; y < ny; y++){
            for(int z = 0; z < nz; z++){
                calcX = pow(x-xcenter,2) / pow(rx,2);
                calcY = pow(y-ycenter,2) / pow(ry,2);
                calcZ = pow(z-zcenter,2) / pow(rz,2);

                if((calcX + calcY + calcZ) <= 1) cutVoxel(x,y,z);
            }
        }
    }
}

void Sculptor::writeOFF(const char* filename){
/** 
 * @brief writeOFF
 * @param filename
 * @details Essa função é responsável por escrever o arquivo OFF no disco.
 * @details O arquivo OFF deve conter as informações do formato OFF, seguidas das coordenadas de todos os vértices ativos e, por fim, as faces (triângulos) correspondentes a cada voxel ativo.
*/

    std::ofstream file;

    fixed(file);

    int faces = 0;
    int vertices = 0;
    int contP = 0;

    file.open(filename);

    if(!file.is_open()){
        exit(1);
    }

    file<<"OFF"<<std::endl;

    for (int x = 0; x < nx; x++){
        for (int y = 0; y < ny; y++){
            for (int z = 0; z < nz; z++){
                if (v[x][y][z].isOn){
                    faces += 6;
                    vertices += 8;
                }
            }
        }
    }

    file<<vertices<<" "<<faces<<" "<<0<<std::endl;

    for (int x = 0; x < nx; x++){
        for (int y = 0; y < ny; y++){
            for (int z = 0; z < nz; z++){
                if (v[x][y][z].isOn){
                    file<<(x - 0.5)<<" "<<(y + 0.5)<<" "<<(z - 0.5)<<std::endl;
                    file<<(x - 0.5)<<" "<<(y - 0.5)<<" "<<(z - 0.5)<<std::endl;
                    file<<(x + 0.5)<<" "<<(y - 0.5)<<" "<<(z - 0.5)<<std::endl;
                    file<<(x + 0.5)<<" "<<(y + 0.5)<<" "<<(z - 0.5)<<std::endl;
                    file<<(x - 0.5)<<" "<<(y + 0.5)<<" "<<(z + 0.5)<<std::endl;
                    file<<(x - 0.5)<<" "<<(y - 0.5)<<" "<<(z + 0.5)<<std::endl;
                    file<<(x + 0.5)<<" "<<(y - 0.5)<<" "<<(z + 0.5)<<std::endl;
                    file<<(x + 0.5)<<" "<<(y + 0.5)<<" "<<(z + 0.5)<<std::endl;
                }
            }
        }
    }

    for (int x = 0; x < nx; x++){
        for (int y = 0; y < ny; y++){
            for (int z = 0; z < nz; z++){
                if (v[x][y][z].isOn){
                    file<<4<<" "<<contP + 0<<" "<<contP + 3<<" "<<contP + 2<<" "<<contP + 1<<" "<<v[x][y][z].r<<" "<<v[x][y][z].g<<" "<<v[x][y][z].b<<" "<<v[x][y][z].a<<std::endl;
                    file<<4<<" "<<contP + 4<<" "<<contP + 5<<" "<<contP + 6<<" "<<contP + 7<<" "<<v[x][y][z].r<<" "<<v[x][y][z].g<<" "<<v[x][y][z].b<<" "<<v[x][y][z].a<<std::endl;
                    file<<4<<" "<<contP + 0<<" "<<contP + 1<<" "<<contP + 5<<" "<<contP + 4<<" "<<v[x][y][z].r<<" "<<v[x][y][z].g<<" "<<v[x][y][z].b<<" "<<v[x][y][z].a<<std::endl;
                    file<<4<<" "<<contP + 0<<" "<<contP + 4<<" "<<contP + 7<<" "<<contP + 3<<" "<<v[x][y][z].r<<" "<<v[x][y][z].g<<" "<<v[x][y][z].b<<" "<<v[x][y][z].a<<std::endl;
                    file<<4<<" "<<contP + 3<<" "<<contP + 7<<" "<<contP + 6<<" "<<contP + 2<<" "<<v[x][y][z].r<<" "<<v[x][y][z].g<<" "<<v[x][y][z].b<<" "<<v[x][y][z].a<<std::endl;
                    file<<4<<" "<<contP + 1<<" "<<contP + 2<<" "<<contP + 6<<" "<<contP + 5<<" "<<v[x][y][z].r<<" "<<v[x][y][z].g<<" "<<v[x][y][z].b<<" "<<v[x][y][z].a<<std::endl;
                    contP += 8;
                }
            }
        }
    }

    file.close();
}

vector<vector<Voxel> > Sculptor::sliceOfZ(int z){
    vector<vector<Voxel>> m;
    vector<Voxel> l;

    l.resize(ny);

    for(int x = 0; x < nx; x++){
        for(int y = 0; y < ny; y++){
            l[y].isOn = v[x][y][z].isOn;
            l[y].r = v[x][y][z].r;
            l[y].g = v[x][y][z].g;
            l[y].b = v[x][y][z].b;
            l[y].a = v[x][y][z].a;
        }
        m.push_back(l);
    }
    l.clear();
    return m;
}
