#include <iostream>

class Datos{
    private:
        std::string nombre;
        std::string apellido;
        std::string telefono;

    public:
        Datos();
        Datos(std::string, std::string,std::string);
        ~Datos();

        std::string getNombre();
        std::string getApellido();
        std::string getTelefono();
};

Datos:: Datos(){
    nombre = "NULL";
    apellido = "NULL";
    telefono = "NULL";
}

Datos:: Datos(std::string nombre, std::string apellido, std::string telefono){
    this-> nombre = nombre;
    this-> apellido = apellido;
    this-> telefono = telefono;
}

Datos:: ~Datos(){};

std::string Datos:: getNombre(){
    return nombre;
}

std::string Datos:: getApellido(){
    return apellido;
}

std::string Datos:: getTelefono(){
    return telefono;
}