#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
    char palabra[100];

    cout<< "Digite una frase (NO MAS DE 100 PALABRAS): ";
    cin.getline(palabra,100,'\n');

    if (strlen(palabra) > 10){
        cout<< palabra;
    }


    getch();
    return 0;
}
