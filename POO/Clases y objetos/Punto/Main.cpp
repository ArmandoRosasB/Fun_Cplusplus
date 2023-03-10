//Creacion de objetos

#include <iostream>
#include <stdlib.h>

#include "Punto.h"

using namespace std;

int main (int argc, char** argv){
    Punto p1(2, 1); //Creacion de un objeto estático

    cout<<"El valor de x es: "<<p1.getX()<<endl;
    cout<<"El valor de y es: "<<p1.getY()<<endl;

    Punto *p2 = new Punto(); //Creación de un objeto dinamico

    p2->setX(5);
    p2->setY(8);

    cout<<"\nEl valor de x es: "<<p2->getX()<<endl;
    cout<<"El valor de y es: "<<p2->getY()<<endl;

    delete p2;

    system("pause");
    return 0;
}