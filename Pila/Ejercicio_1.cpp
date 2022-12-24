#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);

int main(){
    Nodo *pila = NULL;
    char respuesta[3];
    char afirmacion[] = "si";
    bool bandera = true;
    int n;

    cout<<"\n\tPrograma para rellenar una pila"<<endl;
    

    do{
        cout<<"\nIngrese un numero: ";
        cin>>n;
        agregarPila(pila, n);
        cout<<"Desea agregar otro numero (Si/No): ";
        fflush(stdin);
        cin.getline(respuesta, 5, '\n');
        strlwr(respuesta);
        if(strcmp(respuesta, afirmacion) == 0){
            bandera = true;
        } else{
            bandera = false;
        }

    } while(bandera);

    cout<<"\n\nSacando todos los elementos de la Pila: ";
    while(pila != NULL){
        sacarPila(pila, n);
        if(pila != NULL){
            cout<<n<<" , ";
        } else{
            cout<<n<<"."<<endl;
        }
    }

    cout<<endl;
    system("pause");
    return 0;
}

void agregarPila(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
}

void sacarPila(Nodo *&pila, int &n){
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}