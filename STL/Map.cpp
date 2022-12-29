#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <iterator>
#include <map>



using namespace std;

int main(int argc, char* argv[]){
    map<int, string> valores;
    typedef pair<int, string> par;

    // Insertar elementos en el mapa

    valores.insert(par(5, "Armando"));
    valores.insert(par(2, "Juan"));
    valores.insert(par(1, "Marco"));
    valores.insert(par(3, "Cecilia"));

    // Mostrar el map en pantalla
    map<int, string>:: iterator itr;
    for(itr = valores.begin(); itr != valores.end(); itr++){
        cout<< "Clave: " << itr->first << " | " << "Valor: " << itr->second<<endl;
    }
    cout<< endl;

    // Insertar claves duplicadas

    valores.insert(par(1, "Luis"));
    for(itr = valores.begin(); itr != valores.end(); itr++){
        cout<< "Clave: " << itr->first << " | " << "Valor: " << itr->second<<endl;
    }
    cout<<endl;
    
    // Modificar un valor con una clave existente
    valores[1] = "Luis";

    // Agregar un valor
    valores[8] = "Maria";

    for(itr = valores.begin(); itr != valores.end(); itr++){
        cout<< "Clave: " << itr->first << " | " << "Valor: " << itr->second<<endl;
    }

    // Buscar elemento
    // Buscamos por clave

    itr = valores.find(2);

    if (itr != valores.end())
        cout<< "Valor encontrado " << itr->second << endl<<endl;
    else
        cout<< "Valor encontrado no encontrado"<< endl <<endl;


    // Eliminar
    valores.erase(1);

    for(itr = valores.begin(); itr != valores.end(); itr++){
        cout<< "Clave: " << itr->first << " | " << "Valor: " << itr->second<<endl;
    }

    cout<<endl;

    system("pause");
    return 0;
}