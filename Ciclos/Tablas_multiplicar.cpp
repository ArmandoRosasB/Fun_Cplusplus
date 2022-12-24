#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {
    int i, n;
    double r;

    do {
        cout<< "Ingresa un numero: ";
        cin>> n;
    } while ((n<1) || (n>10));
    

    for (i = 1; i<=20; i++){
        r = n * i;
        cout<< n << " x " << i << "= "<< r<< endl;

    }
    cout<< endl << endl;
    system("pause");
    return 0;
}