#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;


int main(int argc, char* argv[]){
    ifstream input;
    string nombreArchivo, texto;

    cout<<"Digite el nombre del archivo de lectura: ";
    getline(cin, nombreArchivo);

    input.open(nombreArchivo.c_str(), ios::in);

    if (input.fail()){
        cout<<"Error al abrir el archivo"<<endl;
        exit(1);
    }

    while(!input.eof()){
        getline(input, texto);
        cout<<texto <<endl;
    }

    input.close();

    system("pause");
    return 0;
}