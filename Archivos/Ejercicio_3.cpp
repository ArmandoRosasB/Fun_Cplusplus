#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;


int main(int argc, char* argv[]){
    ofstream output;
    string texto;
    char respuesta;

    if(argc != 2){
        string formatoRequerido = R"(.\app archivoSalida.txt)";
        cout<<"Numero de argumentos incorrecto"<<endl;
        cout<<"Formato requerido: "<< formatoRequerido;
    }

    output.open(argv[1], ios::app);

    if(output.fail()){
        cout<<"Error al abrir el archivo"<<endl;
        exit(1);
    }

    do{
        fflush(stdin);
        cout<< "Ingresa una frase para agregar a " << argv[1]<<": ";
        getline(cin, texto);

        output << texto <<endl;

        cout<<"Deseas agregar otra frase(s/n): ";
        cin>> respuesta;

    } while(respuesta == 's' || respuesta == 'S');




    system("pause");
    return 0;
}