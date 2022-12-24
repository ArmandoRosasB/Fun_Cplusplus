#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    int numeros[5] = {1, 2, 3, 4, 10};
    int suma = 0, max = 0;

    for (int i=0; i<5; i++){
        suma += numeros[i];
        if (numeros[i]>= max){
            max = numeros[i];
        }
    }

    if(max = (suma - max)){
        cout<< "El numero "<<max<< " equivale a la suma de los demas"<<endl;
    } else{
        cout<< "No existe un numero que equivale a la suma de los demas"<<endl;
    }

    
    getch();
    return 0;
}