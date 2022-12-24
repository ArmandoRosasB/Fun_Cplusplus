#include <iostream>
#include <stdlib.h>

using namespace std;

struct Etapa{
    int horas;
    int minutos;
    int segundos;
} etapas[3], *puntero_etapas = etapas;

void pedirDatos(Etapa *, int);
void calculoTiempo(Etapa *, int);
void mostrarDatos();

int horas, minutos, segundos;

int main (){
    pedirDatos(puntero_etapas, 3);
    calculoTiempo(puntero_etapas, 3);
    mostrarDatos();

    cout<<"\n";

    system("pause");
    return 0;
}

void pedirDatos(Etapa *puntero_etapas, int n){
    cout<<"Tiempo empleado por un ciclistas"<<endl;
    for(int i = 0; i<n; i++){
        cout<<"\nEtapa "<<i<<endl;
        cout<<"Horas: ";
        cin>>(puntero_etapas + i)->horas;
        cout<<"Minutos: ";
        cin>>(puntero_etapas + i)->minutos;
        cout<<"Segundos: ";
        cin>>(puntero_etapas + i) ->segundos;
        cout<<"\n";
    }
}

void calculoTiempo(Etapa *puntero_etapas, int n){

    for(int i = 0; i<n; i++){
        horas += (puntero_etapas + i)->horas;
        minutos += (puntero_etapas + i)->minutos;
        segundos += (etapas + i)->segundos;
    }

    if(segundos > 60){
        minutos += (segundos/60);
        segundos %= 60;
    }

    if(minutos > 60){
        horas += (minutos/60);
        minutos %= 60;
    }

}

void mostrarDatos(){
    cout<<"\n\nTiempo total"<<endl;
    cout<<"Total de horas: "<<horas<<endl;
    cout<<"Total de minutos: "<<minutos<<endl;
    cout<<"Ttotal de segundos: "<<segundos<<endl;

}
