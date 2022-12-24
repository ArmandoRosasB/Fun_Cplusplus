#include <iostream>
#include <stdlib.h>

using namespace std;


struct Nodo{
    int dato;
    Nodo* siguiente;

};

//Prototipos
void insertarCola(Nodo*&, Nodo*&, int);
bool cola_vacia(Nodo *);

void suprimirCola(Nodo*&, Nodo*&, int&);


int main (int argc, char* argv[]){
    Nodo* frente = NULL;
    Nodo* fin = NULL;


    int dato;

    cout<<"Ingrese un numero: ";
    cin>>dato;

    insertarCola(frente, fin, dato);

    cout<<"Ingrese un numero: ";
    cin>>dato;

    insertarCola(frente, fin, dato);

    cout<<"Ingrese un numero: ";
    cin>>dato;

    insertarCola(frente, fin, dato);

    //Eliminando elementos de la cola
    cout<<"\nEliminando los nodos de la cola: ";
    while(frente != NULL){
        suprimirCola(frente, fin, dato);

        if(frente != NULL){
            cout<<dato<<" , ";
        } else{
            cout<<dato<<"."<<endl;
        }
    }

    system("pause");
    return 0;
}

void insertarCola(Nodo*& frente, Nodo*& fin, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if(cola_vacia(frente)){
        frente = nuevo_nodo;
    } else{
        fin->siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;

    cout<<"Elemento "<<n<<" insertado correctamente"<<endl;

}

bool cola_vacia(Nodo *frente){
    return (frente == NULL)? true: false;
}


void suprimirCola(Nodo*& frente, Nodo*& fin, int& n){
    n = frente->dato;
    Nodo* aux = frente;

    if(frente == fin){
        frente = NULL;
        fin = NULL;
    } else{
        frente = frente->siguiente;
    }
    delete aux;
}