#include <iostream>
#include "Animal.h"

using namespace std;

#ifndef ANIMALCARNIVORO_H_INCLUDE
#define ANIMALCARNIVORO_H_INCLUDE

class AnimalCarnivoro: public Animal{
    public:
        void alimentarse();

};
void AnimalCarnivoro:: alimentarse(){
    cout<<"El animal carnivoro se aliemnta de carne"<<endl;
}

#endif //ANIMALCARNIVORO_H_INCLUDE