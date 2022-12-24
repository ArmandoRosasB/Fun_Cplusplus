#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    int a[] = {3, 4, 2, 1, 5};
    int i, dato;
    bool bandera = false;

    dato = 4;
    i = 0;

    //Busqueda secuencial
    while((bandera == false) && (i<5)){
        if(dato == a[i]){
            bandera = true;
        } else{
            bandera = false;
            i++;
        }

    }

    if(bandera == false){
        cout<< "El numero a buscar no existe en el arrelgo"<<endl;
    }

    if(bandera == true){
        cout<< "El numero a buscar existe en el arrelgo en al posición: "<< i<<endl;
    }

    getch();
    return 0;
}