/*Asignación dinámica de arreglos

new : Reserva el numero de bytes solicitado por la declaración.
delete : Libera un bloque de bytes reservado con anterioridad


Ejemplo: Pedir al usuario n calificaciones y almacenarlos en un arreglo dinámico

*/

#include <iostream>
#include <conio.h>


using namespace std;

//Prototipo de función
void pedirNotas();
void mostrarNotas();

int numCalif, *calif;

int main (){
    pedirNotas();
    mostrarNotas();

    delete[] calif; //Liberando el espacio en bytes utilizados anteriormente

    getch();
    return 0;
}

void pedirNotas(){
    cout<<"Ingrese el numero de calificaciones: ";
    cin>> numCalif;

    calif = new int[numCalif]; // Crear el arreglo dinamico
    /*La variable puntero apunta 
    a la primera posición del nuevo arreglo

    */

    for(int i = 0; i<numCalif; i++){
        cout<<"Ingrese una nota: ";
        cin>>calif[i];
    }
}

void mostrarNotas(){
    cout<<"\nMostrando las notas del usuario:"<<endl;
    for(int i =0; i<numCalif; i++){
        cout<<calif[i]<<endl;
    }
}