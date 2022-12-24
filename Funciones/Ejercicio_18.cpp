#include <iostream>
#include <conio.h>

using namespace std;

struct fecha {
    int dia;
    int mes;
    int anio;
} f1, f2, f3;

void pedirDatos();
fecha masReciente(fecha, fecha);

int main (){
    pedirDatos();
    f3 = masReciente(f1, f2);
    cout<<"\n\nLa fecha mas reciente es: "<<f3.dia <<"/"<<f3.mes<<"/"<<f3.anio;
    cout<<"\n";


    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Primera fecha" <<endl;
    cout<<"Ingrese el anio: ";
    cin>> f1.anio;
    cout<<"Ingrese el mes: ";
    cin>> f1.mes;
    cout<<"Ingrese el dia: ";
    cin>> f1.dia;

    cout<<"\nSegunda fecha" <<endl;
    cout<<"Ingrese el anio: ";
    cin>> f2.anio;
    cout<<"Ingrese el mes: ";
    cin>> f2.mes;
    cout<<"Ingrese el dia: ";
    cin>> f2.dia;
}

fecha masReciente(fecha x, fecha y){
    if((x.anio >= y.anio) && (x.mes >= y.mes) && (x.dia >= y.dia))
        return x;
    else
        return y;
}