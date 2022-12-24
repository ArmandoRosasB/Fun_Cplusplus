#include <iostream>

using namespace std;

int main () {
    float a, b, c, d, e, f, R;

    cout<< "Ingrese el valor de a: ";
    cin>> a;
    cout<< "Ingrese el valor de b: ";
    cin>> b;
    cout<< "Ingrese el valor de c: ";
    cin>> c;
    cout<< "Ingrese el valor de d: ";
    cin>> d;
    cout<< "Ingrese el valor de e: ";
    cin>> e;
    cout<< "Ingrese el valor de f: ";
    cin>> f;

    R = (a + (b/c))/(d + (e/f));

    cout.precision(3);
    cout<<"El resultado es: "<< R<< endl;


    return 0;
}