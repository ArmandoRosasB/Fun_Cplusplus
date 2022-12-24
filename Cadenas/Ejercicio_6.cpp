#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main (){
    char palabra_uno[40];
    char palabra_dos[40];

    cout<< "Digite una palabra: ";
    cin.getline(palabra_uno, 40, '\n');

    cout<< "Digite otra palabra: ";
    cin.getline(palabra_dos, 40, '\n');

    strupr(palabra_uno);
    strupr(palabra_dos);

    if(strcmp(palabra_uno, palabra_dos) == 0){
        cout<< "Ambas palabras son iguales"<<endl;
    } else{
        cout<< "Son diferentes palabras"<<endl;
    }


    system("pause");
    return 0;
}