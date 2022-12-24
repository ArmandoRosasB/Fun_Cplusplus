#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main (){
    char cad1[50];
    char cad2[50];
    int numero;
    float numero2, suma = 0;

    cout<<"Digite un numero entero: ";
    cin.getline(cad1, 50, '\n');

    cout<< "Digite un numero flotante: ";
    cin.getline(cad2, 50, '\n');

    numero = atoi(cad1);
    numero2 = atof(cad2);

    suma = numero + numero2;

    cout<< "La suma de ambos numeros es: "<<suma<<endl;

    

    system("pause");
    return 0;
}