#include <iostream>
#include <stdlib.h>

using namespace std;

int binarySearch(int*, int, int, int);
int main(int argc, char* argv[]){
    int array[] = {3, 4, 5, 8, 9, 10};

    cout<<binarySearch(array, 4, 0, 5) << endl;

    system("pause");
    return 0;
}

int binarySearch(int* arr, int target, int inf, int top){
    if(inf > top)
        return -1;
    else{    
        int mitad = (inf + top)/2;

        if(arr[mitad] == target)
            return mitad;
        else if (arr[mitad] > target)
            return binarySearch(arr, target, inf, mitad - 1);
        else
            return binarySearch(arr, target, mitad + 1, top);
    }
    

} 