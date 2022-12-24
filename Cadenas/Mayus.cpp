//Pasar una palabra a MAYUSCULA
/*
    Funcion strupr(cadena);
*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
    char palabra[] = "teclado";

    strupr(palabra);

    cout<< palabra<<endl;


    getch();
    return 0;
}