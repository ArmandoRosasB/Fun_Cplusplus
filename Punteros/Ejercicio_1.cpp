#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    int num, *dir_num;
    dir_num = &num;

    cout<<"Ingrese un numero: ";
    cin>>num;

    if((num % 2) == 0){
        cout<<"El numero "<< *dir_num<<" es par"<<endl;
        cout<<"Direccion de memoria: "<<dir_num;
    } else{
        cout<<"El numero "<< *dir_num<<" es impar"<<endl;
        cout<<"Direccion de memoria: "<<dir_num;
    }


    getch();
    return 0;
}