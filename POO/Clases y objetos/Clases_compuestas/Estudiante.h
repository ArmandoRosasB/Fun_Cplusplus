//Clases compuestas


#include <iostream>

#include "Expediente.h"
#include "Direccion.h"

#ifndef ESTUDIANTE_H_INCLUDE
#define ESTUDAINTE_H_INCLUDE

class Estudiante{
    private:
        std::string codigo;
        float promedio;
        Expediente exp;
        Direccion dir;

    public:
        Estudiante(std::string, float, int ,std::string);
        void mostrarDatos();
};

#endif //ESTUDIANTE_H_INCLUDE

Estudiante:: Estudiante(std::string codigo, float promedio, int no_expediente, 
std::string direccion): exp(no_expediente), dir(direccion){

    this->codigo = codigo;
    this->promedio = promedio;

}

void Estudiante:: mostrarDatos(){
    std::cout<<"Codigo: "<< codigo <<std::endl;
    std::cout<<"Promedio: "<< promedio <<std::endl;
    std::cout<<"Numero de expediente:  "<< exp.getNoExpediente()<<std::endl;
    std::cout<<"Direccion: "<< dir.getDireccion()<<std::endl;
    

}
