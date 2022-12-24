#include <iostream>
#include <stdlib.h>
#include "BST.h"

using namespace std;


int main(int argc, char* argv[]){
    int dato, opcion;
    BST<int> arbolito;  

    do{
        cout<<"\tMenu BST\n";
        cout<<"1. Insertar un nuevo nodo\n";
        cout<<"2. Mostrar el arbol\n";
        cout<<"3. Encontrar un valor\n";
        cout<<"4. Recorrido PreOrder\n";
        cout<<"5. Recorrido Inorder\n";
        cout<<"6. Recorrido PostOrder\n";
        cout<<"7. Eliminar un nodo\n";
        cout<<"8. Vaciar arbol\n";
        cout<<"9. Salir\n";

        cout<<"\nIngrese la opcion deseada: "; cin>> opcion;

        switch (opcion)
        {
        case 1:
            cout<<"Digite un numero: "; cin>> dato;
            arbolito.add(dato);
            break;
        case 2:
            cout<<"\n"<<arbolito.toString()<<endl;
            break;
        case 3:
            cout<<"Digita el valor a encontrar: "; cin>> dato;
            if(arbolito.find(dato))
                cout<<"El valor si se encuentra en el arbol"<<endl;
            else
                cout<<"El valor no se encuentra en el arbol"<<endl;
            break;
        case 4:
            cout<<"Recorrido Pre Order: "<< arbolito.preOrder()<<endl;
            break;
        case 5:
            cout<<"Recorrido In Order: "<< arbolito.inOrder()<<endl;
            break;
        case 6:
            cout<<"Recorrido Post Order: "<< arbolito.postOrder()<<endl;
            break;
        case 7:
            cout<<"Digita el dato del nodo a eliminar: "; cin>>dato;
            arbolito.remove(dato);
            break;
        case 8:
            arbolito.removeAll();
            cout<<"Arbol vaciado"<<endl;
            break;
        case 9:
            break;
        default:
            cout<<"Opcion no valida"<<endl;
            break;
        }

        system("pause");
        system("cls");
    } while(opcion != 9);

    cout<<"Fin del programa"<<endl;

    system("pause");
    return 0;
}
