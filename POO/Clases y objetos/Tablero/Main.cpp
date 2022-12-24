#include <iostream>
#include <stdlib.h>
#include <string.h>

#include "Tablero.h"

using namespace std;

int main(int argc, char** argv){
    Tablero* tablero;
    int x, y;

    cout<<"Posicion del objeto "<<endl;
    cout<<"Posicion x: ";
    cin>>x;
    cout<<"Posicion y: ";
    cin>>y;

    if((x == 0) && (y == 0)){
        tablero = new Tablero();
    } else{
        tablero = new Tablero(x, y);
    }

    int opcion, pasos;

    cout<<"\n\t...Menu..."<<endl;
        cout<<"1. Mover Arriba"<<endl;
        cout<<"2. Mover Abajo"<<endl;
        cout<<"3. Mover Derecha"<<endl;
        cout<<"4. Mover Izquierda"<<endl;
        cout<<"5. Salir"<<endl;


    do{

        cout<<"Ingresa la opcion: ";
        cin>>opcion;
 
        switch (opcion)
        {
        case 1:
            cout<<"Ingresa el numero de pasos: ";
            cin>>pasos;
            tablero->moverArriba(pasos);
            break;
        case 2:
            cout<<"Ingresa el numero de pasos: ";
            cin>>pasos;
            tablero->moverAbajo(pasos);
            break;
        case 3:
            cout<<"Ingresa el numero de pasos: ";
            cin>>pasos;
            tablero->moverDerecha(pasos);
            break;
        case 4:
            cout<<"Ingresa el numero de pasos: ";
            cin>>pasos;
            tablero->moverIzquierda(pasos);
            break;
        case 5:
            break;
        
        default:
            cout<<"Opcion no valida"<<endl;
            break;
        }
        cout<<"Posicion actual: ("<<tablero->getX()<<", "<<tablero->getY()<<")"<<endl<<endl;

    }   while(opcion !=5);

    delete tablero;

    system("pause");
    return 0;
}