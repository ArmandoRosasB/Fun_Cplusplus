#include <iostream>

using namespace std;

#ifndef BARCO_H_INCLUDE
#define BARCO_H_INCLUDE

class Barco{
    private:
        string nombre;
    public:
        Barco(string);
        ~Barco();

        void indicarBarco();
        string getNombre();

};

Barco:: Barco(string nombre){
    this->nombre = nombre;
}

Barco:: ~Barco(){}

void Barco:: indicarBarco(){
    cout<<"Desplazamiento por agua"<<endl;
}

string Barco:: getNombre(){
    return nombre;
}

#endif //BARCO_H_INCLUDE
