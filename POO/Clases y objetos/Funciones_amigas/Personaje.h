#include <iostream>


#ifndef PERSONAJE_H_INCLUDE
#define PERSONAJE_H_INCLUDE

class Personaje{
    friend void modificar(Personaje&, int, int); //Esta funcion tiene acceso a los atributos de la clase

    private:
        int ataque;
        int defensa;
    
    public:
        Personaje(int, int);
        void mostrarDatos();

};

Personaje:: Personaje(int ataque, int defensa){
    this->ataque = ataque;
    this->defensa = defensa;
}

void Personaje:: mostrarDatos(){
    std::cout<< "Ataque: "<< ataque<< std::endl;
    std::cout<< "Defensa: "<< defensa<< std::endl;
}


#endif //PERSONAJE_H_INCLUDE