#include <iostream>
#include <stdlib.h>
#include <vector> //Libreria vector

/*
Vector 
Arreglo dinamico
Se almacena contiguamente en la memoria

*/

using namespace std;

int main(int argc, char* argv[]){
    vector<int> numeros;
    // Vector con size determinado
    vector<int> numeros_2(5); // Las 5 primeras posiciones han sido inicializadas


    numeros.push_back(5); //Agrega elementos al final del arreglo
    numeros.push_back(10);
    numeros.push_back(1);
    numeros.push_back(15);
    numeros.push_back(20);

    cout<<"Vector usando push_back" <<endl;

    for(int i = 0; i < numeros.size(); i++){
        cout<< numeros[i] << "|";
    }

    // Para agregar elementos a un vector con size determinado en
    // la instanciacion del objeto, se agregar elementos de manera
    // iterativa
    cout<< endl << endl;
    cout<<"Vector llenado iterativamente" <<endl;
    for(int i = 0; i < numeros_2.size(); i++){
        numeros_2[i] = i;
    }
      
    for(int i = 0; i < numeros_2.size(); i++){
        cout<< numeros_2[i]<< "|";
    }

    cout<< endl << endl;

    // Metodo pop_back: Elimina el ultimo elemento del vector
    numeros.pop_back();
    cout<< "Primer vector despues del pop_back"<<endl;

    for(int i = 0; i < numeros.size(); i++){
        cout<< numeros[i] << "|";
    }

    cout<<endl << endl;
    // Metodo erase(n, z): Elimina elementos del vector en posiciones determinadas desde n hasta z - 1
    numeros.push_back(20);
    numeros.erase(numeros.begin() + 1, numeros.begin() + 3);

    cout<<"Primer vector borrando desde la segunda posicion hasta la tercera posicion usando erase"<<endl;

    for(int i = 0; i < numeros.size(); i++){
        cout<< numeros[i] << "|";
    }

    cout<<endl;
    system("pause");
    return 0;
}