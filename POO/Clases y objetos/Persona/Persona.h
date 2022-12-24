//Sobrecarga de funciones miembro

/* Metodos con el mismo nombre que se diferencias con 
la cantidad de parámetros o el tipo de parámetros que 
contienen
*/

#include <iostream>


#ifndef PERSONA_H_INCLUDE
#define PERSONA_H_INCLUDE

class Persona{
    //Atributos
    private:
        std::string nombre;
        int edad;
        std::string dni;

    //Metodos
    public:
        Persona(std::string, int);
        Persona(std::string);
    	void correr() const;
        void correr(int) const;
        void correr(float) const;
};

Persona:: Persona(std::string _nombre, int _edad){ //
    nombre = _nombre;
    edad = _edad;
}

Persona:: Persona(std::string _dni){
    dni = _dni;
}

void Persona:: correr() const{

    std::cout<<"Soy "<<nombre<<", tengo "<<edad<<
    " anios y estoy corriendo un maraton"<<std::endl;
}

void Persona:: correr(int km) const{

    std::cout<< "He corrido "<<km<<" kilometros"<<"\n";
}

void Persona:: correr(float km) const{

    std::cout<< "He corrido "<<km<<" kilometros"<<"\n";

}

#endif //PERSONA_H_INCLUDE