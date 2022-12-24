/*
Declaracion de una matriz:
    tipo nombre [nfilas][ncolumnas];

    Agregar elementos:
        tipo nombre [3][2] = {{f1, f1, f1} , {f2, f2, f2}}

        f1 f1 f1 
        f2 f2 f2
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    int filas, columnas;

    cout<< "Digita el numero de filas: ";
    cin>> filas;
    cout<< "Digita el numero de columnas: ";
    cin>> columnas;

    int numeros[filas][columnas];

    for(int i = 0; i<filas; i++){
        for(int j = 0; j <columnas; j++){
            cout<< "DIgita un numero [" <<i<<"]["<<j<<"]"; 
            cin>> numeros[i][j];
        }
    }

    //Mostrando la matriz
    for(int i = 0; i<filas; i++){
        for(int j = 0; j <columnas; j++){
            cout<< numeros[i][j]<< " ";
        }
        cout<<"\n";
    }

    cout<<"\n...............................\n";
    getch();
    return 0;
}

