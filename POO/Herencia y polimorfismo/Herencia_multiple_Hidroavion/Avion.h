#include <iostream>

using namespace std;

#ifndef AVION_H_INCLUDE
#define AVION_H_INCLUDE

class Avion{
    private:
        string modelo;
    public:
        Avion(string modelo);
        ~Avion();
        void indicarAvion();
        string getModelo();

};

Avion:: Avion(string modelo){
    this->modelo = modelo;
}

Avion:: ~Avion(){}

void Avion:: indicarAvion(){
    cout<<"Desplazamiento por aire"<<endl;
}

string Avion:: getModelo(){
    return modelo;
}


#endif //AVION_H_INCLUDE