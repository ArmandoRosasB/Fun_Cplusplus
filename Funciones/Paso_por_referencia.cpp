//Paso de parametros por referencia
/*
Pasar la direccion de memoria en dodne esta
almacenado dicho valor

& = direccion de
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void valNuevo(int&, int&);

int main (){
    int num1, num2;
    cout<<"Ingrese dos numeros: ";
    cin>> num1 >> num2;

    valNuevo(num1, num2);

    cout<<"El nuevo valor del primer numero es: "<<num1<<endl;
    cout<<"El nuevo valor del segundo numero es: "<<num2<<endl;

    cout<<endl;
    system("pause");
    return 0;
}

void valNuevo(int& xnum, int& ynum){
    cout<< "El valor del primer numero es: "<<xnum<<endl;
    cout<< "El valor delsegundo numero es: "<<ynum<<endl;

    xnum = 89;
    ynum = 45; 
}