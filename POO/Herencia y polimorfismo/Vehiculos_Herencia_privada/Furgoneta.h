//Herencia protegida

#include <iostream>
#include "Vehiculos.h"

#ifndef FURGONETA_H_INCLUDE
#define FURGONETA_H_INCLUDE

using namespace std;

class Furgoneta : protected Vehiculos{
    private:
        int carga;
    
    public:
        Furgoneta(string, string, string, int);
        int getCarga();
        ~Furgoneta();
        string regresarColor();


};

Furgoneta:: Furgoneta(string marca, string color, string modelo, int carga): Vehiculos(marca, color, modelo){
    this->carga = carga;
}

int Furgoneta:: getCarga(){
    return carga;
}

Furgoneta:: ~Furgoneta(){}

string Furgoneta:: regresarColor(){
    string mensaje = getColor();
    return mensaje;
}

#endif //FURGONETA_H_INCLUDE
