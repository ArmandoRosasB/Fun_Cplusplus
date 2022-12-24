#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main () {
    int n, i;
    vector <int> numeros;

    cout<< "Ingresa la cantidad de numeros que tendrá el arreglo: ";
    cin>> n;
    numeros.resize(n);
    cout<< endl;

    for (i = 0; i<n; i++){
        cout<< "Ingrese un numero: ";
        cin>> numeros[i];
        cout<<endl;
    }

    for (i = 0; i<n; i++){
        cout<<i<< ". "<<numeros[i]<<endl;
       
     
    }

    getch();
    return 0;
}