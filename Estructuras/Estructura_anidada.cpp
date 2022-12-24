#include <iostream>
#include <stdlib.h>


using namespace std;

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];

};


struct empleado{
    char nombre[40];
    struct info_direccion dir_empleado; // Esrtuctura dentro de otra
    double salario;
};

int main (){
   struct empleado empleados[2];
   for(int i = 0; i<2; i++){
        fflush(stdin); //Vaciar el buffer y permitir digitar valores
        cout<< "Digite su nombre: ";
        cin.getline(empleados[i].nombre, 40, '\n');
        cout<<"Digite su direccion: ";
        cin.getline(empleados[i].dir_empleado.direccion, 30, '\n');
        cout<<"Ciudad: ";
        cin.getline(empleados[i].dir_empleado.ciudad, 20, '\n');
        cout<<"Provincia: ";
        cin.getline(empleados[i].dir_empleado.provincia, 20, '\n');
        cout<<"Salario: ";
        cin>>empleados[i].salario;
        cout<<"\n";
   }

    //Imprimiendo los datos
    for(int i =0; i<2; i++){
        cout<<"Nombre: " <<empleados[i].nombre<<endl;
        cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
        cout<<"Salario: "<< empleados[i].salario<<endl;
        cout<<"\n";
    }


    system("pause");
    return 0;
}