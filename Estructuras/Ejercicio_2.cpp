#include <iostream>
#include <stdlib.h>

using namespace std;


struct Alumno{
    char nombre[40];
    int edad;
    float promedio;
} alumnos[3];


int main (){
    int i;
    for(i = 0; i<3; i++){
        fflush(stdin);
        cout<< "Alumno "<< i<<endl;
        cout<<"Ingresa el nombre: ";
        cin.getline(alumnos[i].nombre, 40, '\n');
        cout<< "Ingresa la edad: ";
        cin>> alumnos[i].edad;
        cout<< "Ingresa el promedio: ";
        cin>> alumnos[i].promedio;
        cout<<"\n\n";
    }

    float mayor = 0;

    for(i = 0; i<3; i++){
        if(alumnos[i].promedio > mayor){
            mayor = alumnos[i].promedio;
        }    
    }

    cout<<"ALumno(s) con mejor promedio: "<<endl;

    for(i = 0; i<3; i++){
        if(alumnos[i].promedio == mayor){
            cout<< alumnos[i].nombre<<endl;
        }
    }

    cout<< "\n\nDatos de todos los alumnos: "<<endl;
    for(i = 0; i<3; i++){
        cout<< "Alumno "<< i<<endl;
        cout<<"Nombre: "<<alumnos[i].nombre<<endl;
        cout<<"Edad: "<<alumnos[i].edad<<endl;
        cout<<"Promedio: "<<alumnos[i].promedio<<endl<<endl;
    
    }



    system("pause");
    return 0;
}