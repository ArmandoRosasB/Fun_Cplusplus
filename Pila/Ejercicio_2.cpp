#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    char dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, char);
void sacarPila(Nodo *&, char&);

int main(){
    Nodo *Pila = NULL;
    char letra;
    int opcion;

    cout<<"\n\t\tBienvenido a este Menu interactivo"<<endl;
    cout<<"1. Insertar un caracter a la pila"<<endl;
    cout<<"2. Mostrar todos los elementos"<<endl;
    cout<<"3. Salir"<<endl;


    do{
        cout<<"Ingrese la opcion: ";
        cin>>opcion;

        switch (opcion){
        case 1:
        cout<<"Ingrese una letra: ";
        cin>>letra;
            agregarPila(Pila, letra);
            cout<<"\n"<<letra<<" agregado con exito"<<endl;
            break;
        case 2:
            while (Pila != NULL)
            {
            sacarPila(Pila, letra);
            if(Pila != NULL){
                cout<<letra<<" , ";
            } else{
                cout<<letra<<"."<<endl;
            }
            }
            
            
        case 3:
            break;
        
        default:
            cout<<"Opción no valida"<<endl;
            break;
        }
    } while(opcion != 3);


    system("pause");
    return 0;
}

void agregarPila(Nodo *&pila, char n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo ->dato = n;
    nuevo_nodo ->siguiente = pila;
    pila = nuevo_nodo;
}

void sacarPila(Nodo *& pila, char& n){
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}
