//Busqueda binaria

// El arreglo debe estar ordenado

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    
    int numeros[] = {1,2,3,4,5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
    int inf, sup, mitad, dato;

    dato = 7;
    //Algoritmo de la busqueda binaria
    inf = 0; // 0
    sup = 19; // Numero de elementos de nuestro arreglo - 1
    mitad = (inf + sup)/2;

    while (inf<=sup){
        if (numeros[mitad]< dato){

            inf=mitad+1;

        } else if (numeros[mitad]== dato) {
            cout<<" Se encontro el numero en la posicion " << mitad;
            break;
        }
        else {
            sup = mitad - 1;
        }

        mitad = (inf+sup)/2;
    }

    if (inf>sup){
        cout<<dato<<" no se encontro";
    }

    
    getch();
    return 0;
}