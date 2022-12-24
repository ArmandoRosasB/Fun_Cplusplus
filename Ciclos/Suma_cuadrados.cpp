#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main () {

    int i, conteo = 0;

    for (i = 1; i <= 10; i++){
        cout<< pow(i, 2)<< endl;
        conteo += pow(i, 2);
    }

    cout<< "\nLa suma de cuadrados es: "<<conteo<<endl;
    system("pause");

    return 0;
}