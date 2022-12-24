#include <iostream>
#include <stdlib.h>

using namespace std;

struct Persona{
    char nombre[40];
    int edad;
};


int main (){
    struct Persona persona1;

    cout<< "Nombre: ";
    cin.getline(persona1.nombre, 40, '\n');

    cout<<"Edad: ";
    cin>> persona1.edad;

    cout<< "\nImprimiendo datos: "<<endl;
    cout<< "Nombre: "<<persona1.nombre<<endl;
    cout<< "Edad: "<<persona1.edad<<endl;
    


    system("pause");
    return 0;
}