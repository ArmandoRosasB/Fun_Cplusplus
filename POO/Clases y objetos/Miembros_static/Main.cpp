#include <iostream>

#include "Estatico.h"
#include <stdlib.h>

using namespace std;

int main (int argc, char** argv){
    Estatico* ob1 = new Estatico();
    Estatico* ob2 = new Estatico();
    Estatico* ob3 = new Estatico();

    cout<<ob1->getContador()<<endl;

    cout<<"La suma es: "<<Estatico::sumar(4, 5)<<endl;



    system("pause");
    return 0;
}