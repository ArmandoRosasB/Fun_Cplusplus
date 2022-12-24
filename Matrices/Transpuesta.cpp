#include <iostream>
#include <conio.h>

using namespace std;

int main (){

    int i, j;
    int matriz[3][3];
    int transpuesta[3][3];

    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            cout<< "DIgita un numero [" <<i<<"]["<<j<<"]: "; 
            cin>> matriz[i][j];
        }
    }

    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            transpuesta[i][j] = matriz[j][i];
        }
    }

    cout<<"Matriz original: "<<endl;

    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            cout<< matriz[i][j]<<" ";
        }
        cout<< endl;
    }

    cout<< "Matriz transpuesta: "<<endl;

    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            cout<< transpuesta[i][j]<<" ";
        }
        cout<< endl;
    }



    getch();
    return 0;
}