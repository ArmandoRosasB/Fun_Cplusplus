#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

int main () {

    int n;
    vector <int> v;
    int i = 0, j = 0;;

    do{
        cout<< "Ingrese un numero: ";
        cin>> n;
        if (n > 0){
            v.resize(i+1);
            v[i] = n;
            i++;
            
        }
    } while (n != 0);

    cout<< "/n/tEl numero de valores digitados mayores a 0 es: "<< v.size()<<endl;

    for (i = 0; i<v.size(); i++){
        cout<< v[i] << endl;
    }
    

    system("pause");

    return 0;
}