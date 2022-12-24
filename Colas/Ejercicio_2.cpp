#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Cliente{
    char nombre[40];
    char clave[10];
    int edad;
}clientes;

struct Nodo{
    Cliente cliente;
    Nodo* siguiente;
};

void agregarCliente();
bool colaVacia(Nodo*);
void agregarClienteCola(Nodo*&, Nodo*&, Cliente);
void quitarCliente(Nodo*&, Nodo*&, Cliente&);


int main (int argc, char* argv[]){
    Nodo* frente = NULL;
    Nodo* fin = NULL;
    char respuesta[3];

    cout<<"\n\t.:Bienvendio a la fila del banco:."<<endl;
    do{
        agregarCliente();
        agregarClienteCola(frente, fin, clientes);

        cout<<"Desea agregar otro cliente (Si/No): ";
        fflush(stdin);
        cin.getline(respuesta, 3, '\n');
        strlwr(respuesta);

        system("cls");

    } while(strcmp(respuesta, "si") ==0);

    cout<<"\n\nCarga de clientes exitosa"<<endl;

    cout<<"\n\tFila de clientes por orden de llegada"<<endl;
    int i = 0;
    while(frente != NULL){
        quitarCliente(frente, fin, clientes);
        cout<<"Cliente "<<i+1<<endl;
        cout<<"Nombre: "<<clientes.nombre<<endl;
        cout<<"Clave: "<<clientes.clave<<endl;
        cout<<"Edad: "<<clientes.edad<<endl<<endl;
        i++;
    }


    system("pause");
    return 0;
}


void agregarCliente(){
    cout<<"Ingrese el nombre del cliente: ";
    cin.getline(clientes.nombre, 40, '\n');
    cout<<"Ingresa la clave: ";
    cin.getline(clientes.clave, 10, '\n');
    cout<<"Ingresa la edad: ";
    cin>>clientes.edad;
}


bool colaVacia(Nodo* frente){
    return (frente == NULL)? true : false;
}
void agregarClienteCola(Nodo*& frente, Nodo*& fin, Cliente cliente){
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->cliente = cliente;
    nuevo_nodo->siguiente = NULL;

    if(colaVacia(frente)){
        frente = nuevo_nodo;
    } else{
        fin->siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;

}

void quitarCliente(Nodo*& frente, Nodo*& fin, Cliente& cliente){
    cliente = frente->cliente;
    Nodo *aux = frente;

    if (frente == fin){
        frente = NULL;
        fin = NULL;
    } else{
        frente = frente->siguiente;
    }

    delete aux;
}