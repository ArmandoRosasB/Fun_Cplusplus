#include <iostream>


#ifndef COORDENADAS_H
#define COORDENADAS_H


class Coordenadas{
    private:
        int x;
        int y;
    
    public:
        Coordenadas();
        Coordenadas(int, int);
        int getX();
        int getY();

        void setCoordenates(int, int);
        void setX(int);
        void setY(int);
};

Coordenadas:: Coordenadas(){
    x = 0;
    y = 0;
}

Coordenadas:: Coordenadas(int x, int y){
    this-> x = x;
    this -> y = y;
}

int Coordenadas:: getX(){
    return x;
}

int Coordenadas:: getY(){
    return y;
}

void Coordenadas:: setCoordenates(int x, int y){
    this-> x = x;
    this -> y = y;
}

void Coordenadas:: setX(int x){
    this-> x = x;
}

void Coordenadas:: setY(int y){
    this-> y = y;
}
#endif //COORDENADAS_H