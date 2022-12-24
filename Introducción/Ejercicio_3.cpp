#include <iostream>
using namespace std;

int main () {
    int edad;
    char sexo [10]; //char capaz de almacenar 10 caracteres
    float altura;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su sexo: ";
    cin >> sexo;
    cout << "Ingrese su altura: ";
    cin >> altura;
    cout<< endl;

    cout << "Tu edad es de " << edad << " años" << 
    ", tu sexo es "<< sexo << " y tu altura es de " << altura
    << " metros.";

   
    
    return 0;
}