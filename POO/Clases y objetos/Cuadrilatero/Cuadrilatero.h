#include <iostream>

#ifndef CUADRILATERO_H_INCLUDE
#define CUADRILATERO_H_INCLUDE

class Cuadrilatero{
    private:
        float lado1;
        float lado2;
    public:
        Cuadrilatero(float, float);
        Cuadrilatero(float);
        float obtenerPerimetro();
        float obtenerArea();
};

Cuadrilatero:: Cuadrilatero(float lado1, float lado2){
    this->lado1 = lado1;
    this->lado2 = lado2;
}

Cuadrilatero:: Cuadrilatero(float lado1){
    this->lado1 = this->lado2 = lado1;
}

float Cuadrilatero:: obtenerPerimetro(){
    float perimetro;
    perimetro = (lado1 * 2) + (lado2 * 2);
    
    return perimetro;
}

float Cuadrilatero:: obtenerArea(){
    float area;
    area = lado1 * lado2;

    return area;
}


#endif //CUADRILATERO_H_INCLUDE