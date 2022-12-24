#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    int vec[5];
    int vec_dos[5];
    int n;

    cout<< "Ingresa 5 numeros: ";

    for(int i = 0; i<5; i++){
        cin>>n;
        vec[i] = n;
    }

    for(int i = 0; i<5; i++){
        vec_dos[i] = vec[i] * 2;
    }

    cout<< "El nuevo vector es: ";

    for(int i = 0; i<5; i++){
        cout<< vec_dos[i]<<" ";
    }

    cout<< endl;

    getch();

    return 0;
}