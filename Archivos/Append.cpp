#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;


void append();

int main(int argc, char* argv[]){
    append();

    system("pause");
    return 0;
}


void append(){
    ofstream output;
    string texto;

    output.open("frases.txt", ios::app); //Abrimos el archivo en modo añadir

    if(output.fail()){
        cout<<"Error al abrir el archivo"<<endl;
        exit(1);
    }
    cout<<"Digite el texto a agregar: ";
    getline(cin, texto);
    output<< texto <<endl;

    output.close();
}