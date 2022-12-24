#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {
    int x, y, r;
    int i;
    
    cout<< "Ingresa el valor de x: ";
    cin>> x;
    cout<< "Ingresa el valor de y: ";
    cin>> y;

    for (i = 1; i<=y; i++){
        r = x * x;
    } 

    cout<< "El resultado de x^y = "<<r<<endl;

    system("pause");


    return 0;
}