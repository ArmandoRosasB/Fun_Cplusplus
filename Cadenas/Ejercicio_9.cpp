#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main (){
    char cadena[100];
 

    cout<<"Ingrese una palabra o frase: ";
    cin.getline(cadena, 100, '\n');

    int i, a, e, ii, o, u;
    char n;

    strlwr(cadena);

    a = 0;
    e = 0;
    ii = 0;
    o = 0;
    u = 0;

    for(i = 0; i<strlen(cadena); i++){
        n = cadena[i];

        switch(n){
            case 'a':
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                ii++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;

        }
    }

    cout<< "Numero de vocales a: "<<a<<endl;
    cout<< "Numero de vocales e: "<<e<<endl;
    cout<< "Numero de vocales i: "<<ii<<endl;
    cout<< "Numero de vocales o: "<<o<<endl;
    cout<< "Numero de vocales u: "<<u<<endl;






    getch();
    return 0;
}