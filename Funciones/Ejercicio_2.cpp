#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void al_cuadrado(float);

int numero;

int main (){

    pedirDatos();
    al_cuadrado(numero);


    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Ingresa un numero: ";
    cin>>numero;
}

void al_cuadrado(float n){
    float resultado;
    resultado = n * n;

    cout<< n << "^2 = " <<resultado<<endl<<endl;
}