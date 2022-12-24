//Funciones amigas

#include <iostream>
#include <stdlib.h>

#include "Personaje.h"

using namespace std;


void modificar(Personaje &, int, int);

int main (int argc, char** argv){
    Personaje* principal = new Personaje(100, 90);

    principal->mostrarDatos();
    modificar(*principal, 60, 50);
    cout<<endl;
    principal->mostrarDatos();

    delete principal;


    system("pause");
    return 0;
}

//Funion para modificar los valores de ataque y defensa de un Objeto 
void modificar(Personaje& p, int ataque, int defensa){
    p.ataque = ataque;
    p.defensa = defensa;
}