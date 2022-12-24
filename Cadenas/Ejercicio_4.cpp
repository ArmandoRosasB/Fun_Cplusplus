#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
    char cad1[] = "Hola que tal ";
    char nombre[60];
    char cad3[75];

    cout<< "Ingrese su nombre: ";
    cin.getline(nombre, 60, '\n');

    strcpy(cad3, cad1);

    strcat(cad3, nombre);

    cout<< cad3 <<endl;


    getch();
    return 0;
}