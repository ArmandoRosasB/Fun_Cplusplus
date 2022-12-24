#include <iostream>
#include <stdlib.h>

#include "Figura.h"
#include "Triangulo.h"

using namespace std;

int main (int argc, char** argv){
    Triangulo* t1 = new Triangulo(3, 5, 6, 7);

    cout<<"Numero de lados: "<<t1->getNLados()<<endl;
    cout<<"Area triángulo: "<<t1->areaTriangulo()<<endl;


    system("pause");
    return 0;
}