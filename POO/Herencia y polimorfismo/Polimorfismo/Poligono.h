#include <iostream>

using namespace std;


#ifndef POLIGONO_H
#define POLIGONO_H

class Poligono{
    public:
        virtual float getPerimetro() = 0;
        virtual float getArea() = 0;


};

#endif  //POLIGONO_H