#include <iostream>
#include <stdlib.h>

#include "Cuadrilatero.h"

using namespace std;

int main(){
    Cuadrilatero* c1;
    float lado1, lado2;

    cout<<"Digite el lado uno: ";
    cin>>lado1;
    cout<<"Digite el lado dos: ";
    cin>>lado2;

    if(lado1 == lado2){
        c1 = new Cuadrilatero(lado1);
    } else{
        c1 = new Cuadrilatero(lado1, lado2);
    }

    cout<<"\nEl perimetro es: "<<c1->obtenerPerimetro()<<endl;
    cout<<"El area es: "<< c1->obtenerArea()<<endl;

    delete c1;


    system("pause");
    return 0;
}