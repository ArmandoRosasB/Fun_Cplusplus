#include <iostream>
#include <conio.h>

using namespace std;

void intercambio(float &, float &);
void quickSort(float [], int, int);


int main (){
    int n, i;
    cout<<"Ingresa la cantidad de numeros que contendra tu arreglo:";
    cin>>n;

    float arreglo[n];
    for(i = 0; i<n; i++){
    cout<<"Ingresa el dato: "<<i<<": ";
    cin>> arreglo[i];
    }

    int posicionUltima;
    posicionUltima = n-1;

    quickSort(arreglo, 0, posicionUltima);

    cout<< "Orden ascendente: "<<endl;
    for(i= 0; i<n; i++){
        cout<<arreglo[i]<<" ";
    }

    cout<< "\nOrden descendente: "<<endl;
    for(i=(n-1); i>=0; i--){
        cout<<arreglo[i]<< " ";
    }
    cout<<endl;

    getch();
    return 0;
}

void intercambio(float &x, float &y){
    float aux;
    aux = x;
    x = y;
    y = aux;
}

void quickSort(float a[], int primero, int ultimo){
    int i, j, central;
    float pivote;

    central = (primero + ultimo)/2;
    pivote = a[central];
    i = primero;
    j = ultimo;
    do{
        while (a[i] < pivote)
        {
            i++;
        }
        while (a[j] > pivote)
        {
            j--;
        }
        
        if(i <= j){
            intercambio(a[i], a[j]);
            i++;
            j--;
        }

    } while(i <= j);

    if(primero < j){
        quickSort(a, primero, j); //Ordenamos la sublista izquierda
    }

    if(ultimo > i){
        quickSort(a, i, ultimo); //Ordenamos la sublista derecha
    }

}