#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos();
bool simetrica(int[][100], int, int);



int matriz[100][100];
int transp [100][100];
int filas;
int columnas;

int main (){

    pedirDatos();
    cout<<"\n";

    if(simetrica(matriz, filas, columnas)){
        cout<<"La matriz es simetrica"<<endl;
    } else{
         cout<<"La matriz no es simetrica"<<endl;
    }
    


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


bool simetrica(int m[][100], int nfilas, int ncolumnas ){

    if(nfilas != ncolumnas)
        return false;

    

    for(int i = 0; i<nfilas; i++){
        for(int j = 0; j<ncolumnas; j++){
            if(m[i][j] != m[j][i])
                return false;
        }
    } 
    

    return true;  
}