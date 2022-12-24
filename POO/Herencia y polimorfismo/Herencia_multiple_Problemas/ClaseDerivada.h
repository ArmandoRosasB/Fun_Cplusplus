#include <iostream>
#include "Clasebase1.h"
#include "Clasebase2.h"

using namespace std;

#ifndef ClaseDerivada_H_INCLUDE
#define ClaseDerivada_H_INCLUDE

class ClaseDerivada : public Clasebase1, public Clasebase2 {
    protected:
        int x;

    public:
        ClaseDerivada(int, int, int);
        ~ClaseDerivada();
        int getX();

};

ClaseDerivada:: ClaseDerivada(int x1, int x2, int x): Clasebase1(x1), Clasebase2(x2){
    this->x = x;
}

ClaseDerivada:: ~ClaseDerivada(){}

ClaseDerivada:: getX(){
    return Clasebase1::getX(); //Evitar la ambiguedad
}


#endif //ClaseDerivada_H_INCLUDE
