#include <iostream>
#include <stdlib.h>

using namespace std;

int Fibonacci(int);

int main(int argc, char* argv[]){
    cout<< Fibonacci(2)<<endl;

    system("pause");
    return 0;
}

int Fibonacci(int n){
    if (n == 0)
        return 0;
    if (n <= 2)
        return 1;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}