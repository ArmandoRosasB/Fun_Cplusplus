#include <iostream>
#include <stdlib.h>
#include <iterator>
#include <algorithm>
#include <map>

using namespace std;

int main(int argc, char* argv[]){
    multimap<int, string> valores;
    typedef pair<int, string> par;

    // Insertar valores
    valores.insert(par(3, "Armando"));
    valores.insert(par(1, "Luis"));
    valores.insert(par(5, "Alejandro"));
    valores.insert(par(2, "Maria"));

    // Mostrar en pantalla

    multimap<int, string>:: iterator itr;


    // Insertamos pares con claves repetidas
    valores.insert(par(1, "Juan"));
    valores.insert(par(5, "Paola"));
    valores.insert(par(5, "Fernando"));

    for(itr = valores.begin(); itr != valores.end(); itr++){
        cout<<"Clave: " << itr->first << " | Valor: " << itr->second<<endl;
    }
    cout<<endl;

    // Conteo de las claves
    int clave = 1;

    cout<< "Conteo de la clave " << clave <<": " << valores.count(clave)<<endl;

    // lower_bound y upper_bound para recorrer elementos con la misma clave

    for(itr = valores.lower_bound(clave); itr != valores.upper_bound(clave); itr++){
        cout<<"Clave: " << itr->first << " | Valor: " << itr->second<<endl;
    }



    cout<<endl;
    system("pause");
    return 0;

}