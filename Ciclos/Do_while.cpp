/*La sentencia do while

    do{
        conjunto de instrucciones;
    }while (expresión lógica);

*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {
    int i;
    i = 1;

    do {
        cout<< i << endl;
        i++;
    }while(i<=10);

    system("pause");/*
    Funcion similar a getch()
    de la libreria conio.h
    */

    return 0;
}