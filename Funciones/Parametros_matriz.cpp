//Paso de parámetros tipo matriz

//Elevar al cuadrado todos los elementos de uan matriz
#include <iostream>
#include <stdlib.h>

using namespace std;

/*
    En el caso de una matriz es obligatorio poner el numero máximo
    de columans que esta puede llegar a tener
*/

void mostrarMatriz(int [][3], int, int);
void calcularCuadrado(int[][3], int, int);
void mostrarMatrizElevada(int[][3], int, int);


int main(){
    const int filas = 2;
    const int columnas = 3;

    int m[filas][columnas] = {{1, 2, 3}, {4, 5, 6}};

    mostrarMatriz(m, filas, columnas);
    calcularCuadrado(m, filas, columnas);
    mostrarMatriz(m,filas, columnas);

    system("pause");
    return 0;
}

void mostrarMatriz(int matriz[][3], int nfilas, int ncolumnas){
    cout<<"Mostrando matriz original"<<endl;
    for(int i = 0; i<nfilas; i++){
        for(int j = 0; j<ncolumnas; j++){
            cout<<matriz[i][j] << " ";
        }
        cout<<"\n";
    }
}

void calcularCuadrado(int matriz[][3], int nfilas, int ncolumnas){
    for(int i = 0; i<nfilas; i++){
        for(int j = 0; j<ncolumnas; j++){
            matriz[i][j] *= matriz[i][j];
        }
    }
}

void mostrarMatrizElevada(int matriz[][3], int nfilas, int ncolumnas){
    cout<<"Mostrando matriz elevada al cuadrado"<<endl;
    for(int i = 0; i<nfilas; i++){
        for(int j = 0; j<ncolumnas; j++){
            cout<<matriz[i][j] << " ";
        }
        cout<<"\n";
    }
}