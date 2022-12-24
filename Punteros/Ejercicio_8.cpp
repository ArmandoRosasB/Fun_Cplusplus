#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void pedirDatos();
void contarVocales(char *);

char cadena[40];

int main (){
    pedirDatos();
    contarVocales(cadena);


    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese una palabra o frase(max 40 letras)";
    cin.getline(cadena, 40, '\n');
    strlwr(cadena);
}

void contarVocales(char *palabra){
    int a, e, i, o, u;
    a = 0;
    e = 0;
    i = 0;
    o = 0;
    u = 0;

    while(*palabra){
        switch (*palabra)
        {
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;
        }
        palabra ++;
    }

    cout<<"Letras a encontradas: "<<a<<endl;
    cout<<"Letras e encontradas: "<<e<<endl;
    cout<<"Letras i encontradas: "<<i<<endl;
    cout<<"Letras o encontradas: "<<o<<endl;
    cout<<"Letras u encontradas: "<<u<<endl;

}