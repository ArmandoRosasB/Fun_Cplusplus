#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Persona.h"
#include "Futbolista.h"
#include "Entrenador.h"
#include "Medico.h"

using namespace std;

Persona* equipo[4];


void viajarEquipo();
void entrenamiento();
void partidoFutbol();
void planificar();
void entrevista();
void curar();


int main (int argc, char* argv[]){
    equipo[0] = new Futbolista("Gonzalo", "Higuain", 30, 9, "Delantero");
    equipo[1] = new Futbolista("Paulo", "Dybala", 24, 10, "Delantero");
    equipo[2] = new Entrenador("Massimiliano", "Allegri", 50, "Defensiva");
    equipo[3] = new Medico("Alex", "Marroni", 59, "Fisioterapeuta", 20);

    int choice;
    
    do{
        cout<< "\tMenu\n";
        cout<< "1. Viaje en equipo" <<endl;
        cout<< "2. Entrenamiento" <<endl;
        cout<< "3. Partido futbol" <<endl;
        cout<< "4. Planificar entrenamiento" <<endl;
        cout<< "5. Entrevista" <<endl;
        cout<< "6. Curar lesion" <<endl;
        cout<< "7. Salir" <<endl;

        cout<<"\nIngresa la opcion: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            viajarEquipo();
            break;
        case 2:
            entrenamiento();
            break;
        case 3:
            partidoFutbol();
            break;
        case 4:
            planificar();
            break;
        case 5:
            entrevista();
            break;
        case 6:
            curar();
            break;
        case 7:
            break;
        default:
            cout<<"Opcion no valida"<<endl;
            break;
        }
        cout<<"\n";
        system("pause");
        system("cls");

    } while(choice != 7);

    cout<<"Fin del programa" << endl;

    system("pause");
}

void viajarEquipo(){
    for(int i = 0; i < 4; i++){
        cout<< equipo[i]->getNombre() << " " << equipo[i]->getApellido() <<" -> ";
        equipo[i]->viajar();
    }
}

void entrenamiento(){
    for(int i = 0; i < 4; i++){
        cout<< equipo[i]->getNombre() << " " << equipo[i]->getApellido() <<" -> ";
        equipo[i]->entrenamiento();
    }
}

void partidoFutbol(){
    for(int i = 0; i < 4; i++){
        cout<< equipo[i]->getNombre() << " " << equipo[i]->getApellido() <<" -> ";
        equipo[i]->partidoFutbol();
    }
}

void planificar(){
    cout<< equipo[2]->getNombre() << " " << equipo[2]->getApellido() <<" -> ";
    ((Entrenador*)equipo[2])->planificaEntrenamiento(); //DownCasting
    /*Arreglo de Personas, no podemos acceder a metodos de clases derivadas
    Por eso realizamos un downcasting
    */
}

void entrevista(){
    for(int i = 0; i < 2; i++){
    cout<< equipo[i]->getNombre() << " " << equipo[i]->getApellido() <<" -> ";
    ((Futbolista*)equipo[i])->entrevista();
    }
}
void curar(){
    cout<< equipo[3]->getNombre() << " " << equipo[3]->getApellido() <<" -> ";
    ((Medico*)equipo[3])->curarLesion();
}
