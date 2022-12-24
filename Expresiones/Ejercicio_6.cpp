#include <iostream>

using namespace std;

int main() {

    float np, nt, p, nf;

    cout<< "Ingresa la nota de prácticas del alumno: ";
    cin>> np;
    cout<< "Ingresa la nota teórica del alumno: ";
    cin>> nt;
    cout<< "Ingresa la nota de la participación del alumno: ";
    cin>> p;

    np *= 0.3;
    nt *= 0.6;
    p *= 0.1;

    nf = np + nt + p;

    cout<< "La nota final del alumno es de: "<< nf << endl;
    return 0;
}