#include <iostream>
#include <iterator> // Para streams_iterators
#include <stdlib.h>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]){
    ifstream input;

    if (argc != 2){
        cout<< "Numero de argumentos incorrecto"<<endl;
        return -1;
    }

    input.open(argv[1], ios::in);

    if (!input.is_open()){
        cout<<"El archivo no existe"<<endl;
        return -1;
    }

    // istream_iterator: Iterador de lectura
    istream_iterator<char> itr(input);

    vector<char> frase;

    while (!input.eof()){ //Mientras no sea el final del archivo
        frase.push_back(*itr); // Almacenamos el caracteri por el que vamos
        itr++;
    }

    for(int i = 0; i < frase.size(); i++){
        cout<< frase[i];
    }

    cout<<endl;
    input.close();
    system("pause");
    return 0;
}