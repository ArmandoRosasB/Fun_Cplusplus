#include <iostream>
#include "Persona.h"

#ifndef MEDICO_H
#define MEDICO_H


class Medico : public Persona {
    private:
        std::string titualcion;
        int aniosExperiencia;
    public:
        Medico(std::string, std::string, int, std::string, int);
        Medico();
        ~Medico();
        void partidoFutbol();
        void entrenamiento();
        void curarLesion();

};

Medico:: Medico(std::string nombre, std::string apellido, int edad, std::string titulacion, int aniosExperiencia) : Persona(nombre, apellido, edad) {
    this->titualcion = titualcion;
    this-> aniosExperiencia = aniosExperiencia;
}

Medico:: Medico() : Persona() {
    titualcion = "Nulo";
    aniosExperiencia = -1;
}

Medico:: ~Medico(){}

void Medico:: partidoFutbol(){
    std::cout<< "Da asistencia en el partido de futbol" << std::endl;
}

void Medico:: entrenamiento(){
    std::cout<< "Da asistencia en el entrenamiento"<<std::endl;
}

void Medico:: curarLesion(){
    std::cout<< "Curar lesion"<<std:: endl;
}


#endif //MEDICO_H