#include <iostream>
#include "Felino.h"

using namespace std;

#ifndef GATODOMESTICO_H
#define GATODOMESTICO_H

class GatoDomestico: public Felino {
    protected:
        string nombreDuenio;
    public:
        GatoDomestico(int, string, string, string);
        void imprimirDieta();
        void setNombreDuenio(string);
        string getNombreDuenio();

};

GatoDomestico:: GatoDomestico(int anioNacimiento, string lugarNacimiento, string raza, string nombreDuenio): Felino(anioNacimiento, lugarNacimiento, raza){
    this->nombreDuenio = nombreDuenio;
}

void GatoDomestico:: imprimirDieta(){
    cout<<"EL gato se alimenta de Whiskas"<<endl;
}

void GatoDomestico:: setNombreDuenio(string nombreDuenio){
    this->nombreDuenio = nombreDuenio;
}

string GatoDomestico:: getNombreDuenio(){
    return nombreDuenio;
}

#endif //GATODOMESTICO_H