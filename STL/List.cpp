#include <iostream>
#include <stdlib.h>
#include <list>

using namespace std;

/*
Lista doblemente enlazada
Contenedores adecuados cuando queremos insertar
o eliminar elementos
Desventaja: No se pueden usar indices
*/
int main(int argc, char* argv[]){
    list<int> datos;

    // push front y push back para agregar elementos

    datos.push_back(5);
    datos.push_back(1);
    datos.push_back(6);

    datos.push_front(2);
    datos.push_front(7);

    // Lista: 7 2 5 1 6

    //Ordenar elementos de menor a mayor
    datos.sort();

    // Lista: 1 2 5 6 7

    list<int> :: iterator i; //Creacion de un iterador de lista de enteros

    for(i = datos.begin(); i != datos.end(); i++){
        cout<< *i << "|";
    }
    cout<<endl;


    datos.pop_back(); //Eliminar el elemento al final de la lista
    datos.pop_front(); //Eliminar el elemento al inicio de la lista

    for(i = datos.begin(); i != datos.end(); i++){
        cout<< *i << "|";
    }
    cout<<endl;

    system("pause");
    return 0;
}