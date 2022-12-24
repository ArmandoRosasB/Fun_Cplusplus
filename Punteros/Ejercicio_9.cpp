#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void suma_matrices(int **, int**, int, int);
void mostrarMatriz(int**, int, int);

int  **matriz_suma,**matriz_uno, **matriz_dos, filas, columnas;

int main (){

    pedirDatos();
    suma_matrices(matriz_uno, matriz_dos, filas, columnas);

    cout<<"\n\nMatriz suma"<<endl;
    mostrarMatriz(matriz_suma, filas, columnas);

    for(int i = 0; i<filas; i++){
        delete [] matriz_uno[i];
    }

    delete [] matriz_uno;

    for(int i = 0; i<filas; i++){
        delete [] matriz_dos[i];
    }

    delete [] matriz_dos;

    for(int i = 0; i<filas; i++){
        delete [] matriz_suma[i];
    }

    delete [] matriz_suma;

    system("pause");
    return 0;
}

void pedirDatos(){

    cout<<"Ingresa el numero de filas: ";
    cin>>filas;
    cout<<"Ingresa el numero de columnas: ";
    cin>>columnas;

    matriz_uno = new int* [filas];

    for(int i = 0; i<filas; i++){
        matriz_uno[i] = new int[columnas];
    }

    matriz_dos = new int* [filas];

    for(int i = 0; i<filas; i++){
        matriz_dos[i] = new int[columnas];
    }

    matriz_suma = new int* [filas];

    for(int i = 0; i<filas; i++){
        matriz_suma[i] = new int[columnas];
    }

    cout<<"A rellenar la matriz uno"<<endl;
    for(int i = 0; i<filas; i++){
        for(int j = 0; j<columnas; j++){
            cout<<"Matriz ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matriz_uno + i) + j);
        }
    }
    cout<<endl;

    cout<<"A rellenar la matriz dos"<<endl;
    for(int i = 0; i<filas; i++){
        for(int j = 0; j<columnas; j++){
            cout<<"Matriz ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matriz_dos + i) + j);
        }
    }

}



void suma_matrices(int **matriz_uno, int**matriz_dos, int filas, int columnas){
    for(int i = 0; i<filas; i++){
        for(int j = 0; j<columnas; j++){
            *(*(matriz_suma + i) + j) = *(*(matriz_uno + i) + j) + *(*(matriz_dos + i) + j);
        }
    }
}

void mostrarMatriz(int **matriz_suma, int f, int c){
    for(int i = 0; i<f; i++){
        for(int j = 0; j<c; j++){
            cout<<*(*(matriz_suma+ i) + j)<<" ";
        }
        cout<<"\n";
    }

}