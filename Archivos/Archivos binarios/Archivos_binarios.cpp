#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;


struct Registro
{
    char nombre[30] = "";
    char apellido[30] = "";
};


/*
En archivos binarios es mejor usar cadenas de caracteres, 
ya que los string pueden fallar
*/

void escribirB();
void leerB();
int main(int argc, char* argv[]){

    escribirB();
    leerB();

    system("pause");
    return 0;
}


void escribirB(){
    ofstream outputB;
    //Para abrir un archivo binario se usa .dat
    //Para indicar a C++ que usaremos un archivo binario usamos  ios:: out | ios::binary
    outputB.open("Prueba.dat", ios::binary | ios:: out );

    if(outputB.fail()){
        cout<<"No se pudo crear el archivo binario"<<endl;
        exit(1);
    }

    Registro persona;

    cout<<"Pidiendo datos"<<endl;
    cout<<"Digite su nombre: "; cin.getline(persona.nombre, 30, '\n');
    cout<<"Digite su apelldio: "; cin.getline(persona.apellido, 30, '\n');

    //Estructura para escribir
    outputB.write((char*)&persona, sizeof(Registro));

    outputB.close();

}


void leerB(){
    ifstream inputB;

    inputB.open("Prueba.dat", ios::binary | ios:: in);

    if (inputB.fail()){
        cout<<"No se pudo abrir el archivo"<<endl;
        exit(1);
    }

    Registro persona;

    inputB.read((char*)&persona, sizeof(Registro));

    cout<<"Mostrando los datos leidos\n\n";

    cout<<"Nombre: " << persona.nombre <<endl;
    cout<<"Apellido: " << persona.apellido<<endl;

    inputB.close();
}