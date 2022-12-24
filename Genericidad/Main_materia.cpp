#include <iostream>
#include <stdlib.h>
#include "Materia.h"

using namespace std;


int main(int argc, char* argv[]){
    Materia<int>  curso1("Algoritmos", 1, 10);
    Materia<float> curso2("Matematicas", 2, 9.8);
    Materia<char> curso3("Lenguaje", 3, 'A');

    cout<< curso1.toString() <<"\n" << curso2.toString() 
    << "\n" << curso3.toString()<<endl;

    curso1.setCalificacion(9);

    cout<<"\nLa nueva calificacion del curso 1 es: " << curso1.getCalificacion()<<endl;
    


    system("pause");
    return 0;
}