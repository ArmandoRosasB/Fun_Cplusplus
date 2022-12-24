#include <iostream>
#include <stdlib.h>

using namespace std;

struct empleado {
    char nombre[50];
    float salario;
} empleados[1000];


int main (){
    int n, i;
    cout<< "Ingrese el numero de empleados: ";
    cin>> n;
    cout<<endl;
    for(i = 0; i<n; i++){
        fflush(stdin);
        cout<<"Empleado "<<i+1<<endl;
        cout<<"Ingresa su nombre: ";
        cin.getline(empleados[i].nombre, 50, '\n');
        cout<<"Ingrese el salario: ";
        cin>> empleados[i].salario;
        cout<<endl;
    }

    float max = 0;
    float min;
    min = empleados[0].salario;

    for(i=0; i<n; i++){
        if(empleados[i].salario >max){
            max = empleados[i].salario;
        }
        if(empleados[i].salario < min){
            min = empleados[i].salario;
        }
    }

    cout<<"\n\nEmpleado(s) con mayor salario: "<<endl;
    for(i=0; i<n; i++){
        if(empleados[i].salario == max){
            cout<<"Empleado "<<i+1<< ". "<<endl;
            cout<<"Nombre: "<<empleados[i].nombre<<endl;
            cout<<"Salario: "<<empleados[i].salario<<endl;
        }
    }
    cout<<"\n\nEmpleado(s) con menor salario: ";
    for(i=0; i<n; i++){
        if(empleados[i].salario == min){
            cout<<"Empleado "<<i+1<< ". "<<endl;
            cout<<empleados[i].nombre<<endl;
            cout<<empleados[i].salario<<endl;
        }
    }
    cout<<endl;
    system("pause");
    return 0;
}