//Comparar cadenas
/*
    Funcion strcmp(cadena1, cadena2);
    strcmp(cadena1, cadena2) == 0; //Son iguales
*/

//Tambien puede comarar dos palabras alfabeticamente
/*
    strcmp(cadena1, cadena2) > 0
        //cadena 1 esta depspues de cadena2 alfabeticamente
*/


#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main (){
    char palabra1[] = "Hola";
    char palabra2[] = "Teclado";

    if(strcmp(palabra1, palabra2) == 0){
        cout<< "Ambas cadenas son iguales"<<endl;
    } else{
        if(strcmp(palabra1, palabra2) > 0){
            cout<< palabra1<<" esta después alfabeticamente"<<endl;
        } else{
            cout<< palabra2 <<" esta después alfabeticamente"<<endl;
        }
        
    }


    system("pause");
    return 0;
}