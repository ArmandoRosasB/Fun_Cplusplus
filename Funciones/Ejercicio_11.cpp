#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos();
int suma (int [], int);
void mostrar(int[], int);

int tamanio;
int vec[1000];

int main (){
    pedirDatos();
    cout<<"La suma de los elementos del vector: ";
    mostrar(vec, tamanio);
    cout<<" es de : "<<suma(vec, tamanio);



    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese el numero de elementos: ";
    cin>>tamanio;

    for(int i = 0; i<tamanio; i++){
        cout<<"Ingrese un valor: ";
        cin>> vec[i];
    }
}

int suma(int vector[], int tam){
    int suma = 0;
    for(int i = 0; i<tam; i++){
        suma += vector[i];
    }

    return suma;
}

void mostrar(int vector[], int tam){
    for(int i = 0; i<tam; i++){
        cout<<vector[i] << " ";
    }
}