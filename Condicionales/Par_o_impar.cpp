#include <iostream>

using namespace std;

int main () {

    int n, res;

    cout<< "Ingresa un numero:" ;
    cin>> n;
    
    res = n % 2;
    
    if (res == 0) {
        cout<< "El numero es par";

    } else {
        cout<< "El numero es impar";

    }

    return 0;
}