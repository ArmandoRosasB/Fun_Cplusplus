#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main () {
    int n, i;
    vector <int> numeros;
    vector <int> inverso;

    cout<< "Ingresa la cantidad de numeros que tendrá el arreglo: ";
    cin>> n;
    numeros.resize(n);
    inverso.resize(n);
    cout<< endl;

    for (i = 0; i<n; i++){
        numeros[i] = i+1;
    }

    for (i = 0; i<n ; i++){

        if(i == (n-1)){
            inverso[i] = numeros[n-n];
        } else{
        
       inverso[i] = numeros[n-(i+1)];
        }
     
    }

    cout<< "Vector inicial: ";

     for (i = 0; i<n ; i++){
        
       cout<< numeros[i]<< " ";
     
    }
    cout<< "\nVector inverso: ";
    for (i = 0; i<n ; i++){
        
       cout<< inverso[i]<< " ";
     
    }
    cout<< endl;

    getch();
    return 0;
}