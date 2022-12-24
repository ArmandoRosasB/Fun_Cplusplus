#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
    char nombre[60];

    cout<<"Ingrese su nombre: ";
    cin.getline(nombre, 60, '\n');

    if(nombre[0] == 'A'){
        strlwr(nombre);
        cout<<nombre<<endl;
    } else{
        cout<<nombre<<endl;
    }


    getch();
    return 0;
}