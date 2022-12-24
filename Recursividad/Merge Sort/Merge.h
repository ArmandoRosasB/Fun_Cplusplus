template <typename T>
void merge(T* arr, int izquierda, int central, int derecha){
    int i, k, z;
    T* aux= new T[derecha - izquierda + 1];

    i = z = izquierda;
    k = central + 1;

    while(i <= central && k <= derecha){
        if(arr[i]  > arr[k])
            aux[z] = arr[k++];
        else
            aux[z] = arr[i++];    
        z++;
    }

    while(i <= central){ //Si aun quedan elementos de la sublista izquierda
        aux[z++] = arr[i++];
    }
    while(k <= derecha){ //Si aun quedan elementos de la sublista derecha
        aux[z++] = arr[k++];
    }
    for(int i = izquierda; i <= derecha; i++){
        arr[i] = aux[i];
    }

    delete aux;
}

template <typename T>
void mergeSort(T* arr, int primero, int ultimo){
    int mitad;
    if (primero < ultimo){
        mitad = (primero + ultimo)/2;
        mergeSort(arr, primero, mitad); //Ordenamos la primera mitad
        mergeSort(arr, mitad + 1, ultimo); //Ordenamos la segunda mitad
        merge(arr, primero, mitad, ultimo);
    }
}

