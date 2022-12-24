#include <iostream>
#include <math.h>

using namespace std;

int main () {

    float x, y, z;
    cout<< "Ingrese el valor que toma la variable y: ";
    cin>> y;
    cout<< "Ingrese el valor que toma la variable x: ";
    cin>> x;

    z = sqrt(x)/ (pow(y, 2) - 1);

    cout.precision(3);

    cout<< "f(" << x <<", " << y << ") = "<< z;

    return 0;
}