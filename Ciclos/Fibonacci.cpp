#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {
    int n, i, x = 0, y = 1, z = 1;

    cout<< "Ingrese el valor de n: ";
    cin>> n;
    cout<<y<<endl;

    for (i = 1; i<n; i++){
        z = x + y;
        cout<< z<<endl;
        x = y;
        y = z;
    }

    system("pause");

    return 0;
}