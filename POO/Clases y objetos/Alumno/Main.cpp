#include <iostream>
#include <stdlib.h>
#include <vector>

#include <iomanip>

#include "Alumno.h"

using namespace std;

int main (int argc, char** argv){
    int n;
    Alumno alumnos[4]; //Creacion de un arreglo de objetos estaticos
    Alumno* alumnos_dinamicos = new Alumno[3]; //Creacion de un arreglo dinamico
    vector <Alumno*> alumnos_vector;

    cout<<"Ingrese el numero de alumnos: ";
    cin>>n;

    alumnos_vector.resize(n);

    for(int i = 0; i<n; i++){
        cout<<"Alumno "<<i;
        alumnos_vector[i] = new Alumno(10,9); 
        cout<<endl;
    }

    cout<<"Mostrando las notas"<<endl;

    for(int i = 0; i<n; i++){
        alumnos_vector[i]->mostrarNotas();
    }

    for(int i = 0; i<n; i++){
         delete alumnos_vector[i];
    }

    system("pause");
    return 0;
}