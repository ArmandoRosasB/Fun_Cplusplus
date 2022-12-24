#include <iostream>

#ifndef ESTATICO_H_INCLUDE
#define ESTATICO_H_INCLUDE

class Estatico{
    private:
        static int contador; //Declaración de un atributo estatico
        std::string nombre;

    public:
        Estatico();
        int getContador();
        static int sumar(int, int);

};

Estatico:: Estatico(){
    contador ++;
}

int Estatico:: getContador(){
    return contador;
}

int Estatico:: sumar(int n1, int n2){
    int suma = n1 + n2;
    return suma;
}

int Estatico:: contador = 0; //Inicializamos el valor del atributo estatico;

#endif //ESTATICO_H_INCLUDE