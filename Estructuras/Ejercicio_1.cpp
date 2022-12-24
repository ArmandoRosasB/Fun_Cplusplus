#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct corredor{
    char nombre[40];
    int edad;
    char sexo[10];
    char club[20];

}persona;


int main (){
    char categoria[20];

    cout<< "Ingresa tu nombre: ";
    cin.getline(persona.nombre, 40, '\n');
    cout<<"Ingresa tu edad: ";
    cin>> persona.edad;
    fflush(stdin);
    cout<< "Ingresa tu sexo: ";
    cin.getline(persona.sexo, 10, '\n');
    cout<< "Ingresa tu club: ";
    cin.getline(persona.club, 20, '\n');

    if(persona.edad<= 18){
        strcpy(categoria, "Juvenil");

    } else if(persona.edad<= 40){
        strcpy(categoria, "Senior");

    } else {
        strcpy(categoria, "Veterano");
    }

    cout<<"\n\nNombre: "<<persona.nombre<<endl;
    cout<<"Edad: "<<persona.edad<<endl;
    cout<<"Sexo: "<<persona.sexo<<endl;
    cout<<"Club: "<<persona.club<<endl;
    cout<<"Categoria: "<<categoria;
    getch();
    return 0;
}