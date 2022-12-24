#include <iostream>
#include <conio.h>

using namespace std;

int potencia(int, int);

int main (){
    int x, y;
    do {
        cout<<"Ingrese la base: ";
        cin>>x;
        cout<<"Ingrese la potencia: ";
        cin>>y;
    } while(y <= 0);

    cout<<"\n"<<x<< "^" <<y<<" = ";
    cout<<potencia(x, y);


    getch();
    return 0;
}

int potencia (int x, int y){
    int pot;
    if(y == 1){
        pot = x;
    } else{
        pot = x * potencia(x, y-1);
    }

    return pot;
}