#include <iostream>
#include <stdlib.h>

#include "Clasebase.h"
#include "ClaseDerivada.h"


using namespace std;


int main (int argc, char* argv[]){
    ClaseDerivada* ob1 = new ClaseDerivada(5, 10);
    cout<<"\n";
/*
Primero se inicializan los atributos del constructor de la clase base y 
posteriormente inicializan los atributos del constructor de la 
clase derivada

*/

    delete ob1;
    
/*
Primero de destruye el objeto de la clase derivada y 
posteriormente se destruye el constructor de la clase base

*/

    cout<<endl;
    system("pause");
    return 0;
}