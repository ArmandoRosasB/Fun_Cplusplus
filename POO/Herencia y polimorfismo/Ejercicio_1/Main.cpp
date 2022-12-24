#include <iostream>
#include <stdlib.h>
#include <vector>
#include "Mamifero.h"
#include "Felino.h"
#include "GatoDomestico.h"

using namespace std;



int main (int argc, char* argv[]){

    GatoDomestico* minino= new GatoDomestico(2020, "Mexico", "Naranja", "Juan");
    Felino* estrellaCirco = new Felino(2018, "EUA", "Tigre", "CircoLenbuita" );

    string nuevoNombre;

    cout<<"Dieta de Minino: ";
    minino->imprimirDieta();

    cout<<"Dieta de EstrellaCirco: ";
    estrellaCirco->imprimirDieta();


    cout<<"Anio y lugar de nacimiento de Minino"<<endl;
    cout<<"Anio: "<<minino->getAnioNacimiento()<<endl;
    cout<<"Lugar de nacimiento: "<< minino->getLugarNacimiento()<<endl;

    cout<<"Anio y lugar de nacimiento de EstrellaCirco"<<endl;
    cout<<"Anio: "<<estrellaCirco->getAnioNacimiento()<<endl;
    cout<<"Lugar de nacimiento: "<<estrellaCirco->getLugarNacimiento()<<endl;

    cout<<"Cambiar el nombre del duenio de minino: ";
    getline(cin, nuevoNombre);
    
    minino->setNombreDuenio(nuevoNombre);
    cout<<"Nuevo nombre del gato: "<< minino->getNombreDuenio()<<endl;

    cout<<"Raza de Minino: "<< minino->getRaza()<<endl;
    cout<<"Raza de estrellaCirco: "<< estrellaCirco->getRaza()<<endl;

    cout<<"Ingresa el nuevo nombre del circo: ";
    getline(cin, nuevoNombre);
    estrellaCirco->setNombreCirco(nuevoNombre);

    cout<<"Nombre del nuevo circo:"<< estrellaCirco->getNombreCirco()<<endl;

    system("pause");
    return 0;
}