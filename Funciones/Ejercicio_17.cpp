#include <iostream>
#include <conio.h>

using namespace std;

struct Complejo{
    float real;
    float imaginario;
} z1, z2, z3;

void pedirDatos();
Complejo suma_complejos(Complejo, Complejo, Complejo);

int main (){

    pedirDatos();
    
    z3 = suma_complejos(z1, z2, z3);

    cout<<"\n\nLa suma entre ambos numeros es"<<endl;
    cout<<z3.real << " + "<< z3.imaginario << "i"<<endl;

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Digite la parte real del primer numero: ";
    cin>> z1.real;
    cout<<"Digite la parte imaginaria del primer numero: ";
    cin>>z1.imaginario;

    cout<<"\nDigite la parte real del segudo numero: ";
    cin>> z2.real;
    cout<<"Digite la parte imaginaria del segundo numero: ";
    cin>>z2.imaginario;
}

Complejo suma_complejos(Complejo num1, Complejo num2, Complejo suma){

    suma.real = num1.real + num2.real;
    suma.imaginario = num1.imaginario + num2.imaginario;

    return suma;
}