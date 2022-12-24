#include <iostream>
#include <stdlib.h>


using namespace std;

struct Nodo{
    char dato;
    Nodo* siguiente;
};

bool colavacia(Nodo*);
void insertarCola(Nodo *&, Nodo*&, char);
void quitarCola(Nodo *&, Nodo*&, char&);

int main (){
    Nodo *frente = NULL;
    Nodo *fin = NULL;

    int opcion;
    char dato;

    do{
        cout<<"\n\t--Bienvenido a este menu interactivo--"<<endl;
        cout<<"1. Inesertar un caracter en la cola"<<endl;
        cout<<"2. Mostrar todos los elementos en la cola"<<endl;
        cout<<"3. Salir"<<endl;

        cout<<"\nIngrese la opcion: ";
        cin>>opcion;

        switch(opcion){
            case 1:
                cout<<"Ingresa el caracter a insertar en la cola: ";
                cin>>dato;
                insertarCola(frente, fin, dato);
                break;
            
            case 2:
                while(frente != NULL){
                    quitarCola(frente, fin, dato);
                    
                    if(frente != NULL){
                        cout<<dato<<" , ";
                    } else{
                        cout<<dato<< "."<<endl;
                    }
                }
                system("pause");
                break;
            case 3:
                break;

            default:
                cout<<"Opcion no valida"<<endl;

        }

        system("cls");

    } while(opcion != 3);


    system("pause");
    return 0;
}

bool colavacia(Nodo* frente){
    return (frente == NULL)? true: false;
}


void insertarCola(Nodo*& frente, Nodo *& fin, char n){
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if(colavacia(frente)){
        frente = nuevo_nodo;
    } else{
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
    cout<<"Elemento "<< n<< " insertado correctamente";

}

void quitarCola(Nodo *& frente, Nodo*& fin, char& n){
    n = frente->dato;
    Nodo* aux = frente;

    if (frente == fin){ //Solo existe un nodo en la cola
        frente = NULL;
        fin = NULL;
    } else{
        frente = frente->siguiente;
    }

    delete aux;
}