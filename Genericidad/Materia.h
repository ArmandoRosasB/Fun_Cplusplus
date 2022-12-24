#include <iostream>
#include <sstream>

#ifndef MATERIA_H
#define MATERIA_H

template <class T>
class Materia{
    private:
        std::string nombreMateria;
        int clave;
        T calificacion;

    public:
        Materia();
        Materia(std:: string, int, T);
        void setCalificacion(T);
        T getCalificacion();
        std::string toString();

};

template <class T>
Materia<T>:: Materia(){
    nombreMateria = "NULL";
    clave = NULL;
    calificacion = NULL;
}

template <class T>
Materia<T>:: Materia(std::string nombreMateria, int clave, T calificacion){
    this-> nombreMateria = nombreMateria;
    this-> clave = clave;
    this-> calificacion = calificacion;
}

template <class T>
void Materia<T>:: setCalificacion(T calificacion){
    this->calificacion = calificacion;
}

template <class T>
T Materia<T>:: getCalificacion(){
    return calificacion;
}


template <class T>
std::string Materia<T> :: toString(){
    std::stringstream aux;
    aux << "Nombre de la materia: " << nombreMateria << std::endl;
    aux<< "Clave de la materia: " << clave << std::endl;
    aux<< "Calificacion: " << calificacion << std::endl;

    return aux.str();
}



#endif //MATERIA_H