#include <iostream>
#include <stdlib.h>

#include "Estudiante.h"

using namespace std;

int main (int argc, char** argv){
    Estudiante* estudiante1 = new Estudiante("34FG", 15.6, 56, "Calle las Palmas #203");

    estudiante1->mostrarDatos();

    cout<<endl;

    system("pause");
    return 0;
}