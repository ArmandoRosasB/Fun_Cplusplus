#include <iostream>

using namespace std;


#ifndef ALUMNO_H
#define ALUMNO_H


class Alumno {
    private:
        string nombreCarrera;
    
    public:
        Alumno(string);
        ~Alumno();
        void mostrarDatos();
        void setNombreCarrera(string);
        string getNombreCarrera();

};


Alumno:: Alumno(string nombreCarrera){
    this->nombreCarrera = nombreCarrera;
}

Alumno:: ~Alumno(){}

void Alumno:: mostrarDatos(){
    cout<<"Carrera: "<< nombreCarrera<<endl;
}

void Alumno:: setNombreCarrera(string nombreCarrera){
    this->nombreCarrera = nombreCarrera;
}

string Alumno:: getNombreCarrera(){
    return nombreCarrera;
}

#endif //ALUMNO_H