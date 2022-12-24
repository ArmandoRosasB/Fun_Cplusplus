//Arreglo de objetos

#include <iostream>

#include <iomanip>

#ifndef ALUMNO_H_INCLUDE
#define ALUMNO_H_INCLUDE

class Alumno{
    private:
        float calMate;
        float calProgra;
        float promedio;

    public:
        Alumno();
        Alumno(float, float);
        void pedirDatos();
        void mostrarNotas();
};

Alumno:: Alumno(){
    calMate = 0;
    calProgra = 0;
    promedio = 0;
}

Alumno:: Alumno(float _calMate, float _calProgra){
    calMate = _calMate;
    calProgra = _calProgra;
}

void Alumno:: pedirDatos(){
    std::cout<<"Ingrese la calificacion de matematicas: ";
    std::cin>>calMate;

    std::cout<<"Ingrese la calificacion de programacion: ";
    std::cin>>calProgra;
}

void Alumno:: mostrarNotas(){
    promedio = (calMate + calProgra)/2;
    std::cout<<"Nota de matematicas: "<<calMate<<std::endl;
    std::cout<<"Nota de programacion: "<<calProgra<<std::endl;
    std::cout<<"Promedio: "<< std::fixed<< std::setprecision(2)<<promedio<<std::endl;
}

#endif // ALUMNO_H_INCLUDE