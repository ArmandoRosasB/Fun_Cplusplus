/*Punteros - Declaración de Punteros

&n = La direcciónd de n
*n = La variable cuya dirección esta almacenada en n
 en otras palabras es la variable que almacena la 
 dirección de memoria en donde se almacena otra variable

*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int num, *dir_num;

    num = 20;
    dir_num = &num;

    cout<<"Numero: "<<*dir_num<<endl; /*
    Mostramos lo que hay en la
    posición de memoria del puntero*/
    cout<<"Direccion de memoria: "<< dir_num<< endl;

    system("pause");
    return 0;
}

