#include <iostream>
#include "Alumno.h"
#include "Deportista.h"

using namespace std;



#ifndef BECADODEPORTE_H
#define BECADODEPORTE_H


class BecadoDeporte : public Alumno, public Deportista {
    private:
        float montoBeca;
    
    public:
        BecadoDeporte(string, string, float);
        void mostrarDatos();
        void setMontoBeca(float);
        float getMontoBeca();
};


BecadoDeporte:: BecadoDeporte(string nombreCarrera, string nombreEntrenador, float montoBeca): Alumno(nombreCarrera), Deportista(nombreEntrenador){
    this->montoBeca = montoBeca;
}

void BecadoDeporte:: mostrarDatos(){
    Alumno:: mostrarDatos();
    Deportista:: mostrarDatos();
    cout<< "El monto de beca es de: "<<montoBeca<<endl;
}

void BecadoDeporte:: setMontoBeca(float n){
    float incremento = (montoBeca * n)/100;
    montoBeca  += incremento;
}

float BecadoDeporte:: getMontoBeca(){
    return montoBeca;
}
#endif //BECADODEPORTE_Hs