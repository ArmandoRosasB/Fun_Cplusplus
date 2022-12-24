#include <iostream>
#include "SerVivo.h"

using namespace std;

#ifndef ANIMAL_H_INCLUDE
#define ANIMAL_H_INCLUDE


class Animal: public SerVivo{
    /*
    No se tiene que volver a definir al función virtual, ya esta
    implicita.
    virtual void alimentarse(); Ya esta implementada

*/


};

#endif //ANIMAL_H_INCLUDE