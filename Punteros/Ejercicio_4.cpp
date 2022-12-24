#include <iostream>
#include <conio.h>

using namespace std;


int main(){
    int n;
    cout<<"Ingresa el numero de elementos que tendra el arreglo: ";
    cin>>n;

    int arreglo[n];
    int *dic_numeros;

    for(int i = 0; i<n; i++){
        cout<<"Arreglo ["<<i<<"]: ";
        cin>>arreglo[i];
    }
    int min;
    dic_numeros = arreglo;
    min = *dic_numeros;

    for(int i = 0; i<n; i++){
        if(*dic_numeros < min){
            min = *dic_numeros;
        }
        dic_numeros ++;
    }

    cout<<"Menor elemento del arreglo: "<<min<<endl;

    getch();
    return 0;
}