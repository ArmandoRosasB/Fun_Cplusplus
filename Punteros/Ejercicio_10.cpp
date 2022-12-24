#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void transpuesta(int **, int **, int, int);
void mostrar(int **, int , int);

int **matriz_uno, **matriz_transpuesta, filas, columnas;
int i, j;

int main (){
    pedirDatos();

    cout<<"Matriz original"<<endl;
    mostrar(matriz_uno, filas, columnas);

    transpuesta(matriz_uno, matriz_transpuesta, filas, columnas);

    cout<<"Matriz transpuesta"<<endl;
    mostrar(matriz_transpuesta, filas, columnas);

    for(i = 0; i<filas; i++){
        delete [] matriz_uno[i];
    }

    delete [] matriz_uno;

    for(i = 0; i<filas; i++){
        delete [] matriz_transpuesta[i];
    }

    delete [] matriz_transpuesta;


    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese el numero de filas: ";
    cin>>filas;
    cout<<"Ingrese el numero de columnas:";
    cin>>columnas;

    matriz_uno = new int*[filas];

    for(i = 0; i<filas; i++){
        matriz_uno[i] = new int[columnas];
    }

    matriz_transpuesta = new int*[columnas];

    for(i = 0; i<filas; i++){
        matriz_transpuesta[i] = new int[filas];
    }

    cout<<"A rellenar la matriz"<<endl;
    for(i = 0; i<filas; i++){
        for(j = 0; j<columnas; j++){
            cout<<"Matriz ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matriz_uno + i) + j);
        }
    }
}

void transpuesta(int **matriz_uno, int **matriz_transpuesta, int filas, int columnas){
    for(i = 0; i<filas; i++){
        for(j = 0; j<columnas; j++){
            *(*(matriz_transpuesta + i) + j) = *(*(matriz_uno + j) + i);
        }
    }
}

void mostrar(int **matriz, int filas, int columnas){
    for(i = 0; i<filas; i++){
        for(j = 0; j<columnas; j++){
            cout<<*(*(matriz + i) + j)<<" ";
        }

        cout<<"\n";
    }

}