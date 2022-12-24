#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {
    int n, conteo = 0;

    do {
        cout<< "Digita un numero: ";
        cin>> n;
        if (n > 0){
            conteo += n;
        }
    }while((n < 20) || (n > 30) || (n == 0) );

    cout<< "El conteo fue de: " << conteo<<endl;

    system("pause");

    return 0;
}
