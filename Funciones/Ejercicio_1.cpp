#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void mult(float, float);

float num1, num2;
/*Variables globales, funcionan para todas las funciones
y para el main*/

int main (){
    pedirDatos();
    mult(num1, num2);

    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese dos numeros: ";
    cin>> num1 >> num2;
    
}


void mult(float x, float y){
    float mult;
    mult = x * y;
    cout<<x<<" x "<<y << " = "<<mult<<endl;
}