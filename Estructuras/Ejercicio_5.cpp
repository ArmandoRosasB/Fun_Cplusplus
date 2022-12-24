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
} alumno1;



int main (){
    int i;
    float promedio;

    cout<<"Ingrese el nombre del alumno: ";
    cin.getline(alumno1.nombre, 40, '\n');
    cout<<"Ingrese el sexo del alumno: ";
    cin.getline(alumno1.sexo, 10, '\n');
    cout<<"Ingrese la edad del alumno: ";
    cin>>alumno1.edad;

    cout<<"\nIngrese las notas del alumno: "<<endl;
    cout<<"Nota 1: "; cin>> alumno1.promedios.nota1;
    cout<<"Nota 2: "; cin>> alumno1.promedios.nota2;
    cout<<"Nota 3: "; cin>> alumno1.promedios.nota3;
    
    promedio = alumno1.promedios.nota1 + alumno1.promedios.nota2 +alumno1.promedios.nota3;
    promedio /= 3;

    cout<<"\n\nEl promedio del alumno es de: "<<promedio<<endl;
    system("pause");
    return 0;
}