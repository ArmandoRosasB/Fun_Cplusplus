#include <iostream>
#include "Coordenadas.h"


const int N = 8; //Dimension del tamaño del tablero de ajedrez
int d[8][2] = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};

int tablero[N][N];

void escribirTablero(int talbero[][N]){
    int i, j;
    for(int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            std::cout<< talbero[i][j]<<"|";
        }
        std:: cout << std:: endl;
    }
    std:: cout<< std:: endl;
}


void saltoCaballo(int i, Coordenadas posicion, bool& succes){
    Coordenadas new_pos; // Siguientes coordenadas

    int k = 0; //Iterador para controlar los desplazamientos del caballo
    succes = false;

    do{
        //Nuevas coordenadas del caballo al moverse
        new_pos.setCoordenates(posicion.getX() +  d[k][0],posicion.getY() +  d[k][1]);

        //Verificando si las coordenadas son correctas y si no se ha visitado antes
        if ((new_pos.getX() >= 0) && (new_pos.getX() < N) && (new_pos.getY() >= 0) && (new_pos.getY() < N) && tablero[new_pos.getX()][new_pos.getY()] == 0){
            //Guardamos el movimiento
            tablero[new_pos.getX()][new_pos.getY()] = i;
            //escribirTablero(tablero); //Mostrar el tablero en cada iteracion

            if(i < N*N){
                saltoCaballo(i + 1, new_pos, succes);
                if(!succes)
                    tablero[new_pos.getX()][new_pos.getY()] = 0;
            }
            else{
                succes = true;
            }
        }
        k++; //Control de movimiento
    } while(k < 8 && !succes);
}
