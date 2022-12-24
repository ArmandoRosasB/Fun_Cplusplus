#include <iostream>
#include <stdlib.h>

#include "Barco.h"
#include "Avion.h"
#include "Hidroavion.h"


using namespace std;


int main (int argc, char* argv[]){
    Hidroavion* ob1 = new Hidroavion("Veloz12", "HA99", "123OP");

    ob1->mostrarDatos();
    cout<<endl;

    ob1->indicarBarco();
    ob1->indicarAvion();

    delete ob1;

    cout<<"\n\n";
    system("pause");
    return 0;
}