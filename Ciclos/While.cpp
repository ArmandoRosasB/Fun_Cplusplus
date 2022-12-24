/* La sentencia while:

    while (expresión lógica){

        conjunto de instrucciones
    }
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main () {
    int i, j;

    i = 1;

    while (i<= 10){
        cout<< i << endl;
        i++; // i += 1;
    }
    getch();


    j = 10;
    while (j>= 1){
        cout<< i << endl;
        j--; // j -= 1;
    }
    getch(); /*

    Parte de la libreria conio.h
    Ayuda a detener el ejecutable (.exe) para
    que se cierre solamente al dar clic y no 
    en automático
    */

    return 0;
}
