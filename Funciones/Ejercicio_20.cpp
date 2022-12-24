#include <iostream>
#include <conio.h>
#include <exception>

using namespace std;


int Fibonacci(int);

int main (){
    int nElementos;
    do {
        cout<<"Ingrese un numero: ";
        cin>>nElementos;
    } while(nElementos <= 0);

    cout<<"\nSerie Fibonacci: ";
    
    for(int i = 1; i<nElementos; i++){
    cout<<Fibonacci(i)<<" ";
    }
    cout<<endl;

    getch();
    return 0;
}

int Fibonacci(int n){
    if(n ==1 || n==2){
        return 1;
    } else{
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}