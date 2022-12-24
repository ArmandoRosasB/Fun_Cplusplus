#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos();
void cambioSigno(int [], int);
void mostrar(int[], int);


int tamanio;
int vec[1000];

int main (){
    pedirDatos();
    cambioSigno(vec, tamanio);

    cout<<"Vector negativo: ";
    mostrar(vec, tamanio);


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

void cambioSigno(int vector[], int tam){
    for(int i = 0; i<tam; i++){
        vector[i] *= -1;
    }
}

void mostrar(int vector[], int tam){
    for(int i = 0; i<tam; i++){
        cout<<vector[i] << " ";
    }
}