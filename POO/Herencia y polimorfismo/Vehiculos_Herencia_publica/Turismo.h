#include <iostream>
#include "Vehiculos.h"


#ifndef TURISMO_H_INCLUDE
#define TURISMO_H_INCLUDE

class Turismo : public Vehiculos{
    private:
        int numeroPuertas;
    
    public:
        Turismo(string, string, string, int);
        int getNumeroPuertas();
        ~Turismo();
        string _getModelo();

};

Turismo:: Turismo(string marca, string color, string modelo, int numeroPuertas) : Vehiculos(marca, color, modelo){
    this->numeroPuertas = numeroPuertas;
}

int Turismo:: getNumeroPuertas(){
    return numeroPuertas;
}
Turismo:: ~Turismo(){

}

string Turismo:: _getModelo(){
    return modelo;
}

#endif //TURISMO_H_INCLUDE