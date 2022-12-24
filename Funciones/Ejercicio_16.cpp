#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos();
int numeroMasChico(int[][100], int, int, int);

int matriz[100][100];
int filas, columnas;

int main (){
    int fila_deseada;
    int min;
    pedirDatos();

    cout<<"\nIngrese el numero de una fila: ";
    cin>>fila_deseada;
    min = numeroMasChico(matriz, filas, columnas, fila_deseada);

    cout<<"\nEl numero mas chico de la fila "<<fila_deseada<<" es: "<<min<<endl;


    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Ingresa el numero de filas de la matriz: ";
    cin>>filas;

    cout<<"Ingresa el numero de columnas de la matriz: ";
    cin>>columnas;

    for(int i = 0; i<filas; i++){
        for(int j = 0; j<columnas; j++){
            cout<<"Ingrese un numero "<<"["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];

        }
    }
}

int numeroMasChico(int m[][100], int nfilas, int ncolumnas, int fila){
    int min;
    min = m[fila][0];
    for(int j = 0; j<ncolumnas; j++){
            if(m[fila][j] < min){
                min = m[fila][j];
            
        }
    }

    return min;
    
}