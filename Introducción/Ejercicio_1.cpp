#include <iostream>

using namespace std;

int main (){
    float num1, num2;
    float suma, resta, div, mul;


    cout << "Escribe un numero: ";
    cin>> num1;
    cout << "Escribe otro numero: ";
    cin>> num2;

    suma = num1 + num2;
    resta = num1 - num2;
    div = num1/num2;
    mul = num1 * num2;

    cout <<num1 << " + "<< num2 << " = " << suma <<endl; 
    cout <<num1 << " - "<< num2 << " = " << resta <<endl; 
    cout <<num1 << " * "<< num2 << " = " << mul <<endl; 
    cout <<num1 << " / "<< num2 << " = " << div <<endl; 
    return 0;
}