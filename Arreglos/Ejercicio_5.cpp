#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {
int n, i;
    int numeros[1000];

    cout<< "Ingresa la cantidad de numeros que tendrá el arreglo: ";
    cin>> n;
    cout<< endl;

    for (i = 0; i<n; i++){
        cout<< "Ingrese un numero: ";
        cin>> numeros[i];
        cout<<endl;
    }

    int max;

    for (i = 0; i<n; i++){
        if(numeros[i]>= max){
            max = numeros[i];
        }
    }

    cout<< "El numero maximo del vector es: "<< max<<endl;

    system("pause");


}