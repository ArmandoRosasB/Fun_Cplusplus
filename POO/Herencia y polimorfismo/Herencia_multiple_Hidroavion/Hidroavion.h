#include <iostream>

#include "Barco.h"
#include "Avion.h"

using namespace std;

class Hidroavion : public Barco, public Avion{
    private:
        string codigo;

    public:
        Hidroavion(string, string, string);
        /*
        Dado el orden de herencia arriba, primero
        inicializamso los atributos de Barco y 
        posteriormente de avion
        */
       ~Hidroavion();
       string getCodigo();
       void mostrarDatos();

};

Hidroavion:: Hidroavion(string nombre, string modelo, string codigo): Barco(nombre), Avion(modelo){
        this->codigo = codigo;
    }

Hidroavion:: ~Hidroavion(){}

string Hidroavion:: getCodigo(){
    return codigo;
}

void Hidroavion:: mostrarDatos(){
    cout<<"\nNombre: "<<getNombre()<<endl;
    cout<<"\nModelo: "<<getModelo()<<endl;
    cout<<"\nCodigo: "<<codigo<<endl;
}

