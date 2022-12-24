#include <iostream>
#include <conio.h>

using namespace std;

int main (){

    int f, c;

    cout<< "Ingrese el numero de filas: ";
    cin>> f;
    cout<< "Ingrese el numero de columnas: ";
    cin>>c;
    if( f!= c){
        cout<< "No es simetrica"<<endl;
        getch();
        return 0;
      
    } else{
        int matriz[f][c];
        int transpuesta[f][c];

        int i, j;
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

        bool bandera = true;
        for(i = 0; i<3; i++){
            for(j = 0; j<3; j++){
                if(transpuesta[i][j] != matriz[i][j]){
                    bandera = false;
                    break;
                }
                
            }
        }

        if (bandera){
            cout<< "La matriz es simétrica"<<endl;
        }else{
            cout<< "La matriz no es simétrica"<<endl;
        }

     
    getch();
    return 0;
    }
}