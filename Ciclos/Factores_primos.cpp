#include <iostream>
#include <conio.h>

using namespace std;


bool primo (int);


int main () {
    int numero, i;

    cout<< "Digite un numero: ";
    cin>> numero;
    cout<<"Factores primos de "<< numero<<": ";

    for(i = 2; i<=numero; i++){
        if(primo(i)){
            while(numero % i == 0){
                cout<< i << " ";
                numero /= i;
            }
        }
    }


    getch();
    return 0;
}

bool primo (int n) {
    if ((n != 1) && (n != 0)){
        for(int i  = 2; i<=n; i++){
            if(n % i == 0){
                if(n == i){
                    return true;
                } else{
                    return false;
                }
            }
        }

    }
    return false;
    
}