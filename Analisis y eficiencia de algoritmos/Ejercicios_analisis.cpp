#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;

double mayor(double, double); // Time complexity: O(1)
string mostrarArreglo(double*, int); // Time complexity: O(n)
double suma(double*, int); // Time complexity: O(log n)
void traspuesta(double**, int); // Time complexity: O(n^2)


int main(int argc, char* argv[]){



    system("pause");
    return 0;
}

double mayor(double x, double y){
    if (x > y)
        return x;
    else
        return y;
}

string mostrarArreglo(double *x, int n){
    stringstream aux;
    for(int i = 0; i< n; i++){
        aux<< x[i] << " ";
    }

    return aux.str();
}

double suma(double*x , int n ){
    int k = 0, s = 0;
    while(k < n){
        s += x[k];
        if(k == 0)
            k = 2;
        else    
            k *= 2;
    }
    return s;
}

void traspuesta(double** d, int n ){
    for(int i = n - 2; i> 0; i--){
        for(int j = i + 1; j<n; j++){
            float t;
            t = d[i][j];
            d[i][j] = d[j][i];
            d[j][i] = t;
        }
    }
}