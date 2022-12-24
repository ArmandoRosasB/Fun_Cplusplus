#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {
    int i, n, suma = 1;
    int res;

    cout<<"Ingresa el valor de n: ";
    cin>> n;

    for(i = 2; i<=n; i++){
        res = i % 2;
        if(res == 0){
            suma -= i;
        } else{
            suma += i;
        }
    }

    cout<< "El resultado es: "<<suma<<endl;
    system("pause");

    return 0;
}