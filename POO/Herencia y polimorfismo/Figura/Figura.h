#include <iostream>

#ifndef FIGURA_H_INCLUDE
#define FIGURA_H_INCLUDE

class Figura {
    private:
        int nLados;

    public:
        Figura(int);
        int getNLados();


};

Figura:: Figura(int nLados){
    this->nLados = nLados;
}

int Figura:: getNLados(){
    return nLados;
}

#endif //FIGURA_H_INCLUDE