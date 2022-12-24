#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void pedirDatos();
int contarVocales(char *);


char nombreUsuario[50];

int main (){
    pedirDatos();
    cout<<"Numero de vocales en tu nombre: "<< contarVocales(nombreUsuario)<<endl;

    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Digite su nombre: ";
    cin.getline(nombreUsuario, 50, '\n');
    strlwr(nombreUsuario);
}

int contarVocales(char *nombre){
    int cont = 0;

    while(*nombre){ //Mientras nombre no sea nulo '\0'
        switch (*nombre)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cont ++;
            break;
        }

        nombre++;
    }

    return cont;
}