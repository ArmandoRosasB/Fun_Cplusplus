#include <iostream>
#include <stdlib.h>
#include "Intercambio.h"

using namespace std;

int main(int argc, char* argv[]){
    string dato1, dato2;

    cout<<"Digite el valor de dato1: "; cin>>dato1;
    cout<<"Digite el valor de dato2: "; cin>>dato2;

    intercambiar(dato1, dato2);


    cout<<"\n\nNuevo valor de dato 1: "<< dato1 <<endl;
    cout<<"Nuevo valor de dato 2: "<< dato2 << endl;


    system("pause");
    return 0;
}