#include <iostream>
#include <stdlib.h>
#include <iterator> // ostream_iterator
#include <algorithm>
#include <list>

using namespace std;

int numerosAleatorios();

int main(int argc, char* argv[]){
    list<int> valores(10);

    // generate: Genera numeros aleatorios en un rango de la lista
    generate(valores.begin(), valores.end(), numerosAleatorios);

    // ostream_iterator: iterador de salida de datos

    // Mostrando los elementos de la listas
    ostream_iterator<int> salida(cout, "|");
    copy(valores.begin(), valores.end(), salida);

    // Buscamos la primera aparicion del numero 8 de la lista

    list<int>:: iterator itr;

    // find: Encuentra un elemento determinado en un rango de iteradores
    itr = find(valores.begin(), valores.end(), 8);

    // Analizamos si en iterador no sobrepasa los rangos de la lista

    if (itr != valores.end())
        cout<< "\nElemento " << *itr <<" encontrado";
    else
        cout<< "\nElemento " << *itr <<" no encontrado";


    cout<<endl;
    system("pause");
    return 0;
}

int numerosAleatorios(){
    return rand() % 10;
}