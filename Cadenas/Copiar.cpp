//Copiar el contenido de una cadena a otra 
/*
    Funcion strcpy(cadena_vacia, cadena_principal);
*/



#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
    char nombre [] = "Armando";
    char nombre_dos[20];

    strcpy(nombre_dos, nombre);

    cout<< nombre_dos<<endl;

    getch();
    return 0;
}