#include <iostream>
#include <stdlib.h>
#include "N_reinas.h"

using namespace std;

int main(int argc, char* argv[]){
    bool succes;

    ponerReina(0, succes);

    if(succes){
        cout<< "Si existe una combinacion de reinas"<<endl;
        mostrarTablero(reinas);
    }
    else{
        cout<< "No existe una combinacion posible"<<endl;
    }

    system("pause");
    return 0;
}