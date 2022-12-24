#include <iostream>
#include <stdlib.h>
#include <math.h>

#include "Figura.h"

#ifndef TRIANGULO_H_INCLUDE
#define TRIANGULO_H_INCLUDE

class Triangulo : public Figura { /*Todo lo publico de la clase figura 
hace parte de todo lo publico de la clase triangulo*/
    private:
        float lado1, lado2, lado3;
    
    public:
        Triangulo(int, float, float, float); /*Primero se inicializan 
        los atributos del constructor figuras*/
        float areaTriangulo();


};

Triangulo:: Triangulo(int nLados, float lado1, float lado2, float lado3): Figura(nLados){
    
    this->lado1 = lado1;
    this->lado2 = lado2;
    this->lado3 = lado3;
}

float Triangulo:: areaTriangulo(){
    float p = (lado1 + lado2 + lado3)/2;
    float area = sqrt(p*(p - lado1) * (p - lado2) * (p - lado3));

    return area;
}

#endif //TRIANGULO_H_INCLUDE