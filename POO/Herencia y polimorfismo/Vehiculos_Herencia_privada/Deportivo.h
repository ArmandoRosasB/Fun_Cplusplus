//Herencia privada

#include <iostream>
#include "Vehiculos.h"

using namespace std;

#ifndef DEPORTIVO_H_INCLUDE
#define DEPORTIVO_H_INCLUDE

class Deportivo : private Vehiculos{
    private:
        int cilindrada;
    public:
        Deportivo(string, string, string, int);
        int getCilindrada();
        string regresarMarca();
        ~Deportivo();


};

Deportivo:: Deportivo(string marca, string color, string  modelo, int cilindrada): Vehiculos(marca, color, modelo){

    this->cilindrada = cilindrada;
}

int Deportivo:: getCilindrada(){
    return cilindrada;
}
string Deportivo:: regresarMarca(){
    string marca = getMarca();
    return marca;
}

Deportivo:: ~Deportivo(){
    
}


#endif //DEPORTIVO_H_INCLUDE