#include <iostream>
#include "Tiempo.h"


class Atleta{
    private:
        static int contador;
        int numeroAtleta;
        std::string nombre;
        Tiempo *tiempo;
    public:
        Atleta();
        Atleta(int, std::string, Tiempo*);
        void mostrarDatos() const;


};

Atleta:: Atleta(){
    numeroAtleta = 0;
    std::string nombre = "#######";
    Tiempo tiempo(0, 0);

    contador ++;
}

Atleta:: Atleta(int numeroAtleta, std::string nombre, Tiempo *_tiempo){
    this->numeroAtleta = numeroAtleta;
    this->nombre = nombre;

    tiempo = new Tiempo(_tiempo->getMinutos(), _tiempo->getSegundos());

    contador ++;

}

void Atleta:: mostrarDatos() const{
    std::cout<<"\nNombre del Atelta: "<<nombre<<std::endl;
    std::cout<<"Numero del Atleta: "<<numeroAtleta<<std::endl;
    std::cout<<"Tiempo: ";
    tiempo->mostrarDatos();

}



int Atleta:: contador = 0;