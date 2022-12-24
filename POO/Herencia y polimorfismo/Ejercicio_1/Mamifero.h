#include <iostream>

using namespace std;


#ifndef MAMIFERO_H
#define MAMIFERO_H

class Mamifero {
    protected:
        int anioNacimiento;
        string lugarNacimiento;
        string raza;

    public:
        Mamifero(int, string, string);
        virtual void imprimirDieta() = 0;
        int getAnioNacimiento();
        string getLugarNacimiento();
        string getRaza();

};

Mamifero:: Mamifero(int anioNacimiento, string lugarNacimiento, string raza){
    this->anioNacimiento = anioNacimiento;
    this->lugarNacimiento = lugarNacimiento;
    this->raza = raza;
}


int Mamifero:: getAnioNacimiento(){
    return anioNacimiento;
}

string Mamifero:: getLugarNacimiento(){
    return lugarNacimiento;
}

string Mamifero:: getRaza(){
    return raza;
}




#endif //MAMIFERO_H