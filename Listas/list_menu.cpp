#include <iostream>
#include <stdlib.h>
#include "Ordered_list.h"


using namespace std;


int main(int argc, char* argv[]){
    ordered_list<int> nuevaLista;
    int opcion, dato;

    do{
    cout<<"\tMenu\n";
    cout<<"1. Insertar elemento\n";
    cout<<"2. Mostrar lista ordenada\n";
    cout<<"3. Buscar elemento\n";
    cout<<"4. Eliminar elemento\n";
    cout<<"5. Vaciar lista\n";
    cout<<"6. Salir\n";
    cout<<"\nIngresa la opcion deseada: ";
    cin>> opcion;

    switch (opcion)
    {
    case 1:
        cout<<"Digita el elemento a insertar: "; cin>>dato;
        nuevaLista.insert(dato);
        break;
    case 2:
        cout<< "Lista ordenada actual: "<< nuevaLista.toString();
        break;
    case 3:
        cout<<"Digita el valor a buscar: "; cin>> dato;
        if(nuevaLista.search(dato))
            cout<<"\nEl elemento se encuentra en la lista"<<endl;
        else
            cout<<"\nEl elemento no se encuentra en la lista"<<endl;
        break;
    case 4:
        cout<<"Digita el elemento a eliminar de la lista: "; cin>> dato;
        nuevaLista.removeElement(dato);
        cout<<"Elemento eliminado"<<endl;
        break;
    case 5:
        nuevaLista.clear();
        cout<<"Lista vaciada"<<endl;
        break;
    case 6:
        break;
    default:
        cout<<"Opcion no valida"<<endl;
        break;
    }
    cout<<"\n\n";
    system("pause");
    system("cls");
    } while(opcion != 6);

    cout<<"Fin del programa"<<endl;

    system("pause");
    return 0;
}