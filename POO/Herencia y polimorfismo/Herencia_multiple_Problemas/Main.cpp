#include <iostream>
#include <stdlib.h>

#include "Clasederivada.h"

int main (int argc, char* argv[]){
    ClaseDerivada* ob1 = new ClaseDerivada(5, 10, 15);

    cout<<"x: "<<ob1->getX()<<endl;

    delete ob1;

    system("pause");
    return 0;
}
