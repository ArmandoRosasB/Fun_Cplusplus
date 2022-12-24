#include <iostream>
#include "Persona.h" 

#ifndef ENTRENADOR_H
#define ENTRENADOR_H


class Entrenador : public Persona{
    private:
        std::string estrategia;
    public:
        Entrenador(std::string, std::string, int, std::string);
        Entrenador();
        ~Entrenador();
        void partidoFutbol();
        void entrenamiento();
        void planificaEntrenamiento();

};

Entrenador:: Entrenador(std::string nombre, std::string apellido, int edad, std::string estrategia): Persona(nombre, apellido, edad){
    this-> estrategia = estrategia;
}

Entrenador:: Entrenador() : Persona(){
    estrategia = "Nulo";
}

Entrenador:: ~Entrenador(){}

void Entrenador:: partidoFutbol(){
    std::cout<< "Dirige el partido de futbol" << std::endl;
}

void Entrenador:: entrenamiento(){
    std::cout<<"Dirige el entrenamiento" << std::endl;
}

void Entrenador:: planificaEntrenamiento(){
    std::cout<< "Planifica el entrenamiento" << std::endl;
}

#endif //ENTRENADOR_H