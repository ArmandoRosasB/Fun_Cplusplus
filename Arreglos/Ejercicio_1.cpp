#include <iostream>
#include <conio.h>

using namespace std;

int main () {

    int numeros[] = {1, 2, 3, 4, 5};
    int suma = 0;
    for(int i= 0; i<=4; i++){
        suma+= numeros[i];
    }

    cout<< "La suma es de: "<<suma<<endl;
    getch();
    
    return 0;
}