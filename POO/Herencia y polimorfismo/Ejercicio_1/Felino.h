#include <iostream>
#include "Mamifero.h"

using namespace std;

#ifndef FELINO_H
#define FELINO_H


class Felino : public Mamifero{
    protected:
        string nombreCirco;
    public:
        Felino(int, string ,string, string);
        Felino(int, string, string);
        void imprimirDieta();
        void setNombreCirco(string);
        string getNombreCirco();

};

Felino:: Felino(int anioNacimiento, string lugarNacimiento, string raza, string nombreCirco): Mamifero(anioNacimiento, lugarNacimiento, raza)
{
    this->nombreCirco = nombreCirco;
}

Felino:: Felino(int anioNacimiento, string lugarNacimiento, string raza): Mamifero(anioNacimiento, lugarNacimiento, raza) {}

void Felino:: imprimirDieta(){
    cout<<"El felino se alimenta de carne cruda"<<endl;
}

void Felino:: setNombreCirco(string nombreCirco){
    this->nombreCirco = nombreCirco;
}

string Felino:: getNombreCirco(){
    return nombreCirco;
}
#endif //FELINO_H   