#include <iostream>

using namespace std;

int main() {

    float n1, n2;

    cout<< "Digite un numero: ";
    cin >> n1;
    cout<< "Digite otro numero: ";
    cin>> n2;

    if(n1 != n2) {
        if(n1 > n2){
            cout<< n1 << " es mayor a " << n2 << endl;
        } 
        if(n1 < n2){
            cout<< n2 << " es mayor a " << n1 << endl;
        } 
        } else{
            cout<< n1 << " es igual a " << n2 << endl;
        }
    
    //Usando else if
    cout<< "Digite un numero: ";
    cin >> n1;
    cout<< "Digite otro numero: ";
    cin>> n2;

    if (n1 == n2) {
        cout<< "Ambos numeros son iguales";

    } else if(n1 > n2){
            cout<< n1 << " es mayor a " << n2 << endl;
        } else {
            cout<< n2 << " es mayor a " << n1 << endl;
        } 



    return 0;
}