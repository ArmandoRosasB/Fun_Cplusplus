//Declaración de una clase
#include <iostream>

#ifndef PUNTO_H_INCLUDED
#define PUNTO_H_INCLUDED

class Punto {
    /*
    Miembros de la clase: atributos y metodos. Pueden ser private, public y protected
        public: Pueden ser accedidos por miembros de la misma clase, 
        clases heredadas y clases externas.
        Cualquier archivo puede acceder a estos.

    	private: Solamente miebros de la misma clase pueden acceder a estos.

        protected: Pueden ser accedidos por metodos de la misma clase o clases heredadas.
    */
    //Atributos
    private:
        int x;
        int y;
    //Métodos
    public:
        Punto();
        Punto(int, int);

        void setX(int); //Setters
        void setY(int);

        int getX() const; //Getters
        int getY() const;

};

Punto:: Punto(){ //Constructor 1
    x = 0;
    y = 0;
}
Punto:: Punto(int _x, int _y){ //Constructor 2
    x = _x;
    y = _y;
}

void Punto:: setX(int valor_x){
    x = valor_x;
}

void Punto:: setY(int valor_y){
    y = valor_y;
}

int Punto:: getX() const {
    return x;
}

int Punto:: getY() const {
    return y;
}

#endif // PUNTO_H_INCLUDED