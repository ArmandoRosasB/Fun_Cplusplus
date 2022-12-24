#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void intercambio( int&,  int&);
void quickSort(int *, int, int);
void busquedaBinaria(int *, int, int, int);
void mostrarArreglo();


int *arreglo, nElementos;

int main (){
    int dat, fin;
    pedirDatos();

    fin = nElementos - 1;
    quickSort(arreglo, 0, fin);

    cout<<"Arreglo ordenado"<<endl;
    mostrarArreglo();

    cout<<"Ingresa el numero a buscar: ";
    cin>>dat;

    busquedaBinaria(arreglo, 0, nElementos, dat);
    
    delete [] arreglo;
    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Ingresa el numero de elementos del arreglo: ";
    cin>>nElementos;

    arreglo = new int[nElementos];

    cout<<"A rellenar el arreglo"<<endl;
    for(int i = 0; i<nElementos; i++){
        cout<<"Arreglo ["<<i<<"]: ";
        cin>>*(arreglo + i);
    }

}

void intercambio(int &x, int &y){
    int aux;
    aux = x;
    x = y;
    y = aux;
}

void quickSort(int *array, int inicio, int final){
    int i, j, central, pivote;
    central = (inicio + final)/2;
    pivote = *(array + central);
    i = inicio;
    j = final;

    do{
        while(*(array + i) < pivote)
        {
            i++;
        }
        while(*(array + j) > pivote)
        {
            j--;
        }

        if(i<=j){
            intercambio(*(array + i), *(array + j));
            i++;
            j--;
        }
        
    } while(i <= j);

    if(inicio < j){
        quickSort(array, inicio, j);
    }
    if(final > i){
        quickSort(array, i, final);
    }
}

void busquedaBinaria(int *array, int inf, int sup, int dato){
    int mitad;
    mitad = (inf+sup)/2;

    while (inf<=sup){
        if (*(array + mitad)< dato){

            inf=mitad+1;

        } else if (*(array + mitad)== dato) {
            cout<<" Se encontro el numero en la posicion: "<<mitad<<endl;
            break;
        }
        else {
            sup = mitad - 1;
        }

        mitad = (inf+sup)/2;
    }

    if (inf>sup){
        cout<<"Numero no encotrado"<<endl;
    }
    
}

void mostrarArreglo(){
    for(int i = 0; i<nElementos; i++){
        cout<<"Arreglo ["<<i<<"]: "<<*(arreglo + i)<<endl;
    }
}