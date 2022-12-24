#include <iostream>
#include <conio.h>

using namespace std;

int main () {

    int numeros[] = {1, 2, 3, 4, 5};
    int mul = 1;
    for(int i= 0; i<=4; i++){
        mul*= numeros[i];
    }

    cout<< "La multiplicacion es de: "<<mul<<endl;
    getch();
    
    return 0;
}