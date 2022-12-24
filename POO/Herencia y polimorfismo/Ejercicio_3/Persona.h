#include <iostream>


#ifndef PERSONA_H
#define PERSONA_H


class Persona {
    protected:
        std::string nombre;
        std::string apellido;
        int edad;
    public:
        Persona(std::string, std::string, int);
        Persona();
        ~Persona();
        void viajar();
        std::string getNombre();
        std::string getApellido();
        int getEdad();
        virtual void partidoFutbol() = 0;
        virtual void entrenamiento() = 0;
};

Persona:: Persona(std::string nombre, std::string apellido, int edad){
    this-> nombre = nombre;
    this-> apellido = apellido;
    this->edad = edad;

}

Persona:: Persona (){
    this -> nombre = "Nulo";
    this -> apellido = "Nulo";
    this -> edad = 0;
}

Persona:: ~Persona(){}

void Persona:: viajar(){
    std::cout<< "Viajar"<<std::endl;
}

std::string Persona:: getNombre(){
    return nombre;
}

std::string Persona:: getApellido(){
    return apellido;
}

int Persona:: getEdad(){
    return edad;
}

#endif //PERSONA_H