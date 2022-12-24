/* La sentencia if

    if(condicion) {
        Instrucciones 1;
    }
    else{
        Instrucciones 2;
    }
*/
 #include <iostream>

 using namespace std;

int main () {
    int numero, dato = 5;
    cout<< "Digite un numero: ";
    cin>> numero;

    if (numero == dato) { //== Operador de igualdad
        cout<< "El numero es 5"<<endl;
    }
    else{
        cout<< "El numero es distinto a 5"<<endl;
    }

    cout<< "Digite otro numero: ";
    cin>> numero;

    if (numero != dato) { //== Operador de diferencia
        cout<< "El numero es distinto a 5"<<endl;
    }
    else{
        cout<< "El numero es 5"<<endl;
    }

    cout<< "Digite otro numero: ";
    cin>> numero;

    if (numero > dato) { // > Operador mayor a 
        cout<< "El numero es mayor a 5"<<endl;
    }
    else{
        cout<< "El numero es menor a 5"<<endl;
    }

    cout<< "Digite otro numero: ";
    cin>> numero;

    if (numero < dato) { // < Operador menor a 
        cout<< "El numero es menor a 5"<<endl;
    }
    else{
        cout<< "El numero es mayor a 5"<<endl;
    }

    cout<< "Digite otro numero: ";
    cin>> numero;

    if (numero <= dato) { // < Operador menor a 
        cout<< "El numero es menor o igual a 5"<<endl;
    }
    else{
        cout<< "El numero es mayor a 5"<<endl;
    }

    cout<< "Digite otro numero: ";
    cin>> numero;

    if (numero >= dato) { // < Operador menor a 
        cout<< "El numero es mayor o igual a 5"<<endl;
    }
    else{
        cout<< "El numero es menor a 5"<<endl;
    }

    return 0;
 }