#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
    int n, i;
    int r = 1, suma = 1;

    cout<< "Ingresa el valor de n: ";
    cin>> n;

    for (i = 2; i<= n; i++){
        r *= i;
        suma += r;
    }

    cout<< "La suma de factoriales de 1! a "<<n << "! es de: "<< suma<<endl;

    system("pause");


    return 0;
}