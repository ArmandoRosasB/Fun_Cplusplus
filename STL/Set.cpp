#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <iterator>
#include <algorithm>
#include <set>

using namespace std;

/*
Set: Conjunto de valores unicos ordenados

*/

int main(int argc, char* argv[]){
    set<int> valores;
    
    // Insertamos elementos
    valores.insert(5);
    valores.insert(3);
    valores.insert(10);
    valores.insert(1);
    valores.insert(15);

    // Mostrar elementos
    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, ","));
    cout<<endl;

    valores.insert(3);
    valores.insert(10);

    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, ","));


    // Busqueda de un elemento
    set<int>:: iterator itr = valores.find(2);
    
    if (itr != valores.end()){
        cout<<"\n\nEl elemento " << *itr << " si ha sido encontrado"<<endl;
    } else{
        cout<<"\n\nEl elemento no ha sido encontrado"<<endl;
    }

    // Eliminar un elemento
    valores.erase(5);
    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, ","));



    cout<<endl;
    system("pause");
    return 0;
}