#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void intercambiar(int &, int &);
void quickSort(int *, int, int);
void mostrar();

int *array, nElementos;

int main (){
    
    pedirDatos();

    int fin;
    fin = nElementos - 1;
    quickSort(array, 0, fin);
    mostrar();

    delete[] array; //Libera la memoria utilizada para el arreglo dinamico

    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Ingresa el numero de elementos que tendra el arreglo: ";
    cin>>nElementos;
    
    array = new int[nElementos];

    cout<<"A rellenar el arreglo"<<endl<<endl;
    for(int i = 0; i<nElementos; i++){
        cout<<"Arreglo ["<<i<<"]: ";
        cin>>*(array + i);
    
    }
}

void intercambiar(int &x, int &y){
    int aux;
    aux = x;
    x = y;
    y = aux;
}


void quickSort(int *arreglo, int inicio, int final){
    int i, j, central;
    int pivote;
    central = ((inicio + final)/2);
    pivote = *(arreglo + central);

    i = inicio;
    j = final;

    do{
        while(*(arreglo + i) < pivote){
            i++;

        }

        while(*(arreglo + j) > pivote){

            j--;
        }

        if(i <= j){
            intercambiar(*(arreglo + i), *(arreglo + j));
            i++;
            j--;
        }


    } while(i <= j);

    if(inicio < j){
        quickSort(arreglo, inicio, j);
    }
    if(final > i){
        quickSort(arreglo, i, final);
    }
}

void mostrar(){
    cout<<"Arreglo ordenado"<<endl;
    for(int i = 0; i<nElementos; i++){
        cout<<"Arreglo ["<<i<<"]: "<<*(array + i)<<endl;

    }
    cout<<endl;
}