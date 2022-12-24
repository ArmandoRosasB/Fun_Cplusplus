#include <iostream>
#include <conio.h>

using namespace std;

int main (){

    int i, j, k;
    int matriz_uno[3][3];
    int matriz_dos[3][3];
    int producto[3][3];

    cout<< "Matriz uno: "<<endl;
    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            cout<< "DIgita un numero [" <<i<<"]["<<j<<"]: "; 
            cin>> matriz_uno[i][j];
        }
    }

    cout<< "\nMatriz_dos: "<<endl;
    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            cout<< "DIgita un numero [" <<i<<"]["<<j<<"]: "; 
            cin>> matriz_dos[i][j];
        }
    }


    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            producto[i][j] = 0;
            for(k = 0; k<3; k++){
            producto[i][j] = producto[i][j] + matriz_uno[i][k]*matriz_dos[k][j];
            }
        }
    }

    cout<<"\n\nMatriz uno: "<<endl;

    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            cout<< matriz_uno[i][j]<<" ";
        }
        cout<< endl;
    }

    cout<< "Matriz dos: "<<endl;

    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            cout<< matriz_dos[i][j]<<" ";
        }
        cout<< endl;
    }

    cout<< "\n\nMatriz producto: "<<endl;

    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            cout<< producto[i][j]<<" ";
        }
        cout<< endl;
    }






    getch();
    return 0;
}