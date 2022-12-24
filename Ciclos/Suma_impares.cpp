#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {

    int i, n, suma= 0;

    cout<< "Ingresa el valor de valores a sumar: ";
    cin>> n;

    for(i = 1; i<=n*2 - 1; i+=2){
        suma += n;
    }

    cout<< "la suma de los primeros " << n << " numeros impares es de: " << suma << endl;

    system("pause");

    return 0;
}