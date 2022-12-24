#include <iostream>
#include <stdlib.h>

using namespace std;

struct Alumno{
    char nombre[40];
    int edad;
    float promedio;
}alumnos[3], *puntero_alumnos = alumnos;

void pedirDatos();
float mejorPromedio(Alumno *, int);
void mostrarAlumno(Alumno *, int, float);

int main (){
    float max;
    pedirDatos();
    max = mejorPromedio(puntero_alumnos, 3);
    mostrarAlumno(puntero_alumnos, 3, max);

    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Informacion de los alumnos"<<endl<<endl;
    for(int i = 0; i<3; i++){
        fflush(stdin);
        cout<<"Alumno "<<i<<endl;
        cout<<"Ingrese el nombre: ";
        cin.getline((puntero_alumnos+i)->nombre, 40, '\n');
        cout<<"Ingrese la edad: ";
        cin>> (puntero_alumnos + i)->edad;
        cout<<"Ingrese el promedio: ";
        cin>>(puntero_alumnos + i)->promedio;
    }
    cout<<endl<<endl;
}

float mejorPromedio(Alumno *puntero_alumnos, int numero_alumnos){
    float max = 0.0;
    for(int i = 0; i<numero_alumnos; i++){
        if((puntero_alumnos + i)->promedio > max){
            max = (puntero_alumnos + i)->promedio;
        }
    }

    return max;

}

void mostrarAlumno(Alumno *puntero_alumnos, int numero_alumnos, float max){
    cout<<"\nAlumno(s) con mejor promedio"<<endl;
    for(int i = 0; i<numero_alumnos; i++){
        if((puntero_alumnos + i)->promedio == max){
            cout<<"Alumno "<<i<<endl;
            cout<<"Nombre: "<<(puntero_alumnos + i)->nombre<<endl;
            cout<<"Edad: "<<(puntero_alumnos + i)->edad<<endl;
            cout<<"Promedio: "<<(puntero_alumnos + i)->promedio<<endl;
        }
        cout<<endl<<endl;
    }
}