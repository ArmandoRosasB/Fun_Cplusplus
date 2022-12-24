#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main () {
    int n, i, suma = 0;

    cout<< "Ingresa el valor de n: ";
    cin>> n;

    for(i=1; i<= n; i++){
        suma += pow(2, i);
    }

    cout<< "El resultado de la suma de 2^1 hasta 2^" <<n << "es de: "<<suma<<endl;
    system("pause");
    
    return 0;
}