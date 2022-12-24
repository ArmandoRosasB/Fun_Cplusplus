#include <iostream>

#ifndef VEHICULO_H_INCLUDE
#define VEHICULO_H_INCLUDE

class Vehiculo{
    private:
        static int contador;
        std::string marca;
        std::string modelo;
        float precio;
    
    public:
        Vehiculo();
        Vehiculo(std::string, std::string, float);
        float getPrecio();
        void mostrarDatos();
        int getContador();

};

Vehiculo:: Vehiculo(){
    marca = "########";
    modelo = "########";
    precio = 0;

    contador++;
}

Vehiculo:: Vehiculo(std::string marca, std::string modelo, float precio){
    this->marca = marca;
    this->modelo = modelo;
    this->precio = precio;

    contador++;
}

float Vehiculo:: getPrecio(){
    return precio;
}

void Vehiculo:: mostrarDatos(){
    std::cout<<"\nMarca del auto: "<<marca<<std::endl;
    std::cout<<"Modelo del auto: "<<modelo<<std::endl;
    std::cout<<"Precio del auto: "<<precio<<std::endl;
}

int Vehiculo:: getContador(){
    return contador;
}

int Vehiculo:: contador = 0;


#endif //VEHICULO_H_INCLUDE