#include <iostream>
#include <stdlib.h>

using namespace std;

void hanoi(char, char, char, int);

int main(int argc, char* argv[]){
    int n;
    cout<<"Digite el numero de discos: "; cin>>n;

    hanoi('A', 'B', 'C', n);

    system("pause");
    return 0;
}

//Paramteros: 3 varillas y el numero de discos

void hanoi(char varInicial, char Aux, char varFinal, int n){
    if (n == 1){ //Caso base: Solo falta mover un disco
        cout<<"Mover disco desde varilla "<< varInicial
        <<" a varilla "<<varFinal<<endl;
    }
    else { //Caso Recursivo
        hanoi(varInicial, varFinal, Aux, n - 1);
        cout<<"Mover disco desde varilla "<<varInicial
        << " a varilla " << varFinal << endl;
        hanoi(Aux, varInicial, varFinal, n - 1);
    }

}