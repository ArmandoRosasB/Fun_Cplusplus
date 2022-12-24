#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

struct  Registro
{
    int hora;
    int minutos;
    int pulsaciones;
};

void crearRegistro(string);
void agregarRegistro(string);
void leerRegistros(string);

int main (int argc, char* argv[]){
    cout<<"Bienvenidoa  tus registros de pulsaciones"<<endl;
    cout<<"Desplegando el menu"<<endl;

    int opcion;
    string _registro;

    do{
        cout<<"\tMenu\n";
        cout<<"1. Crear nuevo registro\n";
        cout<<"2. Agregar pulsaciones a un registro ya existente\n";
        cout<<"3. Mostrar pulsaciones registradas\n";
        cout<<"4. Salir\n";
        cout<<"Digite la opcion deseada: "; cin>>opcion;

        switch (opcion)
        {
        case 1:
            cout<<"Ingrese el nombre del nuevo registro que desea crear: "; cin>>_registro;
            _registro += ".dat";
            crearRegistro(_registro);
            break;
        case 2:
            cout<<"Ingrese el nombre del registro: "; cin>>_registro;
            _registro += ".dat";
            agregarRegistro(_registro);
            break;
        case 3:
            cout<<"Ingrese el nombre del registro: "; cin>>_registro;
            _registro += ".dat";
            leerRegistros(_registro);   
            break;
        case 4:  
            break;
        
        default:
            cout<< "Opcion no valida"<<endl;
            break;
        }

        system("pause");
        system("cls");

    } while(opcion != 4);




    system("pause");
    return 0;
}


void crearRegistro(string archivoRegistro){
    ofstream output;
    char respuesta;

    output.open(archivoRegistro.c_str(), ios:: binary | ios:: out);

    if (output.fail()){
        cout<<"\nError al crear el archivo"<<endl;
        return;
    }

    Registro pulsaciones;

    do{
        cout<<"\nDigite la hora: "; cin>> pulsaciones.hora;
        cout<<"Digite el minuto: "; cin>> pulsaciones.minutos;
        cout<<"Digite sus pulsaciones: "; cin>>pulsaciones.pulsaciones;

        output.write((char *)&pulsaciones, sizeof(Registro));

        cout<<"Desea agregar otro registro(S/N):"; cin>>respuesta;

    } while(respuesta == 'S' || respuesta == 's');

    output.close();

}


void agregarRegistro(string archivoRegistro){
    ofstream output;
    char respuesta;

    output.open(archivoRegistro.c_str(), ios:: binary | ios:: app);

    if (output.fail()){
        cout<<"\nError al abrir el archivo"<<endl;
        return;
    }

    Registro pulsaciones;

    do{
        cout<<"\nDigite la hora: "; cin>> pulsaciones.hora;
        cout<<"Digite el minuto: "; cin>> pulsaciones.minutos;
        cout<<"Digite sus pulsaciones: "; cin>>pulsaciones.pulsaciones;

        output.write((char *)&pulsaciones, sizeof(Registro));

        cout<<"Desea agregar otro registro(S/N):"; cin>>respuesta;

    } while(respuesta == 'S' || respuesta == 's');

    output.close();
}

void leerRegistros(string archivoRegistro){
    ifstream input;
    char respuesta;

    input.open(archivoRegistro.c_str(), ios:: binary | ios:: in);

    if (input.fail()){
        cout<<"\nError al abrir el archivo"<<endl;
        return;
    }

    Registro pulsaciones;

    cout<<"\nMostrando datos\n\n";
    
    while(!input.eof()){
        input.read((char*)&pulsaciones, sizeof(Registro));
        if(!input.eof()){
            cout<<"Hora: "<< pulsaciones.hora<< ":" <<pulsaciones.minutos <<endl;
            cout<<"Pulsaciones: "<<pulsaciones.pulsaciones<<endl<<endl;
        }
    }
    
    

    input.close();
}