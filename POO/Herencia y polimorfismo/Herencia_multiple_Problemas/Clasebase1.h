#include <iostream>
using namespace std;


#ifndef CLASEBASE1_H_INCLUDE
#define CLASEBASE1_H_INCLUDE

class Clasebase1{
    protected:
        int x;

    public:
        Clasebase1(int);
        ~Clasebase1();
        int getX();
};

Clasebase1:: Clasebase1(int x){
    this->x = x;
}

Clasebase1:: ~Clasebase1(){}

int Clasebase1:: getX(){
    return x;
}

#endif //CLASEBASE1_H_INCLUDE