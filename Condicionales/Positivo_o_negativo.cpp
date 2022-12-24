#include <iostream>

using namespace std;

int main () {
    float n;

    cout<< "Ingresa un numero: ";
    cin>> n;

    if (n > 0){
        cout<< "El numero es positivo";

    } else if (n < 0){
        cout<< "El numero es negativo";

    } else{
        cout<< "El numero es 0";
        
    }

    return 0;
}