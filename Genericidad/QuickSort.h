#include <iostream>
#include "Intercambio.h"


template <typename T>
void quickSortAscendente(T* arr, int primero, int ultimo){
    int i, j, central;
    float pivote;

    central = (primero + ultimo)/2;
    pivote = arr[central];
    i = primero;
    j = ultimo;
    do{
        while (arr[i] < pivote)
        {
            i++;
        }
        while (arr[j] > pivote)
        {
            j--;
        }
        
        if(i <= j){
            intercambiar(arr[i], arr[j]);
            i++;
            j--;
        }

    } while(i <= j);

    if(primero < j){
        quickSortAscendente(arr, primero, j); //Ordenamos la sublista izquierda
    }

    if(ultimo > i){
        quickSortAscendente(arr, i, ultimo); //Ordenamos la sublista derecha
    }
}

template <typename T>
void quickSortDescendente(T* arr, int primero, int ultimo){
    int i, j, central;
    float pivote;

    central = (primero + ultimo)/2;
    pivote = arr[central];
    i = primero;
    j = ultimo;
    do{
        while (arr[i] > pivote)
        {
            i++;
        }
        while (arr[j] < pivote)
        {
            j--;
        }
        
        if(i <= j){
            intercambiar(arr[i], arr[j]);
            i++;
            j--;
        }

    } while(i <= j);

    if(primero < j){
        quickSortDescendente(arr, primero, j); //Ordenamos la sublista izquierda
    }

    if(ultimo > i){
       quickSortDescendente(arr, i, ultimo); //Ordenamos la sublista derecha
    }
}