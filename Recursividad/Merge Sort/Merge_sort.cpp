#include <iostream>
#include <stdlib.h>
#include "Merge.h"

using namespace std;


int main(int argc, char*argv[]){
    int arreglo[] = {5, 7, 87, 1, 3, 9};

    mergeSort(arreglo, 0, 5);

    for (int i: arreglo){
        cout<< i <<" ";
    }

    cout<<endl;

    system("pause");
    return 0;
}
