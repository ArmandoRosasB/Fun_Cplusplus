#include <iostream>

/*
1 reina por columna
*/

const int N = 8; //Tamaño del tablero

/*
Los indices determinan el numero de las columans
y los valores en cada indice corresponde al nuemro de fila donde 
estara la reian en su determinada columna
*/
int reinas[N];

void mostrarTablero(int[]){
    int matriz[N][N];
    for(int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
                matriz[i][j] = 0;
        }
    }

    for(int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            matriz[reinas[j]][j] = 1;
        }
    }
    std::cout<< "Motrando el arreglo"<<std:: endl;
    for(int i = 0; i< N; i++){
        std::cout<< reinas[i]<<" |";
    }

    std::cout << "\n\nMostrando el tablero\n";

    for(int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
                std::cout<< matriz[i][j]<<" |";
        }
        std:: cout<< std:: endl;
    }
    

}

bool valido(int i){
    //Comprobar amenazas entre reinas
    bool bandera = true;

    for(int r = 0; r < i; r++){
        bandera = bandera && (reinas[i] != reinas[r]); //Comprobar si la fila esta vacia, es decir, que no haya otra reina.
        bandera = bandera && (reinas[i] - i != reinas[r] - r); //Comprobamos diagonales
        bandera = bandera && (reinas[i] + i != reinas[r] + r); //Comprobamos diagonales
    }

    return bandera;
}

void ponerReina(int i, bool& succes){ //i representa el conteo de las reinas colocadas
    //Asi como tambien representa la columna en al que trabajamos

    int k = 0; //Inicializaos contador de movimientos (filas en el tablero)
    succes = false;

    do{
        reinas[i] = k; //Copiamos la reina i en la fila k

        if(valido(i)){
            if(i < N - 1){
                ponerReina(i + 1, succes);

                //Backtracking
                if(!succes){
                    reinas[i] = 0;
                }
            }
            else{ // Se han colocado todas las reinas
                succes = true;
            }
        }

        k++;
    } while (k < N && !succes);
}

