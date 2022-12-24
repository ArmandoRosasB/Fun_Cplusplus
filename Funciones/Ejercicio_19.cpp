#include <iostream>
#include <conio.h>

using namespace std;

int suma(int);

int main (){
    int nElementos;

    do {
        cout<<"Ingrese un numero: ";
        cin>>nElementos;
    } while(nElementos <= 0);

    cout<<"La suma es: "<<suma(nElementos)<<endl;

    getch();
    return 0;
}

int suma(int n){
    if(n == 1){
         n = 1;
    } else{
        n = n + suma(n - 1);
    }

    return n;
}