#include <iostream>
#include <conio.h>

using namespace std;


int main (){

    int num, *dir_num;
    cout<<"Ingrese un numero: ";
    cin>>num;
    
    dir_num = &num;

    if ((*dir_num != 1) && (*dir_num != 0)){
        for(int i = 2; i<=*dir_num; i++){
            if((*dir_num % i) == 0 ){
                if(*dir_num == i){
                cout<<*dir_num<<" es primo"<<endl;
                cout<<"Direccion de memoria: "<<dir_num<<endl;

                } else{
                    cout<<*dir_num<<" no es primo"<<endl;
                    cout<<"Direccion de memoria: "<<dir_num<<endl;
                    break;
                }
            }
                
        } 
    } 


    getch();
    return 0;
}

