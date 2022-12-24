#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos();
void fraccion(float);

float numero;

int main (){
    pedirDatos();
    fraccion(numero);

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Ingresa un numero decimal: ";
    cin>> numero;
}

void fraccion(float n){
    int aux;
    float resultado;
    aux = n;
    resultado = n - aux;

    cout<<"La parte decimal es: "<<resultado;

}