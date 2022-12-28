#include <iostream>
#include <stdlib.h>
#include <deque>

/*
Deque
Se almacena contiguamente en la memoria
Se puede acceder a ambos extremos del arreglo
*/

using namespace std;

int main(int argc, char* argv[]){
    deque<char> letras;

    // push_front: Insertar elementos por el inicio
    letras.push_front('C');
    letras.push_front('B');
    letras.push_front('A');

    // push_back: Insertar elementos por el final
    letras.push_back('D');
    letras.push_back('E');
    letras.push_back('F');

    for(int i = 0; i < letras.size(); i++){
        cout<< letras[i] << "|";
    }
    cout<<endl;

    // pop_front: Eliminar el elemento al inicio
    letras.pop_front();

    // pop_front: Eliminar el elemento al inicio
    letras.pop_back();

    cout<<"\nMostrarndo deque despues de un pop_back y un pop_front"<<endl;
    for(int i = 0; i < letras.size(); i++){
        cout<< letras[i] << "|";
    }
    cout<<endl;

    system("pause");
    return 0;
}