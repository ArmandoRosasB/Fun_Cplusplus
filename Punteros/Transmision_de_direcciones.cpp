/*Transmisión de Direccion

Ejemplo: Intercambiar el valor de dos variables. */


#include <iostream>
#include <conio.h>

using namespace std;

void intercambio(float *, float *); //Prototipo

int main (){
    float num1 = 20.8, num2 = 6.78;

    cout<<"Primer numero: "<<num1<<endl;
    cout<<"Segundo numero: "<<num2<<endl;

    intercambio(&num1, &num2); //Llamada a la funcion

    cout<<"\nPrimer numero despues del intercambio: "<<num1<<endl;
    cout<<"Segundo numero despues del intercambio: "<<num2<<endl;

    getch();
    return 0;
}

void intercambio(float * dir_Nm1, float * dir_Nm2){
    float aux;

    //Intercambiar los valores de las variables
     aux =*dir_Nm1;
    *dir_Nm1 = *dir_Nm2;
    *dir_Nm2 = aux;

}