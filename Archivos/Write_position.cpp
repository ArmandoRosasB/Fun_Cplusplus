#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

/*
Funciones posicionameinto ofstream
    tellp() -> Retorna la posicion actual del cursor en el archivo
    seekp(n) -> Posiciona el cursor en la posicion n para escribir a partir de ahi  

*/

void escribir();
int main(int argc, char* argv[]){

    escribir();

    system("pause");
    return 0;
}

void escribir(){
    ofstream output;

    output.open("Posicion.txt", ios::out);

    if(output.fail()){
        cout<< "Error al crear el archivo"<<endl;
        exit(1);
    }
    cout<<"Posicion actual del archivo: "<< output.tellp()<<endl;
    output << "Hola que tal";

    output.seekp(5);

    output<< "Me meti aqui";

    cout<<"Posicion actual del archivo: "<< output.tellp()<<endl;

    output.close();
    
}