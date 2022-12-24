//Longitud de una cadena de caracteres 
/*
    Función strlen(nombre_variable);
*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
    char palabra[] = "Hola que tal?";
    int longitud = 0;

    longitud = strlen(palabra);

    cout<< "Numero de elementos de la cadena: "<< longitud;




    getch();
    return 0;
}