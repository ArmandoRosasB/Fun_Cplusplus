#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {
    int n, i;
    int suma = 0;

    cout<<"Ingrese el valor de n: ";
    cin>> n;

    for (i = 1; i<=n; i++){
        suma += i;

    }

    cout<< "La suam de 1 a "<<n << " es de : "<<suma<<endl;

    system ("pause");



    return 0;
}
