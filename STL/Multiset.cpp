#include <iostream>
#include <iterator>
#include <algorithm>
#include <set>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[]){
    multiset<int> valores;


    // Insertamos elementos al multiset
    valores.insert(10);
    valores.insert(2);
    valores.insert(5);
    valores.insert(20);
    valores.insert(3);

    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, ","));

    // Insertr valores duplicados
    valores.insert(10);
    valores.insert(3);
    valores.insert(3);
    valores.insert(3);

    cout<<endl;
    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, ","));
    cout<<endl;
    // Buscar elementos en el multiset

    multiset<int> :: iterator itr = valores.find(15);
    if (itr != valores.end())
        cout<< "El elemento "<< *itr << " si ha sido encontrado"<<endl;
    else
        cout<< "El elemento no ha sido encontrado"<<endl;

    // Contar cuantas veces aparece un determinado elemento
    cout<< "El numero 10 aparece " << valores.count(10) << " veces"<<endl;

    // Eliminar un elemento
    // Funcion erase: Elimina todas las coincidencias del elemento
    valores.erase(3);

    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, ","));


    cout<<endl;
    system("pause");
    return 0;
}