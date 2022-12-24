#include <iostream>
#include <stdlib.h>


using namespace std;

int main () {
    float examen1, examen2, examen3;
    int todos = 0, uno = 0, ultimo = 0;

    for (int i = 1; i<=5; i++){
        cout<< "Alumno "<< i<< ". Calificación del examen 1: ";
        cin>> examen1;
        cout<< "Alumno "<< i<< ". Calificación del examen 2: ";
        cin>> examen2;
        cout<< "Alumno "<< i<< ". Calificación del examen 3: ";
        cin>> examen3;
        cout<<"\n\n";

        if ((examen1 >= 7) && (examen2 >= 7) && (examen3 >= 7)){
            todos ++;
        }
        if ((examen1 >= 7) || (examen2 >= 7) || (examen3 >= 7)){
            uno ++;
        }
        if ((examen1 < 7) && (examen2 < 7) && (examen3 >= 7)){
            ultimo ++;
        }
    }

    cout<<"La cantidad de alumnos que aprobaron todos los examenes es de: "<<todos<<endl;
    cout<<"La cantidad de alumnos que aprobaron al menos un examen es de: "<<uno<<endl;
    cout<<"La cantidad de alumnos que aprobaron solo el último examen es de: "<<ultimo<<endl;

    system("pause");

    return 0;
   
}