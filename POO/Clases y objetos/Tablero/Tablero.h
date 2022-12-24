#include <iostream>

#ifndef TABLERO_H_INCLUDE
#define TABLERO_H_INCLUDE

class Tablero {
    private:
        int x;
        int y;
    
    public:
        Tablero();
        Tablero(int, int);
        void moverArriba(int);
        void moverAbajo(int);
        void moverDerecha(int);
        void moverIzquierda(int);
        int getX();
        int getY();
};

Tablero:: Tablero(){
    x = 0;
    y = 0;
}

Tablero:: Tablero(int x, int y){
    this-> x = x;
    this-> y = y;
}

void Tablero:: moverArriba(int n){
    y += n;
}

void Tablero:: moverAbajo(int n){
    y -= n;
}

void Tablero:: moverDerecha(int n){
    x += n;
}

void Tablero:: moverIzquierda(int n){
    x -= n;
}

int Tablero:: getX(){
    return x;
}

int Tablero:: getY(){
    return y;
}



#endif //TABLERO_H_INCLUDE