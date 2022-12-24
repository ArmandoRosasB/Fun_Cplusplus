#include <iostream>
#include <stdlib.h>

#include "Planta.h"
#include "AnimalCarnivoro.h"
#include "AnimalHerbivoro.h"

using namespace std;

int main(int argc, char* argv[]){
    Planta* planta1 = new Planta();
    AnimalCarnivoro* animal1 = new AnimalCarnivoro();
    AnimalHerbivoro* animal2 = new AnimalHerbivoro();

    planta1->alimentarse();
    animal1->alimentarse();
    animal2->alimentarse();

    system("pause");
    return 0;
}