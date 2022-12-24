#include <iostream>
#include "SerVivo.h"

using namespace std;

#ifndef PLANTA_H_INCLUDE
#define PLANTA_H_INCLUDE

class Planta : public SerVivo {
    public:
        void alimentarse(); /*
        Implementación de la función virtual de la clase padre*/

};

void Planta:: alimentarse(){
    cout<<"La planta se aliemnta mediante fotosintesis"<<endl;
}

#endif //PLANTA_H_INCLUDE
