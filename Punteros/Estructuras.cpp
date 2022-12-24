// Punteros a estructuras

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Persona{
    char nombre[40];
    int edad;
} persona, *puntero_persona = &persona;



void pedirDatos();
void mostrarDatos(Persona *);

int main (){
    pedirDatos();
    mostrarDatos(puntero_persona);

    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese su nombre: ";
    cin.getline(puntero_persona->nombre, 40, '\n');
    cout<<"Ingrese su edad: ";
    cin>>puntero_persona->edad;
}

void mostrarDatos(Persona *puntero_persona){
    cout<<"\nDatos"<<endl;
    cout<<"Nombre: "<<puntero_persona->nombre<<endl;
    cout<<"Edad: "<<puntero_persona ->edad<<endl;
}