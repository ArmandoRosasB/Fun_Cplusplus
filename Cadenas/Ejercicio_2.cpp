#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
    char palabra[100];
    char copia[100];

    cout<< "Digite una frase (NO MAS DE 100 PALABRAS): ";
    cin.getline(palabra,100,'\n');

    strcpy(copia, palabra);

    cout<<"La frase es: "<< copia << endl;


    getch();
    return 0;
}