#include <iostream>
#include "Animal.h"

using namespace std;

#ifndef ANIMALHERBIVORO_H_INCLUDE
#define ANIMALHERBIVORO_H_INCLUDE


class AnimalHerbivoro: public Animal{
    public:
        void alimentarse();


};

void AnimalHerbivoro:: alimentarse(){
    cout<<"El animal herbivoro se alimenta de hierbas"<<endl;
}

#endif //ANIMALHERBIVORO_H_INCLUDE