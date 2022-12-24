//Destructor de objetos
//Autoreferencia del Objeto: this

#include <iostream>


#ifndef PERRO_H_INCLUDE
#define PERRO_H_INCLUDE

class Perro{
    private:
        std::string nombre;
        std::string raza;
    public:
        Perro(std::string, std::string);
        ~Perro();
        void mostrarDatos();
        void jugar();
        
};

Perro:: Perro(std::string nombre, std::string raza){
    this->nombre = nombre; // this->nombre Esto hace referencia al atributo de la clase
    this->raza = raza;
}

Perro:: ~Perro(){

}

void Perro:: mostrarDatos(){
    std::cout<< "Nombre: "<<nombre<<std::endl;
    std::cout<< "Raza: "<<raza<<std::endl;
}

void Perro:: jugar(){
    std::cout<<"El perrito "<<nombre<<" esta jugando"<<std::endl;
}



#endif //PERRO_H_INCLUDE    