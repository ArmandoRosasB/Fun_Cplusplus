#include <iostream>
#include <stdlib.h>
#include "Plantilla_clase.h"

using namespace std;

int main(int argc, char* argv[]){
    EjemploPlantilla<int , float> ob1(5, 9.87);

    ob1.mostrarDatos();

    ob1.setDato1(10);
    ob1.setDato2(8.87);

    cout<<"\n";

    ob1.mostrarDatos();

    system("pause");
    return 0;
}