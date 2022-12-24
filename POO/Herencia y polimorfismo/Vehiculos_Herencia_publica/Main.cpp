#include <iostream>
#include <stdlib.h>

#include "Vehiculos.h"
#include "Turismo.h"

using namespace std;


int main (int argc, char** argv){
    Turismo* t1 = new Turismo("Toyota", "Plomo", "GH89", 4);

    cout<<"Color: "<<t1->getColor()<<endl;

    t1->setColor("Negro");
    cout<<"Color: "<<t1->getColor()<<endl;

    cout<<"Modelo: "<<t1->_getModelo()<<endl;

    system("pause");
    return 0;
}