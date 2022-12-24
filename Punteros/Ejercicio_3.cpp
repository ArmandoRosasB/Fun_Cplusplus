#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
    int arreglo[10];
    int *dir_numero;

    cout<<"Inicializando arreglo de 10 numeros: "<<endl;
    for(int i = 0; i<10; i++){
        cout<<"Arreglo ["<<i<<"]: ";
        cin>>arreglo[i];
    
    }

    dir_numero = arreglo;

    cout<<"Numeros pares del arreglo: ";
    for(int i = 0; i<10; i++){
        if(*dir_numero % 2 == 0){
            cout<<"\nArreglo ["<<i<<"]: "<< *dir_numero <<endl;
            cout<<"Direccion de memoria: "<< dir_numero <<endl;
        }
        dir_numero ++;

    }



    system("pause");
    return 0;
    }