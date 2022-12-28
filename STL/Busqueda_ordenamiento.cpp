#include <iostream>
#include <stdlib.h>
#include <iterator>
#include <algorithm>
#include <list>

using namespace std;

// Funcion para generar valores aleatorios
int numerosAleatorios();

// Funcion para calcular si un numero es par

template <typename T>
bool esPar(T);

int main(int argc, char* argv[]){
    vector<int> valores(10);

    generate(valores.begin(), valores.end(), numerosAleatorios);

    // Mostrando elementos
    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, ","));

    // Nuevo vector para almacenar los numeros pares
    vector<int> pares;

    // Iterador para recorrer el vector valores

    vector<int>:: iterator itr = valores.begin();

    while((itr = find_if(itr, valores.end(), esPar<int>)) != valores.end()){
        pares.push_back(*itr);
        itr++;
    }
    cout<<"\n\n";
    
    //Ordenar con algorithm
    sort(pares.begin(), pares.end());

    copy(pares.begin(), pares.end(), ostream_iterator<int>(cout, ","));


    cout<<endl;
    system("pause");
    return 0;
}

int numerosAleatorios(){
    return rand() % 30;
}

template <typename T>
bool esPar(T val){
    if (val % 2 == 0)
        return true;
    else
        return false;
}