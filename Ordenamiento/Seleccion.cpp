#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    int n;
    cout<<"Ingresa la cantidad de numeros que contendra tu arreglo:";
    cin>>n;
    int numeros[n];

    int i, j, aux, min;
    
    for(i = 0; i<n; i++){
        cout<<"Ingresa el dato: "<<i<<": ";
        cin>> numeros[i];
    }


    //Algoritmo ordenamiento por selección
    for(i = 0; i<n; i++){
        min = i;
        for(j = i+1; j<n; j++){
            if(numeros[j] < numeros[min]){
                min = j;
            }
        }
        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min] = aux;
        
    }

    cout<< "Orden ascendente: "<<endl;
    for(i= 0; i<n; i++){
        cout<<numeros[i];
    }

    cout<< "\nOrden descendente: "<<endl;
    for(i=(n-1); i>=0; i--){
        cout<<numeros[i];
    }


    getch();
    return 0;
}