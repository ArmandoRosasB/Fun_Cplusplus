#include <iostream>
#include <stdlib.h>


#include "Persona.h"

using namespace std;


int main(int argc, char** argv){
    Persona* persona1, *persona2;

    persona1 = new Persona("Armando", 19);
    persona1 ->correr();

    persona2 = new Persona("123476556");
    persona2->correr(2);

    delete persona1;
    delete persona2;


    system("pause");
    return 0;
}