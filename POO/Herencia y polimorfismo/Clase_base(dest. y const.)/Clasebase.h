#include <iostream>
using namespace std;

#ifndef CLASEBASE_H_INCLUDE
#define CLASEBASE_H_INCLUDE

class ClaseBase{
    private:
        int numero;
    
    public:
        ClaseBase(int); //Constructor
        ~ClaseBase();



};

ClaseBase:: ClaseBase(int numero){
    this->numero = numero;
    cout<< "Constructor de la clase base"<<endl;

}

ClaseBase:: ~ClaseBase(){
    cout<<"Destructor de la clase base"<<endl;
}

#endif //CLASEBASE_H_INCLUDE