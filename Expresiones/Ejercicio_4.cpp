#include <iostream>

using namespace std;

int main () {
    float a, b, c, d, R;

    cout<< "Ingresa el valor de a: ";
    cin>> a;
    cout<< "Ingresa el valor de b: ";
    cin>> b;
    cout<< "Ingresa el valor de c: ";
    cin>> c;
    cout<< "Ingresa el valor de d: ";
    cin>> d;

    R = a + (b/(c-d));

    cout.precision(2);
    cout<< "El resultado es: " << R << endl;

    return 0;
}