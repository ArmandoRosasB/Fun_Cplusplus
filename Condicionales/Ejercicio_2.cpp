#include <iostream>

using namespace std;

int main () {

    float n1, n2, n3;

    cout<< "Ingrese un numero: ";
    cin>> n1;
    cout<< "Ingrese otro numero: ";
    cin>> n2;
    cout<< "Ingrese otro numero: ";
    cin>> n3;

    if( (n1 >= n2) && (n1 >= n3) ){
        cout<< n1 << " es el numero mas grande"<< endl;

    } else if ( (n2 >= n1) && (n2 >= n3) ){
        cout<< n2 << " es el numero mas grande"<< endl;

    } else {
        cout<< n3 << " es el numero mas grande"<< endl;

    }



    return 0;
}