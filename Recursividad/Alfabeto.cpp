/*
Programa que muestre el alfabeto, caracter por caracter, utilizando 
recursividad mutua o indirecta
*/

#include <iostream>
#include <stdlib.h>

using namespace std;


void funcionA(char);
void funcionB(char);

int main(int argc, char* argv[]){
    cout<<"Alfabeto: ";
    funcionA('Z');

    cout<<endl;

    system("pause");
    return 0;
}

void funcionA(char letra){
    if(letra > 'A'){
        funcionB(letra);
    }

    cout<<letra<<" ";
}

void funcionB(char letra){
    funcionA(--letra);
}