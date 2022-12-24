#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;


struct persona{
    char nombre[50];
    bool discapacidad;
} personas[100], discapacitados[100], no_discapacitados[100];

int main (){
    int i, n;
    cout<<"Introduce el numero de personas: ";
    cin>>n;
    cout<<endl;

    int respuesta;

    for(i = 0; i<n; i++){
        cout<<"Persona "<<i+1<<endl;
        fflush(stdin);
        cout<<"Ingrese el nombre de la persona: ";
        cin.getline(personas[i].nombre, 50, '\n');
        cout<<"Esta persona es discapacitada (1/0): ";
        cin>>respuesta;
        if(respuesta == 1){
            personas[i].discapacidad = true;
        }
        if(respuesta  == 0){
            personas[i].discapacidad = false;
        }
    }


    int j = 0, k = 0;;

    for(i = 0; i<n; i++){
        if(personas[i].discapacidad == true){
            strcpy(discapacitados[j].nombre, personas[i].nombre);
            j++;
        } else if(personas[i].discapacidad == false){
            strcpy(no_discapacitados[k].nombre, personas[i].nombre);
            k++;
        }
            
    }

    cout<<"\n\nPersonas con discapacidad: "<<endl;
    for(i = 0; i<j+1; i++){
        cout<<discapacitados[i].nombre<<endl;
    }

    cout<<"\nPersonas sin discapacidad: "<<endl;
    for(i = 0; i<j+1; i++){
        cout<<no_discapacitados[i].nombre<<endl;
    }

    system("pause");
    return 0;
}