#include <iostream>
#include "Persona.h"

#ifndef FUTBOLISTA_H
#define FUTBOLISTA_H

class Futbolista : public Persona{
    private:
        int dorsal;
        std::string posicion;
    public:
        Futbolista(std::string, std::string, int, int, std::string);
        Futbolista();
        ~Futbolista();
        void partidoFutbol();
        void entrenamiento();
        void entrevista();
};

Futbolista:: Futbolista (std::string nombre, std::string apellido, int edad, int dorsal, std::string posicion) : Persona(nombre, apellido, edad) {
    this-> dorsal = dorsal;
    this-> posicion = posicion;
}

Futbolista:: Futbolista() : Persona(){
    dorsal = -1;
    posicion = "Nulo";
}

Futbolista:: ~Futbolista(){}

void Futbolista:: partidoFutbol(){
    std:: cout<<"Juega el partido de futbol" << std::endl;
}

void Futbolista:: entrenamiento(){
    std::cout<<"El futbolista entrena"<< std::endl;
}

void Futbolista:: entrevista(){
    std::cout<< "Da una entrevista"<<std::endl;
}

#endif //FUTBOLISTA_H