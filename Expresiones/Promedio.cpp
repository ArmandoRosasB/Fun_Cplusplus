//Promedio 3 alumnos

#include <iostream>

using namespace std;

int main () {

    float n1, n2, n3, p;

    cout<< "Ingrese la nota final del alumno numero 1: ";
    cin >> n1;
    cout<< "Ingrese la nota final del alumno numero 2: ";
    cin >> n2;
    cout<< "Ingrese la nota final del alumno numero 3: ";
    cin >> n3;

    p = (n1 + n2 + n3)/3;

    cout.precision(2);
    cout<< "El promedio de los 3 alumnos es de: "<< p << endl;

    return 0;
}