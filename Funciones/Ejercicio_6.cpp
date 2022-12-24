#include <iostream>
#include <stdlib.h>

using namespace std;

template <class TIPOD>
TIPOD maximo(TIPOD, TIPOD, TIPOD);

int main (){
    int dato1 = 4, dato2 = 5, dato3 = 9;
    float dato4 = 4.285, dato5 = 5.518, dato6 = 4.288;
    double dato7 = 4157.285, dato8 = 5275.518, dato9 = 4275.288;

    cout<<"El valor maximo es: "<<maximo(dato1, dato2, dato3)<<endl;
    cout<<"El valor maximo es: "<<maximo(dato4, dato5, dato6)<<endl;
    cout<<"El valor maximo es: "<<maximo(dato7, dato8, dato9)<<endl;

    system("pause");
    return 0;
}

template <class TIPOD>
TIPOD maximo(TIPOD n1, TIPOD n2, TIPOD n3){
    TIPOD max;

    if((n1 > n2) && (n1 > n3)){
        max = n1;
    }

    if((n2 > n1) && (n2 > n3)){
        max = n2;
    }

    if((n3 > n1) && (n3 > n2)){
        max = n3;
    }

    return max;

}