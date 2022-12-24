#include <iostream>
#include "Poligono.h"

using namespace std;

#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo: public Poligono {
    private:
        float base;
        float altura;

    public:
        Rectangulo(float, float);
        float getPerimetro();
        float getArea();

};

Rectangulo:: Rectangulo (float base, float altura){
    this->base = base;
    this->altura = altura;
}


float Rectangulo:: getPerimetro(){
    float perimetro;
    perimetro = (2 * base) + (2 * altura);

    return perimetro;
}

float Rectangulo:: getArea(){
    float area;
    area = base * altura;
    
    return area;
}


#endif //RECTANGULO_H
