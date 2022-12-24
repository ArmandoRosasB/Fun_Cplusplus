#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
    char palabra[30];
    char palabra_copia[30];
    char palabra_inv[30];

    cout<<"Ingrese una palabra: ";
    cin.getline(palabra, 30, '\n');

    strcpy(palabra_copia, palabra);
    strrev(palabra);

    if(strcmp(palabra, palabra_copia)==0){
        cout<< "Es polindroma"<<endl;
    } else{
        cout<< "No es polindroma"<<endl;
    }



    getch();
    return 0;
}