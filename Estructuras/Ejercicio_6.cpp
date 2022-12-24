#include <iostream>
#include <stdlib.h>

using namespace std;

struct promedio {
    float nota1;
    float nota2;
    float nota3;
};

struct alumno{
    char nombre[40];
    char sexo [10];
    int edad;
    struct promedio promedios;
} alumnos[100];



int main (){
    int n,i;
    float promedios[100];

    cout<<"Ingresa el numero de alumnos: ";
    cin>>n;
    cout<<"\n";

    for(i = 0; i<n; i++){
        cout<<"Alumno "<<i+1<<endl;
        fflush(stdin);

        cout<<"Ingrese el nombre del alumno: ";
        cin.getline(alumnos[i].nombre, 40, '\n');

        cout<<"Ingrese el sexo del alumno: ";
        cin.getline(alumnos[i].sexo, 10, '\n');

        cout<<"Ingrese la edad del alumno: ";
        cin>>alumnos[i].edad;

        cout<<"Ingrese la calificacion de la nota 1: ";
        cin>>alumnos[i].promedios.nota1;

        cout<<"Ingrese la calificacion de la nota 2: ";
        cin>>alumnos[i].promedios.nota2;

        cout<<"Ingrese la calificacion de la nota 3: ";
        cin>>alumnos[i].promedios.nota3;
        cout<<endl;
    }

    float promedio;
    for(i = 0; i<n; i++){
        promedio = alumnos[i].promedios.nota1 
        + alumnos[i].promedios.nota2 + alumnos[i].promedios.nota3;
        promedio /= 3;
        promedios[i] = promedio;

    }

    float max = 0;
    for(i = 0; i<n; i++){
        if(promedios[i] > max){
            max = promedios[i];
        }
    }

    cout<<"Alumno(s) con mejor promedio: "<<endl;
    for(i = 0; i<n; i++){
        if(promedios[i] == max){
            cout<<"Alumno "<<i+1<<endl;
            cout<<"Nombre: "<<alumnos[i].nombre<<endl;
            cout<<"Sexo: "<<alumnos[i].sexo<<endl;
            cout<<"Edad: "<<alumnos[i].edad<<endl;
            cout<<"Calificacion de la nota 1: "<<alumnos[i].promedios.nota1<<endl;
            cout<<"Calificacion de la nota 2: "<<alumnos[i].promedios.nota2<<endl;
            cout<<"Calificacion de la nota 3: "<<alumnos[i].promedios.nota3<<endl;
            cout<<"Promedio: "<<promedios[i]<<endl;
        }
    }
    

 
    system("pause");
    return 0;
}