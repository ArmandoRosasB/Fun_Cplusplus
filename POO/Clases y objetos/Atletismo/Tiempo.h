#include <iostream>

#ifndef TIEMPO_H_INCLUDE
#define TIEMPO_H_INCLUDE

class Tiempo{
    private:
        int minutos;
        int segundos;

    public:
        Tiempo();
        Tiempo(int, int);
        void mostrarDatos();
        int getMinutos();
        int getSegundos();


};

Tiempo:: Tiempo(){
    minutos = 0;
    segundos = 0;
}

Tiempo:: Tiempo(int minutos, int segundos){
    this->minutos = minutos;
    this->segundos = segundos;
}

void Tiempo:: mostrarDatos(){
    std::cout<<"\nMinutos: "<<minutos<<std::endl;
    std::cout<<"Segundos: "<<segundos<<std::endl;
}

int Tiempo:: getMinutos(){
    return minutos;
}

int Tiempo:: getSegundos(){
    return segundos;
}

#endif //TIEMPO_H_INCLUDE