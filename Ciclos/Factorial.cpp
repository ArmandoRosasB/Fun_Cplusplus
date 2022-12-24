#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {
    int n, i, r = 1;

    cout<< "Ingrese el valor de n: ";
    cin>> n;

    for (i = 2; i<=n; i++){
        r *= i;
    }
    cout<< n<<"! = "<< r<< endl;

    system("pause");


    return 0;
}