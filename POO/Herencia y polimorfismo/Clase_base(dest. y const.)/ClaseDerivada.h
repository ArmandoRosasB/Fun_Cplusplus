#include <iostream>
#include "Clasebase.h"

using namespace std;

#ifndef CLASEDERIVADA_H_INCLUDE
#define CLASEDERIVADA_H_INCLUDE

class ClaseDerivada : public ClaseBase{
    private:
        int numero2;

    public:
        ClaseDerivada(int, int);
        ~ClaseDerivada();
};

ClaseDerivada:: ClaseDerivada(int numero, int numero2): ClaseBase(numero){
    this->numero2 = numero2;
    cout<<"Constructor de la clase derivada"<<endl;
}

ClaseDerivada:: ~ClaseDerivada(){
    cout<<"Destructor de la clase derivada"<<endl;
}

#endif //CLASEDERIVADA_H_INCLUDE