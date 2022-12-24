#include <iostream>
#include <stdlib.h>
#include <vector>

#include "Vehiculo.h"

using namespace std;

float minimo(const vector<Vehiculo*> &, int);

int main (int argc, char** argv){
    vector <Vehiculo*> vehiculos;
    int n;
    string marca, modelo;
    float precio;

    cout<<"Ingrese el numero de vehiculos: ";
    cin>>n;

    vehiculos.resize(n);

    for(int i = 0; i<n; i++){
        cout<<"\nVehiculo "<< i<<endl;
        fflush(stdin); //Alternativa: cin.ignore()
        cout<<"Ingrese la marca del auto: ";
        cin>>marca;
        cout<<"Ingrese el modelo del auto: ";
        cin>>modelo;
        cout<<"Ingrese el precio del auto: ";
        cin>>precio;

        vehiculos[i] = new Vehiculo(marca, modelo, precio);
    }

    float min;
    min = minimo(vehiculos, n);



    cout<<"Total de vehiculos: "<<vehiculos[0]->getContador();
    cout<<"\n\n\nVehiculo(s) con menor costo"<<endl;

    for(int i = 0; i<n; i++){
        if((vehiculos[i]->getPrecio()) == min){
            vehiculos[i]->mostrarDatos();
        }
    }


    for(int i = 0; i<n; i++){
        delete vehiculos[i];
    }



    system("pause");
    return 0;
}

float minimo(const vector <Vehiculo*> &vehiculos, int n){
    float min = vehiculos[0]->getPrecio();
    for(int i = 0; i<n; i++){
        if((vehiculos[i]->getPrecio()) < min){
            min = vehiculos[i]->getPrecio();
        }
    }
    return min;
}