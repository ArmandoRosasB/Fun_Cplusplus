/*
Programa que resuelve ecuaciones 
de segundo grado
*/

#include <iostream>
#include <math.h>

using namespace std;

int main () {

    float a, b, c, x1, x2;

    cout<< "Bienvenido a este programa de computadora"<<endl;
    cout<< "Este es un programa que resulve ecuaciones de segundo grado" << endl;
    cout<< "de la forma ax^2 + bx + c"<< endl<<endl;
    cout<<"Introduce el valor de a: ";
    cin>> a;
    cout<< "Introduce el valor de b: ";
    cin>> b;
    cout<<"Introduce el valor de c: ";
    cin>> c;

    x1 = (-b + sqrt(pow(b, 2)- 4 * a * c))/(2 * a);
    x2 = (-b - sqrt(pow(b, 2)- 4 * a * c))/(2 * a);

    cout<< "x1 = " << x1 << endl;
    cout<< "x2 = " << x2 << endl;


    return 0;
}
