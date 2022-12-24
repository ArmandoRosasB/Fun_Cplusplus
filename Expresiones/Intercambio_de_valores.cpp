#include <iostream>

using namespace std;


int main () {
    int a, b, aux;

    cout<< "Ingresa el valor de a: ";
    cin>> a;
    cout<< "Ingresa el valor de b: ";
    cin>> b;

    aux = a;
    a = b;
    b = aux;

    cout<< "Nuevo valor de a: " << a << endl;
    cout<< "Nuevo valor de b: " << b << endl;

    return 0;
}

