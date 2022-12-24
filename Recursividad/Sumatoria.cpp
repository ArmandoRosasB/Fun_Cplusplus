#include <iostream>
#include <stdlib.h>

using namespace std;


int suma(int);

int main(int argc, char* argv[]){

    cout<< suma(10)<<endl;

    system("pause");
    return 0;

}

int suma(int n){
    if(n < 2)
        return n;
    else{
        return n + suma(n - 1);
    }
}