#include <iostream>
using namespace std;


#ifndef CLASEBASE2_H_INCLUDE
#define CLASEBASE2_H_INCLUDE

class Clasebase2{
    protected:
        int x;

    public:
        Clasebase2(int);
        ~Clasebase2();
        int getX();
};

Clasebase2:: Clasebase2(int x){
    this->x = x;
}

Clasebase2:: ~Clasebase2(){}

int Clasebase2:: getX(){
    return x;
}

#endif //CLASEBASE2_H_INCUDE