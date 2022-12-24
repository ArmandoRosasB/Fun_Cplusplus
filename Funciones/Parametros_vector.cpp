/* Paso de parámetros de tiopo vector

Parámetros de la función: 
    void nombreDeFuncion(tipo nombreArreglo[], int tamanioArreglo)

Llamada a la función
    nombreDeFuncion(nombreArreglo, tamanio arreglo)

*/

//Cuadrados de los elementos de un vector

#include <iostream>
#include <stdlib.h>

using namespace std;

void cuadrado(int [], int);
void muestra(int [], int);

int main (){
    const int TAM = 5;
    int vec[TAM] = {1, 2, 3, 4, 5};

    cuadrado(vec, TAM);
    muestra(vec, TAM);


    cout<<endl;
    system("pause");
    return 0;
}

void cuadrado(int vector[], int tamanio){
    for(int i = 0; i<tamanio; i++){
        vector[i] *= vector[i];
    }
}

void muestra (int vector[], int tamanio){
    for(int i = 0; i<tamanio; i++){
        cout<< vector[i]<<" ";
    }
}


