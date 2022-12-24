#include <iostream>
#include <stdlib.h>
#include <vector> //Vectores
#include <iterator> //Iteradores

#include "Atleta.h"
#include "Tiempo.h"

using namespace std;


void pedirDatos(vector <Atleta*>&, vector <Tiempo*>&, int n);
int posicionMinimo(const vector <Tiempo*>&, int);
void AtletaGanador(const vector <Atleta*>&, const vector <Tiempo*>&, int, int);

int i;

int main (){
    vector <Atleta*> atletas;
    vector <Tiempo*> tiempos;
    int n;
    int minimo;

    cout<<"Ingrese la cantidad de atletas que compitieron: ";
    cin>>n;
    cout<<endl;
    atletas.resize(n);
    tiempos.resize(n);

    pedirDatos(atletas, tiempos, n);
    minimo = posicionMinimo(tiempos, n);

    cout<<"\n\nAtleta con el menor tiempo: ";

    AtletaGanador(atletas, tiempos, n, minimo);

    for(i = 0; i<n; i++){
        delete tiempos[i];
    }

    for(i = 0; i<n; i++){
        delete atletas[i];
    }






    system("pause");
    return 0;
}

void pedirDatos(vector <Atleta*> &atletas, vector <Tiempo*>& tiempos, int n){

    string nombre;
    int numero, minutos, segundos;

    for(i = 0; i<n; i++){
        cout<<"Atleta: "<< i + 1<<endl;
        fflush(stdin);
        cout<<"Digite el nombre del atleta: ";
        cin>>nombre;
        cout<<"Digite el numero del atleta: ";
        cin>>numero;
        cout<<"Digite los minutos: ";
        cin>>minutos;
        cout<<"Digite los segundos: ";
        cin>>segundos;
        tiempos[i] = new Tiempo(minutos, segundos);
        atletas[i] = new Atleta(numero, nombre, tiempos[i]);
        cout<<endl;
    }
}

int posicionMinimo(const vector <Tiempo*>& tiempos, int n){
    int min = (tiempos[0]->getMinutos() * 60) + tiempos[0]->getSegundos();
    
    for(i = 0; i<n; i++){
        if((tiempos[i]->getMinutos() * 60) + tiempos[i]->getSegundos() < min){
            min = i;
            
        }
    }

    return min;

}

void AtletaGanador(const vector <Atleta*>& atletas, const vector <Tiempo*>& tiempos, int n, int min){
            atletas[min]->mostrarDatos();


}