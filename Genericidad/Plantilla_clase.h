#include <iostream>

#ifndef EJEMPLOPLANTILLA_H
#define EJEMPLOPLANTILLA_H

template <class T1, class T2>
class EjemploPlantilla {
    private:
        T1 dato1;
        T2 dato2;
    public:
        EjemploPlantilla(T1, T2);
        void setDato1(T1);
        void setDato2(T2);
        T1 getDato1();
        T2 getDato2();

        void mostrarDatos();

};

template <class T1, class T2>
EjemploPlantilla<T1, T2> :: EjemploPlantilla(T1 dato1, T2 dato2){
    this->dato1 = dato1;
    this->dato2 = dato2;
}

template <class T1, class T2>
void EjemploPlantilla<T1, T2>:: setDato1(T1 dato1){
    this->dato1 = dato1;
}

template <class T1, class T2>
void EjemploPlantilla<T1, T2> :: setDato2(T2 dato2){
    this->dato2 = dato2;
}

template <class T1, class T2>
T1 EjemploPlantilla<T1, T2> :: getDato1(){
    return dato1;
}

template <class T1, class T2>
T2 EjemploPlantilla<T1, T2>:: getDato2(){
    return dato2;
}

template <class T1, class T2>
void EjemploPlantilla<T1, T2> :: mostrarDatos(){
    std:: cout<< "Dato 1: " << dato1<< std::endl;
    std:: cout<< "Dato 2: " << dato2 << std:: endl; 

}

#endif //EJEMPLOPLANTILLA_H