#include <iostream>
#include <stdlib.h>

#include "Perro.h"

using namespace std;


int main (int argc, char** argv){
    Perro* perro1;

    perro1 = new Perro("Fido", "Doberman");

    perro1->mostrarDatos();
    perro1->jugar();

    //Destructor tipo dinamico
    delete perro1;

    cout<<endl;

    Perro perro2("Sasa", "Pitbull");

    perro2.mostrarDatos();
    perro2.jugar();

    //Destructor tipo estatico
    perro2.~Perro();


    cout<<endl;

    system("pause");
    return 0;
}