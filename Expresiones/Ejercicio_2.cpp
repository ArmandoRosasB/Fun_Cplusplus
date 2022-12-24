#include <iostream>

using namespace std;

int main () {
    float a, b, c, d, R;

    cout<<"Ingresa del valor de a: ";
    cin>> a;
    cout<<"Ingresa del valor de b: ";
    cin>> b;
    cout<<"Ingresa del valor de c: ";
    cin>> c;
    cout<<"Ingresa del valor de d: ";
    cin>> d;

    R = (a+b)/(c+d);

    cout.precision(2);
    cout<< "El resultado es: "<< R << endl;
    return 0;
}