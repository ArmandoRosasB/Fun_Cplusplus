#include <iostream>

using namespace std;

int main() {

    float a, b, R;
    cout<< "Ingresa el valor de a: ";
    cin >> a;
    cout << "Ingresa el valor de b: ";
    cin >> b;

    R = (a/b) + 1;

    cout.precision(2); //Toma en cuenta los dos primeros decimales y redondea el segundo, de manera que solo haya un decimal
    cout << "El resultado es: " << R;

    return 0;
}