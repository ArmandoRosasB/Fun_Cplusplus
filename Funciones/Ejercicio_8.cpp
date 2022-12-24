#include <iostream>
#include <stdlib.h>

using namespace std;

void cambio(int, int&, int&, int&, int&, int&, int&);

int main (){
    int valor, cien, cincuenta, veinte, diez, cinco, uno;

    cout<<"Digite la cantidad de dolares: ";
    cin>>valor;

    cambio(valor, cien, cincuenta, veinte, diez, cinco, uno);

    cout<<"Cantidad de billetes a entregar como cambio: "<<endl;

    cout<<"Numero de billetes de 100: "<<cien<<endl;
    cout<<"Numero de billetes de 50: "<<cincuenta<<endl;
    cout<<"Numero de billetes de 20: "<<veinte<<endl;
    cout<<"Numero de billetes de 10: "<<diez<<endl;
    cout<<"Numero de billetes de 5: "<<cinco<<endl;
    cout<<"Numero de billetes de 1: "<<uno<<endl;


    system("pause");
    return 0;
}

void cambio(int dolares, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
    cien = dolares/100;
    dolares %= 100;
    cincuenta = dolares/50;
    dolares %= 50;
    veinte = dolares/20;
    dolares %= 20;
    diez = dolares/10;
    dolares %= 10;
    cinco = dolares/5;
    dolares %= 5;
    uno = dolares;

}