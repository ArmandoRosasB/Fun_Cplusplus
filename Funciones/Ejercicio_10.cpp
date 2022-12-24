#include <iostream>
#include <conio.h>

using namespace std;

void calc_anios(int, int&, int&, int&);

int main (){
    int dias, anios, meses, _dias;

    cout<<"Ingrese el numero de dias: ";
    cin>>dias;

    calc_anios(dias, anios, meses, _dias);

    cout<<dias <<" dias despues del 1/1/2000"<<endl;
    cout<<"La fecha seria: "<<_dias <<"/"<<meses<<"/"<<anios;


    getch();
    return 0;
}

void calc_anios(int dias, int& anios, int& meses, int& _dias){
    anios = 0;
    meses = 0;


    if(dias >= 365){
        anios = dias / 365;
        dias %= 365;
    }
    if(dias >= 30){
        meses = dias/30;
        dias %= 30;
    }
    anios += 2000;
    meses += 1;
    _dias = dias +1;
}