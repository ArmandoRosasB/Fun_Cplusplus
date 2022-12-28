#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <vector>

using namespace std;

template<typename Iter>
void mostrarEnPantalla(Iter, Iter);

int main(int argc, char* argv[]){
    vector<char> letras(10);

    for(int i = 0; i < letras.size(); i++){
        //Agregando elementos aleatorios
        letras[i] = 'A' + (rand() % 26);
    }

    mostrarEnPantalla(letras.begin(), letras.end());
    cout<<endl;

    // rbegin() apunta al final 
    // rend() apunta al inicio
    mostrarEnPantalla(letras.rbegin(), letras.rend());
    cout<<endl;

    // Podemos acceder a cualquier posicion !!!
    // Visualizar los elementos del medio del vector
    mostrarEnPantalla(letras.begin() + 1, letras.end() - 1);
    cout<<endl;
    system("pause");
    return 0;
}

// Los parametros son iteradores
template<typename Iter>
void mostrarEnPantalla(Iter inicio, Iter final){
    while(inicio != final){
        cout<< *inicio <<"|";

        inicio++;
    }
}