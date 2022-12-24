#include <iostream>
#include <stdlib.h>

using namespace std;

void escribeNumeros(int, int);

int main (){
    int inicio, fin;
    do{
        cout<<"Ingrese el numero de inicio: ";
        cin>>inicio;
        cout<<"Ingrese el numero final: ";
        cin>>fin;
    } while(fin < inicio);
    escribeNumeros(inicio, fin);


    system("pause");
    return 0;
}

void escribeNumeros(int ini, int fin){
    if(ini == fin){
        cout<<fin<<endl;
    } else{
        cout<<ini << " ";
        escribeNumeros(ini + 1, fin);
    }
}