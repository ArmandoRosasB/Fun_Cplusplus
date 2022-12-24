//variable = limite_inferior + rand() % (limite_superior + 1 - limite_inferior)

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main () {
    int numero, dato, conteo = 0;
    
    srand(time(NULL));
/*
    The time() function with a parameter NULL, time(NULL) ,
    returns the current calendar time in seconds since 1 January 1970

 */

/*
    srand() Usa el argumento como una semilla para una secuencia nueva de números 
    pseudo-aleatorios para ser retornados por llamadas posteriores a rand
*/

//Se almacena el numero aleatorio

dato = 1 + rand() % (100 + 1 - 1);


    do {
        cout<< "Adivian el numero: ";
        cin>>numero;
        cout<< "\n";

        if(numero > dato){
            cout<< "El numero a buscar es menor"<<endl;
            conteo ++;
        }

        if(numero < dato){
            cout<< "El numero a buscar es mayor"<<endl;
            conteo ++;
        }

    } while( numero != dato);

    cout<< "Felicidades, encontraste el numero en " << conteo << " intentos"<<endl;


    system("pause");

    return 0;
}