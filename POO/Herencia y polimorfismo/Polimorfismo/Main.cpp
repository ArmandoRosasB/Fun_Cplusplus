#include <iostream>
#include <vector>
#include <stdlib.h>
#include "Poligono.h"
#include "Rectangulo.h"
#include "Triangulo.h"


using namespace std;


int main (int argc, char* argv []){
    vector<Poligono*> poligonos;
    poligonos.resize(2);

    poligonos[0] = new Rectangulo(7, 4);
    poligonos[1] = new Triangulo(3, 4, 4);


    for (int i = 0; i<2; i++){
        cout<<"Area: "<< poligonos[i]->getArea()<<endl;
        cout<<"Perimetro: "<< poligonos[i]->getPerimetro()<<endl;
    }

    system("pause");
    return 0;
}