#include <iostream>
#include <stdlib.h>

using namespace std;

struct etapa{
    int horas;
    int minutos;
    int segundos;
} etapas[100];

int main (){
    int n, i;
    cout<<"Ingrese el numero total de etapas recorridas: ";
    cin>>n;
    cout<<endl;
    for(i = 0; i<n; i++){
        cout<<"Etapa "<< i+1<<endl;\
        cout<<"Ingresa el numero de horas: ";
        cin>> etapas[i].horas;
        cout<<"Ingresa el numero de minutos: ";
        cin>> etapas[i].minutos;
        cout<<"Ingresa el numero de segundos: ";
        cin>> etapas[i].segundos;
        cout<<endl;
    }

    int horas, minutos, segundos;
    horas = 0;
    minutos = 0;
    segundos = 0;

    for(i = 0; i<n; i++){
        horas += etapas[i].horas;
        minutos += etapas[i].minutos;
        segundos += etapas[i].segundos;
        while(minutos > 60 || segundos > 60){
            if(segundos > 60){
                segundos -= 60;
                minutos ++;
            } else if(minutos > 60){
                minutos -= 60;
                horas ++;
            }
        }
    }

    cout<<"Tiempo total recorrido"<<endl;
    cout<<horas<<" horas"<<endl; 
    cout<<minutos<<" minutos"<<endl;
    cout<<segundos<<" segundos"<<endl;

    system("pause");
    return 0;
}