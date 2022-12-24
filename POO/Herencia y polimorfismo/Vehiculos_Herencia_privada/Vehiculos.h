#include <iostream>

using namespace std;

#ifndef VEHICULOS_H_INCLUDE
#define VEHICULOS_H_INCLUDE


class Vehiculos {
    private:
        string marca;
        string color;
        
    protected:
        string modelo;
        
        string getModelo();

    public:
        Vehiculos(string, string, string);
        string getMarca();
        string getColor();
        void setColor(string);

};

Vehiculos:: Vehiculos(string marca, string color, string modelo){
    this->marca = marca;
    this->color = color;
    this->modelo = modelo;
}

string Vehiculos:: getModelo(){
    return modelo;
}

string Vehiculos:: getMarca(){
    return marca;
}

string Vehiculos:: getColor(){
    return color;
}

void Vehiculos:: setColor(string color){
    this->color = color;
}
#endif //VEHICULOS_H_INCLUDE