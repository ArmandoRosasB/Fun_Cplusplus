#include <iostream>
#include <stdlib.h>
#include "Alumno.h"
#include "Deportista.h"
#include "BecadoDeporte.h"

using namespace std;

int main (int argc, char* argv[]){

    Alumno* alumnoJuan = new Alumno("Informatica");
    Alumno* alumnoPedro = new Alumno("Sistemas");
    Deportista* deporLuis = new Deportista("Popeye");
    BecadoDeporte* bdAna = new BecadoDeporte("Administracion", "Luis", 1200);
    BecadoDeporte* bdCarmen = new BecadoDeporte("Contabilidad", "La roca", 1350);

    cout<<"Mostrando datos"<<endl;
    cout<<"Mostrando datos de alumnoJuan: "<<endl;
    alumnoJuan->mostrarDatos();
    cout<<"\nMostrando datos de alumnoPedro: "<<endl;
    alumnoPedro->mostrarDatos();
    cout<<"\nMostrando datos de deporLuis: "<<endl;
    deporLuis->mostrarDatos();
    cout<<"\nMostrando datos de bdAna: "<<endl;
    bdAna->mostrarDatos();
    cout<<"\nMostrando datos de bdCarmen: "<<endl;
    bdCarmen->mostrarDatos();

    string nueva_carrera;

    cout<<"\nDigite la nueva carrera de alumnoJuan: ";
    getline(cin, nueva_carrera);
    alumnoJuan->setNombreCarrera(nueva_carrera);

    cout<<"Digite la nueva carrera de bdAna: ";
    getline(cin, nueva_carrera);
    bdAna->setNombreCarrera(nueva_carrera);

    cout<<"\n\nLa nueva carrera de alumnoJuan es: "<< alumnoJuan->getNombreCarrera()<<endl;
    cout<<"La nueva carrera de bdAna es: "<< bdAna->getNombreCarrera()<<endl;

    string nuevo_entrenador;

    cout<<"\nDigite el nuevo entrenador de deporLuis: ";
    getline(cin, nuevo_entrenador);
    deporLuis->setNombreEntrenador(nuevo_entrenador);

    cout<<"\nDigite el nuevo entrenador de bdCarmen: ";
    getline(cin, nuevo_entrenador);
    bdCarmen->setNombreEntrenador(nuevo_entrenador);

    cout<<"\n\nEl nuevo entrenador de deporLuis es: "<< deporLuis->getNombreEntrenador()<<endl;
    cout<<"El nuevo entrenador de bdCarmen es: "<< bdCarmen->getNombreEntrenador()<<endl;


    float incremento;

    cout<<"\n\nDigite el incremento de bdAna: ";
    cin>>incremento;
    bdAna->setMontoBeca(incremento);
    
    cout<<"Digite el incremento de bdCarmen: ";
    cin>>incremento;
    bdCarmen->setMontoBeca(incremento);

    cout<<"\n\nEl nuevo monto Beca de bdAna es: "<< bdAna->getMontoBeca()<<endl;
    cout<<"El nuevo monto Beca de bdCarmen es: "<< bdCarmen->getMontoBeca()<<endl;


    delete alumnoJuan;
    delete alumnoPedro;
    delete deporLuis;
    delete bdAna;
    delete bdCarmen;

    system("pause");
    return 0;
}