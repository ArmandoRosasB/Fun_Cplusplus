#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "Datos.h"

using namespace std;


void crearAgenda(string, Datos*);
void agregarContacto(string, Datos*);
void visualizarAgenda(string);

int main(int argc, char* argv[]){
    int opcion;
    string agenda;
    Datos* datos;

    cout<<"Bienvendio a tu creador de agendas telefonicas, a continuacion se desplegara el menu"<<endl;

    do{
    cout<< "\tMenu\n";
    cout<<"1. Crear una agenda nueva\n";
    cout<<"2. Agregar datos a una agenda existente\n";
    cout<<"3. Visualizar los contactos existentes en alguna agenda\n";
    cout<<"4. Salir\n";

    cout<<"\nIngresa la opcion deseada: "; cin>> opcion;

    switch (opcion)
    {
    case 1:
        cout<<"Ingresa el nombre de la nueva agenda: ";
        cin>> agenda;
        agenda += ".txt";

        crearAgenda(agenda, datos);
        break;

    case 2:
        cout<<"Ingresa el nombre de la agenda deseada: ";
        cin>> agenda;
        agenda += ".txt";

        agregarContacto(agenda, datos);
        break;

    case 3:
        cout<<"Ingresa el nombre de la agenda deseada: ";
        cin>> agenda;
        agenda += ".txt";

        visualizarAgenda(agenda);
        break;

    case 4:
        break;
    
    default:
        cout<<"Opcion no valida"<<endl;
        break;
    }

    system("pause");
    system("cls");

    } while (opcion != 4);

    cout<<"Fin del programa"<<endl;
    system("pause");
    return 0;
}

void crearAgenda(string nombreArchivo, Datos* datos){
    ofstream output;
    char respuesta;
    string nombre, apellido, telefono;

    output.open(nombreArchivo.c_str(), ios::out);

    if(output.fail()){
        cout<<"Error al abrir el archivo";
        return;
    }

    output<< "\tAgenda Telefonica "<< nombreArchivo<<"\n";
    do{
        fflush(stdin);
        cout<<"Ingresa el nombre del nuevo contacto: ";
        getline(cin, nombre);
        cout<< "Ingresa los apellidos del nuevo contacto: ";
        getline(cin, apellido);
        cout<<"Ingresa el numero de telefono del nuevo contacto: ";
        getline(cin, telefono);

        datos = new Datos(nombre, apellido, telefono);

        output<< datos-> getNombre() <<" " << datos->getApellido() <<endl;
        output << "Numero de telefono: " << datos-> getTelefono() <<endl << endl;

        delete datos;

        cout<<"Desea agregar mas contactos a esta agenda(S/N): "; cin>> respuesta;

    } while (respuesta == 'S' || respuesta == 's');
    output.close();

}
void agregarContacto(string nombreArchivo, Datos* datos){
    ofstream output;
    char respuesta;
    string nombre, apellido, telefono;

    output.open(nombreArchivo.c_str(), ios::app);

    if(output.fail()){
        cout<<"El archivo no existe"<<endl;
        return;
    }

    do{
        
        fflush(stdin);
        cout<<"Ingresa el nombre del nuevo contacto: ";
        getline(cin, nombre);
        cout<< "Ingresa los apellidos del nuevo contacto: ";
        getline(cin, apellido);
        cout<<"Ingresa el numero de telefono del nuevo contacto: ";
        getline(cin, telefono);

        datos = new Datos(nombre, apellido, telefono);

        output<< datos-> getNombre() <<" " << datos->getApellido() <<endl;
        output << "Numero de telefono: " << datos-> getTelefono() <<endl << endl;

        delete datos;

        cout<<"Desea agregar mas contactos a esta agenda(S/N): "; cin>> respuesta;

    } while (respuesta == 'S' || respuesta == 's');
    output.close();


}

void visualizarAgenda(string nombreArchivo){
    ifstream input;
    string linea;

    input.open(nombreArchivo.c_str(), ios::in);

    if (!input.is_open()){
        cout<<"Error al abrir el archivo" <<endl;
        return;
    }

    cout<<"\nMostrando los contactos del archivo "<<endl<<endl;

    while(!input.eof()){
        getline(input, linea);
        cout<<linea<<endl;
    }

    input.close();

}