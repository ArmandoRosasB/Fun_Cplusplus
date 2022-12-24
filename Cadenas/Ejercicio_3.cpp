#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main (){
    char cadena_uno[50];
    char cadena_dos[50];

    cout<< "Digita una palabra: ";
    cin.getline(cadena_uno, 50, '\n');

    cout<< "Digita una frase: ";
    cin.getline(cadena_dos, 50, '\n');

    if(strcmp(cadena_uno, cadena_dos) == 0){
        cout<< "Ambas palabras son iguales"<<endl;
    }else{
        if(strcmp(cadena_uno, cadena_dos) > 0){
            cout<< cadena_uno << " esta despues alfabeticamente"<<endl;
        }else{
            cout<< cadena_dos << " esta despues alfabeticamente"<<endl;
        }
    }



    system("pause");
    return 0;
}