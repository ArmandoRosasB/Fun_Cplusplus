#include <iostream>
#include <conio.h>

using namespace std;

template <class TIPOD>
void intercambiar(TIPOD&, TIPOD&);

int main (){
    int x, y;
    float n1, n2;
    double p1, p2;

    x = 4;
    y = 8;

    n1 = 5.36;
    n2 = 8.95;

    p1 = 85.369;
    p2 = 74.588;

    cout<<"Valor inicial de x: "<<x<<endl;
    cout<<"Valor inicial de y: "<<y<<endl;

    cout<<"\nValor inicial de n1: "<<n1<<endl;
    cout<<"Valor inicial de n2: "<<n2<<endl;

    cout<<"\nValor inicial de p1: "<<p1<<endl;
    cout<<"Valor inicial de p2: "<<p2<<endl;


    intercambiar(x, y);
    intercambiar(n1, n2);
    intercambiar(p1, p2);


    cout<<"\n\nValor final de x: "<<x<<endl;
    cout<<"Valor final de y: "<<y<<endl;

    cout<<"\nValor final de n1: "<<n1<<endl;
    cout<<"Valor final de n2: "<<n2<<endl;

    cout<<"\nValor final de p1: "<<p1<<endl;
    cout<<"Valor final de p2: "<<p2<<endl;
    


    getch();
    return 0;
}

template <class TIPOD>
void intercambiar(TIPOD& num1, TIPOD& num2){
    TIPOD aux;
    aux = num1;
    num1 = num2;
    num2 = aux;

}