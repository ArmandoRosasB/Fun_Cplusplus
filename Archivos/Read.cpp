#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

void lectura();

int main(int argc, char* argv[]){

    lectura();
    
    system("pause");
    return 0;
}

void lectura(){
    ifstream input;
    string texto;
    
    input.open("read_example.txt", ios::in);

    if(input.fail()){
        cout<<"El archivo no se pudo abrir"<<endl;
        exit(1);
    }

    while(!input.eof()){ //Mientras no sea el final del archivo
        getline(input, texto);
        cout<<texto <<endl;
    }

    input.close();
}