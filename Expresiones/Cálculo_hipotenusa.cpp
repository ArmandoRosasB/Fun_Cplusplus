#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float c1, c2, h;

    cout<< "Ingresa el valor del primer cateto del triangulo rectangulo: ";
    cin >> c1;
    cout<< "Ingresa el valor del segundo cateto del triangulo rectangulo: ";
    cin >> c2;

    h = sqrt(pow(c1, 2) + pow(c2, 2));

    cout<< "La hipotenusa del triangulo es: " << h << endl;
    
    return 0;
}
