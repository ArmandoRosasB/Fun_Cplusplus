#include <iostream>
#include "QuickSort.h"


using namespace std;

int main(int argc, char* argv[]){
    int *arreglo1;
    int size;

    cout<<"Digite la cantidad de numeros que tendra el arreglo: "; cin>>size;
    arreglo1 = new int[size];
    for(int i = 0; i <size; i++){
        cout<<"Digite el numero de la posicion " << i << ": "; cin>> arreglo1[i];
    }

    quickSortDescendente(arreglo1, 0, size - 1);

    cout<< "[ ";
    for (int i = 0; i < size; i++){
        cout<< arreglo1[i] <<" ";
    }
    cout<< "]\n";

    system("pause");
    return 0;
}
