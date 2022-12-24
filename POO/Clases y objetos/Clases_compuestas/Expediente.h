#include <iostream>

#ifndef EXPEDIENTE_H_INCLUDE
#define EXPEDIENTE_H_INCLUDE

class Expediente{
    private:
        int no_expediente;
    
    public:
        Expediente(int);
        Expediente();
        ~Expediente();

        int getNoExpediente();


};

Expediente:: Expediente(int no_expediente){
    this->no_expediente = no_expediente;
}

Expediente:: Expediente(){
    no_expediente = 0;
}

Expediente:: ~Expediente(){

}

int Expediente:: getNoExpediente(){
    return no_expediente;
    }

#endif //EXPEDIENTE_H_INCLUDE