#include <iostream>
#include <stdlib.h>

#include "Vehiculos.h"
#include "Turismo.h"
#include "Deportivo.h"
#include "Furgoneta.h"

using namespace std;


int main (int argc, char** argv){
    Turismo* t1 = new Turismo("Toyota", "Plomo", "GH89", 4);
    cout<<"\n-Herencia publica-"<<endl;
    cout<<"Color: "<<t1->getColor()<<endl;

    t1->setColor("Negro");
    cout<<"Color: "<<t1->getColor()<<endl;

    cout<<"Modelo: "<<t1->_getModelo()<<endl;


    cout<<"\n\n-Herencia privada-"<<endl;
    Deportivo* d1 = new Deportivo("Audi", "Blanco", "KP98", 10);

    cout<<"Cilindrada: "<<d1->getCilindrada()<<endl;
    cout<<"Marca: "<<d1->regresarMarca()<<endl;

    cout<<"\n\n-Herencia protegida-"<<endl;
    Furgoneta* f1 = new Furgoneta("Kia", "Verde", "AS12", 1200);

    cout<<"Carga: "<<f1->getCarga()<<endl;
    cout<<"Color: "<<f1->regresarColor()<<endl;

    delete t1;
    delete d1;
    delete f1;

    system("pause");
    return 0;
}