#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]){
    ofstream output;
    char respuesta;
    string linea;

    if(argc != 2){
        string formatoRequerido = R"(.\app archivoSalida.txt)";
        cout<<"Error en el numero de argumentos"<<endl;
        cout<<"Forma requerida: "<<formatoRequerido<<endl;
        exit(1);
    }

    output.open(argv[1]);

    if(output.fail()){
        cout<<"Error abrindo el archivo"<<endl;
        exit(1);
    }

    do{
        fflush(stdin);
        cout<<"Ingrese una frase para digitaizar en su archivo de salida: ";
        getline(cin, linea);
        output << linea <<endl;

        cout<<"Desea agregar otra frase(S/N): "; cin>> respuesta;

    } while(respuesta == 's' || respuesta == 'S');

    output.close();

    system("pause");
    return 0;
}