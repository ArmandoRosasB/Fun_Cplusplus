#include <iostream>

using namespace std;

int main () {

    int edad;

    cout<< "Ingrese su edad: ";
    cin>> edad;

    if ((edad >= 18) && (edad <= 25) ){
        cout<< "Edad dentro del rango [18-25]"<<endl;

    } else {
        cout<< "Edad fuera del rango" << endl;

    }

    return 0;
}