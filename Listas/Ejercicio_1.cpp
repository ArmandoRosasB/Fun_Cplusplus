#include <iostream>
#include <stdlib.h>
#include "List.h"

using namespace std;

int main(int argc, char* argv[]){
    List<float> nums;
    float dato;
    char respuesta;

    do{
        cout<<"Digite un numero para agregar en la lista: "; cin >> dato;
        nums.push_back(dato);

        cout<<"Desea agregar otro elemento (S/N): "; cin>> respuesta;

    } while (respuesta == 'S' || respuesta == 's');

    cout<< "\nLa lista creada es: " << nums.toString();
    cout<<"Numero maximo: "<< nums.getMax()<<endl;
    cout<<"Numero minimo: "<< nums.getMin()<<endl;
    cout<<"La suma de los elementos es: "<< nums.getSum()<<endl;
    cout<<"El promedio de los elementos es: "<<nums.getAverage()<<endl;



    system("pause");
    return 0;
}