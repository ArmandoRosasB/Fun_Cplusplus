#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

void escribir();

int main( int argc, char* argv[]){

    escribir();

    system("pause");
    return 0;
}

void escribir(){
    ofstream output;
    string nombreArchivo, frase;

    cout<< "Ingresa el nombre del archivo: ";
    getline(cin, nombreArchivo);
    //output.open("Direccion del archivo", salida);
    /*
    Si quieres que el nombre del archivo sea una variable es
    necesario agregar .c_str().
    */
    output.open(nombreArchivo.c_str(), ios::out);
    if(output.fail()){
        cout<<"No se pudo abrir el archivo"<<endl;
        exit(1); //Salir automaticamente del programa rapido
    }

    cout<<"\nDigite el texto del archivo: "; 
    getline(cin, frase);
    output<<"Hola, mi nombre es Armando";
    output<<"\n"<<frase;

    output.close();
}