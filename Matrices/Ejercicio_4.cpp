#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main (){
    int f, c;
    cout<< "Ingresa el numero de filas: ";
    cin>> f;
    cout<< "Ingresa el numero de columnas: ";
    cin>> c;
    
    int aleatorio[f][c];
    int copia[f][c];

    int i, j, dato;
    srand(time(NULL));

    for(i = 0; i<f; i++){
        for(j = 0; j<c; j++){
            dato = 1 + rand() % (100);
            aleatorio[i][j] = dato;
        }
    }

    for(i = 0; i<f; i++){
        for(j = 0; j<c; j++){
            copia[i][j] = aleatorio[i][j];
        }
    }

    cout<< "Matriz aleatoria: "<<endl;

    for(i = 0; i<f; i++){
        for(j = 0; j<c; j++){
            cout<< copia[i][j]<<" "; 
        }
        cout<< endl;
    }


    getch();
    return 0;
}