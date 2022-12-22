#include "sculptor.h"
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

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
    delete v[0][0];
    delete v[0];
    delete v;
}

void Sculptor::setColor(float r, float g, float b, float alpha){
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
    v[x][y][z].r = r;
    v[x][y][z].g = g;
    v[x][y][z].b = b;
    v[x][y][z].a = a;
    v[x][y][z].isOn = true;
}

void Sculptor::cutVoxel(int x, int y, int z){
    v[x][y][z].isOn = false;
}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1){
    for(int x = x0; x < x1; x++){
        for(int y = y0; y < y1; y++){
            for(int z = z0; z < z1; z++){
                putVoxel(x,y,z);
            }
        }
    }
}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1){
    for(int x = x0; x < x1; x++){
        for(int y = y0; y < y1; y++){
            for(int z = z0; z < z1; z++){
                cutVoxel(x,y,z);
            }
        }
    }
}

void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius){
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
