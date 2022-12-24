#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos();
bool ordenado(int [], int);


int tamanio;
int vec[1000];

int main (){
    pedirDatos();
    if(ordenado(vec, tamanio)){
        cout<<"El vector esta ordenado crecientemente"<<endl;
    } else{
        cout<< "El vector no esta ordenado crecientemente"<<endl;
    }


    getch();
    return 0;
}


void pedirDatos(){
    cout<<"Ingrese el numero de elementos: ";
    cin>>tamanio;

    for(int i = 0; i<tamanio; i++){
        cout<<"Ingrese un valor: ";
        cin>> vec[i];
    }
}

bool ordenado(int vector[], int tam){
    for(int i = 0; i<(tam - 1); i++){
        if(vec[i] > (vec[i+1])){
            return false;
        }
    }
    return true;
}