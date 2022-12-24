#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
    int numeros[2][2] = {{1, 2}, {3, 4}};
    int copia[2][2];
    int i, j;

    for(i = 0; i<2; i++){
        for(j = 0; j<2; j++){
            copia[i][j]= numeros[i][j];

            
        }
    }

    cout<<"Matriz original: \n";
    for(i = 0; i<2; i++){
        for(j = 0; j<2; j++){
            cout<<numeros[i][j]<<" "; 

            }
        }
        cout<<endl;
    

    cout<<"Matriz copia: \n";
    for(i = 0; i<2; i++){
        for(j = 0; j<2; j++){
            cout<<copia[i][j]<<" "; 

            }
        }
        cout<<endl;
    


    system("pause");
    return 0;
}