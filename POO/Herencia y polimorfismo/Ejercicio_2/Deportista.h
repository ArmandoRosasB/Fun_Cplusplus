#include <iostream>

using namespace std;


#ifndef DEPORTISTA_H
#define DEPORTISTA_H


class Deportista {
    private:
        string nombreEntrenador;
    
    public:
        Deportista(string);
        ~Deportista();
        void mostrarDatos();
        void setNombreEntrenador(string);
        string getNombreEntrenador();
};


Deportista:: Deportista(string nombreEntrenador){
    this->nombreEntrenador = nombreEntrenador;
}

Deportista::~Deportista(){}

void Deportista:: mostrarDatos(){
    cout<<"Nombre del entrenador: "<< nombreEntrenador<<endl;

}

void Deportista:: setNombreEntrenador(string nombreEntrenador){
    this->nombreEntrenador = nombreEntrenador;
}

string Deportista:: getNombreEntrenador(){
    return nombreEntrenador;
}

#endif //DEPORTISTA_H