//Precio con IVA
// IVA: El precio del producto con IVA es el 121% del costo inicial del producto
#include <iostream>
using namespace std;

int main() {
    float precio, precioConIva, Iva;
    cout << "Escribe el precio del producto: ";
    cin >> precio;
    Iva = precio * 21 / 100;
    precioConIva = precio + Iva;

    cout << "Precio del producto con IVA: " << precioConIva;

    return 0;
}