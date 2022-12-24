#include <iostream>

using namespace std;

int main () {
    int opcion;
    float saldo = 1000, dinero;

    cout<< "\tBienvenido a su Cajero Virtual"<< endl;
    cout<< "1. Ingresar dinero en cuenta"<< endl;
    cout<< "2. Retirar dinero de al cuenta"<< endl;
    cout<< "3. Salir"<<endl;
    cout<< "Opción: ";
    cin>> opcion;

    switch(opcion){
        case 1:
            cout<< "Ingrese la cantidad de dinero a ingresar: ";
            cin>> dinero;
            saldo += dinero;
            cout<<"Dinero en cuenta: "<<saldo;
            break;
        case 2:
            cout<< "Ingrese la cantidad de dinero a retirar: ";
            cin>> dinero;
            if(dinero > saldo){
                cout<< "Saldo insuficiente";
            } else{
                saldo -= dinero;
                cout<<"Dinero en cuenta: "<<saldo;
            }
            break;
        case 3:
            cout<< "Gracias por usar su cajero virtual";
            break;
        default:
            cout<< "Error en la seleccion de la opcion";
            break;
    }
    return 0;
}