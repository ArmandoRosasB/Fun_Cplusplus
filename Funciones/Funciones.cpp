//Ejemplo encontrar el mayor de 2 numeros

/*
Prototipo
tipo nombre(tipo , tipo, ... , tipo);

Definicion

tipo nombre(tipo var1, tipo var2, ... , tipo varn){

}


*/

#include <iostream>
#include <conio.h>

using namespace std;

//Prototipo de la función
int encontrarMax(int , int);

int main (){
    int n1, n2, max;

    cout<<"Digite dos numeros: ";
    cin>>n1>>n2;

    max = encontrarMax(n1, n2);

    cout<<"El numero máximo es: "<<max;


    getch();
    return 0;
}

//Definicion de la funcion
int encontrarMax(int x, int y){
    int numMax;
    if(x > y){
        numMax = x;
    } else{
        numMax = y;
    }

    return numMax;
}