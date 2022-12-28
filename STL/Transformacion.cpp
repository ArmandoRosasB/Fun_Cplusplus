#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <iterator>
#include <vector>
#include <ctime>

using namespace std;

int letrasAleatorias();
void upper(char&);
char esVocal(char);

int main(int argc, char* argv[]){
    vector<char> letras(10);
    

    srand(time(NULL));
    generate(letras.begin(), letras.end(), letrasAleatorias);

    copy(letras.begin(), letras.end(), ostream_iterator<char>(cout, ","));

    cout<<endl;

    // Desordenamos el vector letras
    random_shuffle(letras.begin(), letras.end());

    cout<<"\nVector desordenado"<<endl;

    copy(letras.begin(), letras.end(), ostream_iterator<char>(cout, ","));

    
    // Ciclos for each
    // Pasamos a mayusculas cada letra del vector
    for_each(letras.begin(), letras.end(), upper);

    cout<< "\n\nVector en mayusculas"<<endl;
    copy(letras.begin(), letras.end(), ostream_iterator<char>(cout, ","));

    cout<<"\nVocales del vector"<<endl;
    // Buscamos las vocales e imprimirlas
    transform(letras.begin(), letras.end(), 
    ostream_iterator<char>(cout, ","), esVocal);



    cout<<endl;
    system("pause");
    return 0;
}

int letrasAleatorias(){
    return 'a' + rand() % 26;
}

void upper(char& letra){
    if (letra >= 'a' && letra <= 'z'){ //Comprobamos si es una letra
        letra = letra - ('a' - 'A');
    }
}

char esVocal(char letra){
    return (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O'|| letra == 'U')? letra : '-';
}