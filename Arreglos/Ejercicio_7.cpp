#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
    char vec_uno[] = {'a', 'b', 'c', 'd', 'e'};
    char vec_dos[] = {'f', 'g', 'h', 'i', 'j'};
    char vec_tres[10];

    for(int i = 0; i<5; i++){
        vec_tres[i] = vec_uno[i];
        
    }

    for(int i = 5; i<10; i++){
        vec_tres[i] = vec_dos[i-5];
    }

    cout<< "El vector final es: ";

    for(int i = 0; i<=9; i++){
        cout<< vec_tres[i]<<" ";
    }

    cout<<endl;

    system("pause");
    
    return 0;
}