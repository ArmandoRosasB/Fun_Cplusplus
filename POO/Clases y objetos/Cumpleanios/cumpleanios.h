//Clase cumpleanios

#include <iostream>

#ifndef CUMPLEANIOS_H_INCLUDE
#define CUMPLEANIOS_H_INCLUDE

class Cumpleanios{
    private:
        int dia;
        int mes;
    
    public:
        Cumpleanios();
        Cumpleanios(int, int);
        bool igual(Cumpleanios &) const;
        void visualizar();
};

Cumpleanios:: Cumpleanios(){
    dia = 0;
    mes = 0;
}

Cumpleanios:: Cumpleanios(int _dia, int _mes){
    dia = _dia;
    mes = _mes;
}

bool Cumpleanios:: igual(Cumpleanios &other) const{
    bool bandera;
    if((dia == other.dia) && (mes == other.mes))
        bandera = true;
    else
        bandera = false;
    
    return bandera;
}

void Cumpleanios:: visualizar(){
    std::cout<<"Fecha de cumpleanios: "<<dia<<"/"<<mes<<std::endl;
}




#endif //CUMPLEANIOS_H_INCLUDE