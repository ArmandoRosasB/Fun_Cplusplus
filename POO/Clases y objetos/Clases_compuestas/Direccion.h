#include <iostream>


#ifndef DIRECCION_H_INCLUDE
#define DIRECCION_H_INCLUDE

class Direccion{
    private:
        std::string direccion;
    
    public:
        Direccion(std::string);
        Direccion();
        ~Direccion();
        std::string getDireccion();

};

Direccion:: Direccion(std::string direccion){
    this->direccion = direccion;
}

Direccion:: Direccion(){
    
}

Direccion:: ~Direccion(){

}

std::string Direccion:: getDireccion(){
    return direccion;
}

#endif //DIRECCION_H_INCLUDE