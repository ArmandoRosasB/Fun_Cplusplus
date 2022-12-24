#include <iostream>
#include <conio.h>

using namespace std;


void tiempo(int, int&, int&, int&);

int main(){
    int segundos;
    int horas, minutos, seg;

    cout<<"Ingresa el numero de segundos: ";
    cin>>segundos;

    tiempo(segundos, horas, minutos, seg);

    cout<<"\nHoras: "<<horas<<endl;
    cout<<"Minutos: "<<minutos<<endl;
    cout<<"Segundos: "<<seg <<endl;

    getch();
    return 0;
}

void tiempo(int segundos, int& horas, int& minutos, int& seg){
    horas = 0;
    minutos = 0;

    if(segundos >= 60){
        minutos = segundos /60;
        segundos %= 60;
    }
    if (minutos >= 60){
        horas = minutos /60;
        minutos %= 60;
    }
    seg = segundos;
    
    
}