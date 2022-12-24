//Tipos de datos

#include <iostream>

using namespace std;

int main () {
    int entero; //int se refiere a numeros enteros, sin decimales
    entero = 15; //= Operador de asignación
    cout <<"Numero entero: "<< entero << endl;

    float flotante; // float se refiere a numeros con decimales
    flotante = 10.45;
    cout <<"Numero flotante: "<< flotante << endl;

    double mayor; // double se refiere a un numero extenso o con más precisión que un float
    mayor = 16.3456;
    cout << "Numero double: " << mayor << endl;

    char letra; //char se refiere a letras
    letra = 'a'; //Se asigna uan letra con comillas simples
    cout << "Char: " << letra << endl;

    bool bandera; //Boleano. 0 es falso y 1 es verdadero
    bandera  = true;
    cout<<bandera;

    return 0;
}