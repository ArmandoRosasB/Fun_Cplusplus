#include <iostream>

using namespace std;

int main () {

    char l;

    cout << "Introduce uan letra: ";
    cin>> l;

    switch (l) {

        case 'a':
            cout<< "\nEs la vocal minuscula a";
            break;
        case 'e':
            cout<< "\nEs la vocal minuscula e";
            break;
        case 'i':
            cout<< "\nEs la vocal minuscula i";
            break;
        case 'o':
            cout<< "\nEs la vocal minuscula o";
            break;
        case 'u':
            cout<< "\nEs la vocal minuscula u";
            break;
        default:
            cout<< "\nNo es una vocal minuscula";
            break;
    }
        
    cout << "\nIntroduce uan letra: ";
    cin>> l;

    switch (l) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<< "Es una vocal minuscula";
            break;
        default:
            cout<< "No es una vocal minuscula";
            break;

    }

    


    return 0;
}