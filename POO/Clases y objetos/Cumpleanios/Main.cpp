#include <iostream>
#include <stdlib.h>
#include "cumpleanios.h"

using namespace std;

int main (int argc, char** argv){
    Cumpleanios *hoy;
    Cumpleanios *cumple;
    int dia, mes;

    cout<<"Ingrese la fecha de hoy, dia: ";
    cin>>dia;
    cout<<"Ingrese la fecha de hoy, mes: ";
    cin>>mes;

    hoy = new Cumpleanios(dia, mes);

    cout<<"\nIngrese la fecha su cumpleanios, dia: ";
    cin>>dia;
    cout<<"Ingrese la fecha de su cumpleanios, mes: ";
    cin>>mes;

    cumple = new Cumpleanios(dia, mes);
    cout<<endl;
    //Mostrando las fechas
    hoy->visualizar();
    cout<<endl;
    cumple->visualizar();

    if(hoy->igual(*cumple)){
        cout<<"\nFeliz cumpleanios!!!"<<endl;
    } else{
        cout<<"\nQue tenga un buen dia"<<endl;
    }

    system("pause");
    return 0;
}