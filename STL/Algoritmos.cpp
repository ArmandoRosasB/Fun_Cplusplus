#include <iostream>
#include <stdlib.h>

using namespace std;

//Algoritmo generico
template<typename Iter>
Iter max(Iter, Iter);



int main(int argc, char* argv[]){


    system("pause");
    return 0;
}

template<typename Iter>
Iter max(Iter inicio, Iter fin){
    Iter maximo = inicio;
    Iter aux = inicio;

    while(aux != fin){
        
        if(*maximo < *aux)
            maximo = aux;
    }
    aux++;

    return maximo;
}