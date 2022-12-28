#include <iostream>
#include <algorithm>
#include <numeric> // accumulate
#include <iterator>
#include <stdlib.h>
#include <fstream>
#include <vector>

using namespace std;

// Funcion logica para comprobar si un numero es positivo

template<typename T>
bool esPositivo(T);

int main(int argc, char* argv[]){
    ifstream input;
    vector<float> numeros;
    vector<float> positivos;

    if (argc != 2){
        cout<<"Numero de argumentos incorrectos";
        return -1;  
    }

    input.open(argv[1], ios:: in);

    if (!input.is_open()){
        cout<< "El archivo no fue encontrado";
        return -1;
    }

    // Copiar los elementos del archivo al vector
    /*
    Parametro 1: iterador de lectura
    Parametro 2: Indicamos el final del iterador, es decir, cuando este sea null
    Parametro 3: back_inserter. Inserta los elementos al final y se recorre
    */
    copy(istream_iterator<float>(input), istream_iterator<float>(), back_inserter(numeros));

    // Operaciones matematicas de algorithm

    // Mayor y menor elemento
    cout<<"\nMaximo: " << *max_element(numeros.begin(), numeros.end());
    cout<<"\nMinimo: " << *min_element(numeros.begin(), numeros.end());


    // Promedio de los elementos del vector

    // accumulate, realiza la sumatoria de lso elementos de un contenedor, comenzando la suma en el tercer parametro
    cout<<"\nValor promedio: " << accumulate(numeros.begin(), numeros.end(), 0.0) / numeros.size() << endl;

    // Contar los valores positivos

    cout<<"\nCantidad de numeros positivos: "
    << count_if(numeros.begin(), numeros.end(), esPositivo<float>)<<endl;

    // Encontrar los valores positivos

    vector<float>:: iterator itr = numeros.begin();
    while((itr = find_if(itr, numeros.end(), esPositivo<float>)) != numeros.end()){
        positivos.push_back(*itr);
        itr++;
    }
    
    copy(positivos.begin(), positivos.end(), ostream_iterator<float>(cout, ","));

    cout<<endl<<endl;
    system("pause");
    return 0;
}


template<typename T>
bool esPositivo(T val){
    return val >= 0;
}