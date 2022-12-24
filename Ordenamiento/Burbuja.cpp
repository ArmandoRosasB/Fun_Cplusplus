#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    int n;
    cout<<"Ingresa la cantidad de numeros que contendra tu arreglo:";
    cin>>n;
    int numeros[n];

    int i, j, aux;
    for(i = 0; i<n; i++){
        cout<<"Ingresa el dato: "<<i<<": ";
        cin>> numeros[i];
    }


    //Algoritmo de método burbuja
    for(i = 0; i<n; i++){
        for(j = 0; j<(n-1); j++){
            if(numeros[j]> numeros[j+1] ){
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }
    
    cout<< "Orden ascendente: "<<endl;
    for(i = 0; i<n; i++){
        cout<< numeros[i] << " ";
    }

    cout<<"\n";

    cout<<"Orden descendente: "<<endl;
    for(i = (n-1); i>=0; i--){
        cout<< numeros[i] << " ";
    }

    getch();
    return 0;
}

