//Paso de parametros de tipo estructura

#include <iostream>
#include <conio.h>

using namespace std;

struct Persona{
    char nombre[30];
    int edad;
};

struct Persona p1;

//Prototipo
void pedirDatos();
void mostrarDatos(Persona);

int main (){
    pedirDatos();
    mostrarDatos(p1);


    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese su nombre: ";
    cin.getline(p1.nombre, 30, '\n');
    cout<<"Ingrese su edad: ";
    cin>> p1.edad;
}

void mostrarDatos(Persona p){
    cout<<"\n\nEl nombre es: "<< p.nombre<<endl;
    cout<<"Edad: "<<p.edad<<endl;

}