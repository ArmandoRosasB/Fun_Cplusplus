//Cadenas de carateres

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main (){
    char palabra[] = "Armando";
    char palabra_dos[] = {'A', 'r', 'm', 'a', 'n', 'd', 'o'};
    char nombre[50];


/*
    cout<< "Digite su nombre";
    gets(nombre); //Piuede utilizar memoria que no le pertenece

*/

    cout<< "Digite su nombre: ";
    cin.getline(nombre, 10, '\n'); 
    /*
    cin.getline(nombre de la cadena de caracteres, espacio disponible, 
    terminar cuando encuentre esto);

*/
    cout<<nombre<<endl;

    system("pause");
    return 0;
}