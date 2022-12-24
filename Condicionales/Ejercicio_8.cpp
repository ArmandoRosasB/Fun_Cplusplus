#include <iostream>

using namespace std;

int main () {

    int n1, n2, n3, n4;

    cout<< "Ingresa 3 numeros: "<<endl;
    cin >> n1 >> n2>> n3;

    cout<< "Ingresa un cuarto numero: ";
    cin>> n4;

    if ((n4 == n1) || (n4 == n2) || (n4 == n3)){

        cout<< "El cuarto numero es igual a uno de los tres primeros" << endl;

    } else {

        cout<< "El cuarto numero no es igual a alguno de los primeros 3";
    }


    return 0;
}