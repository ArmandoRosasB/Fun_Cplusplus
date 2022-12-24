#include <iostream>
#include <stdlib.h>
#include "Mayor.h"

using namespace std;


int main(int argc, char* argv[]){
    cout<< "El mayor numero de 2 numero enteros es: "<<mayor(5, 9)<<endl;
    cout<< "El mayor numero de 2 numeros reales es: "<< mayor(9.87, 4.56)<<endl;
    cout<< "El mayor de dos carateres es: " << mayor('r', 'z')<<endl;

    system("pause");
    return 0;
}

