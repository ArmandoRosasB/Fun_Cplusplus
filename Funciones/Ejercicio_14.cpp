#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos();
void impares(int [], int);
void mostrar();

int tamanio;
int numeros[1000];
int vec_impares[1000];
int j = 0;

int main (){
    pedirDatos();
    impares(numeros, tamanio);
    mostrar();


    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese la cantidad de nuemros que habra en el vector: ";
    cin>> tamanio;

    for(int i = 0; i<tamanio; i++){
        cout<<"Ingresa un numero: ";
        cin>>numeros[i];
    }
}
void impares(int vector[], int tam){
    for(int i = 0; i<tam; i++){
        if((vector[i] % 2) != 0){
            vec_impares[j] = vector[i];
            j++;
        }
    }
}

void mostrar (){
    cout<<"Vector de solo impares: ";
    for(int i = 0; i<j; i++){
        cout<<vec_impares[i]<<" ";
    }
    cout<<endl;

}