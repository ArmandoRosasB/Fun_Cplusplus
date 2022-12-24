/* Plantillas de Funcion

Ejemplo: Sacar el valor absoluto de un numero */

#include <iostream>
#include <stdlib.h>

using namespace std;

//Prototipo de Funcion usando plantilla

template <class TIPOD>
/*Prefijo de la palntilla
TIOPOD significa un tipo de dato general

La funcion de abajo va a utillizar como parametro un valro de tipo general
Ya que no sabemso si el dato sera int, float o double
*/
void mostrarAbs(TIPOD numero);

int main (){
    int num1 = -4;
    float num2 = -56.67;
    double num3 = -123.5678;

    mostrarAbs(num1);
    mostrarAbs(num2);
    mostrarAbs(num3);

    system("pause");
    return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
    if(numero<0){
        numero *= -1;
    }

    cout<<"El valor absoluto del numero es: "<<numero<<endl;
}