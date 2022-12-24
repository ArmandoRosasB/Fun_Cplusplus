#include <iostream>
#include <stdlib.h>

using namespace std;

int sumaDigitosIt(int);
int sumaDigitosRe(int);

int main(int argc, char* argv[]){
    cout<< sumaDigitosIt(123456)<<endl;
    cout<< sumaDigitosRe(123456)<<endl;


    system("pause");
    return 0;
}

int sumaDigitosIt(int N){
    int acum = 0;
    while (N > 9){
        acum += N % 10;
        N /= 10;
    }
    return acum + N;
}

int sumaDigitosRe(int N){
    if(N <= 9)
        return N;
    else
        return N%10 + sumaDigitosRe(N/10);
}