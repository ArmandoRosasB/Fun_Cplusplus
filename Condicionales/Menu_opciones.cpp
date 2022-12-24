#include <iostream>
#include <math.h>

using namespace std;

int main () {

    int opcion;

    cout<< "Menu: "<<endl;
    cout<<"1. Cubo de un numero"<<endl;
    cout<<"2. Numero par o impar"<<endl;
    cout<<"3. Salir"<<endl;
    cout<< "Ingresa la opcion: ";
    cin>> opcion;
    cout<< endl;

    switch(opcion){
        case 1:
            float n, r;
            cout<< "Ingresa un numero: ";
            cin>> n;
            r = pow(n, 3);
            cout<< "El cubo del numero es : "<< r;
            break;

        case 2: 
            int n2, res;
            cout<< "Ingresa un numero:" ;
            cin>> n2;
            res = n2 % 2;
    
            if (res == 0) {
                cout<< "El numero es par";

            } else {
                cout<< "El numero es impar";
                }
             break;

        case 3:
            cout<< "Saliendo... "<<endl;
            break;
    }
    return 0;
}