#include <iostream>
#include <conio.h>

using namespace std;

void intercambio(float& , float&);
void ordenacionShell(float [], int n);


int main (){
    int n, i;

    cout<<"Ingresa la cantidad de numeros que contendra tu arreglo:";
    cin>>n;

    float arreglo[n];

    for(i = 0; i<n; i++){
        cout<<"Ingresa el dato: "<<i<<": ";
        cin>> arreglo[i];
    }
    
    
    ordenacionShell(arreglo, n);

    cout<< "Orden ascendente: "<<endl;
        for(i= 0; i<n; i++){
            cout<<arreglo[i]<<" ";
        }

    cout<< "\nOrden descendente: "<<endl;

    for(i=(n-1); i>=0; i--){
            cout<<arreglo[i]<<" ";
        }

    getch();
    return 0;
}

void intercambio(float &x, float &y){
    float aux;
    aux = x;
    x = y;
    y = aux;

}

void ordenacionShell(float a[], int n) {
    int salto, i, j, k;
    bool band;
    salto = n/2;

    while(salto>0){
        for(i = salto; i<n; i++){
            j = i - salto;
            band = true;
            while(band == true){
                k = j + salto;
                if(a[j] <= a[k]){ //Par de elementos ordenados
                    band = false;
                } else{ //Par de elementos desordenados
                    intercambio(a[j], a[k]);
                    band = false;
                }
            }    
        }
        salto /= 2;    
    }

}