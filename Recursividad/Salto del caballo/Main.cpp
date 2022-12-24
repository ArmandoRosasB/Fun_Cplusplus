#include <iostream>
#include <stdlib.h>
#include "Coordenadas.h"
#include "Salto_caballo.h"



using namespace std;


//Desplazamientos relativos del caballo

int main(int argc, char* argv[]){
    bool succes;
    int x, y;
    Coordenadas init;

    do{
        cout<<"Ingresa las coordenadas de inicio del caballo(x, y): "; cin>> x>> y;

        if(x >= 0 && x < N && y >= 0 && y < N)
            break;
        else
            cout<<"Coordenadas fuera de rango"<<endl;
        
        system("cls");
    } while(x < 0 && x >= N && y < 0 && y >= N);

    init.setCoordenates(x, y);
    tablero[x][y] = 1; //Primera posicion

    saltoCaballo(2, init, succes);

    if(succes){
        cout<<"Camino encontrado"<<endl;
        escribirTablero(tablero);
    }
    else{
        cout<<"Camino no encontrado"<<endl;
    }
    system("pause");
    return 0;
}