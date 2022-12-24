#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

/*
Funciones posicionameinto ifstream
    tellg() -> Retorna la posicion actual del cursor en el archivo
    seekg(n) -> Posiciona el cursor en la posicion n para leer a partir de ahi  

*/

void leer();
int main(int argc, char* argv[]){

    leer();

    system("pause");
    return 0;
}

void leer(){
    ifstream input;

    input.open("Posicion.txt", ios::in);

    if(input.fail()){
        cout<< "Error al crear el archivo"<<endl;
        exit(1);
    }

    string linea;

    input.seekg(5); //Lee desde la posicion 5

    cout<<"Posicion actual: "<< input.tellg()<<endl;
    getline(input, linea);
    cout<<"Linea: "<<linea<<endl;

    input.close();
    
}