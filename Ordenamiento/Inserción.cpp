#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    int n, i;
    cout<<"Ingresa la cantidad de numeros que contendra tu arreglo:";
    cin>>n;

    int numeros[n];
    for(i = 0; i<n; i++){
        cout<<"Ingresa el dato: "<<i<<": ";
        cin>> numeros[i];
    }

    int pos, aux;

    //Algoritmo ordenamiento por inserción

    for(i = 0; i<n; i++){
        pos = i;
        aux = numeros[i];
        while((pos > 0) && (numeros[pos-1]> aux)){
            numeros[pos] = numeros[pos - 1];
            pos--;
  
        }
        numeros[pos] = aux;

    }

    cout<< "Orden ascendente: "<<endl;
    for(i= 0; i<n; i++){
        cout<<numeros[i]<<" ";
    }

    cout<< "\nOrden descendente: "<<endl;
    for(i=(n-1); i>=0; i--){
        cout<<numeros[i]<< " ";
    }

    getch();
    return 0;
}
