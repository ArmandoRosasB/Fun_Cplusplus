#include <iostream>
#include <conio.h>


using namespace std;

void pedirDatos();
void funpot(int, int);

int base, exponente;

int main (){

    pedirDatos();
    funpot(base, exponente);

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese la base: ";
    cin>>base;
    cout<<"Ingresa el exponente: ";
    cin>>exponente;
}

void funpot(int num1, int num2){
    int resultado = 1;

    for(int i= 1; i<=num2; i++){
        resultado *= num1;
    }
    cout<<num1<<"^"<<num2<< " = "<<resultado;
}