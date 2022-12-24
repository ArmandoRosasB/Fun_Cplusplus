#include <iostream>
#include <stdlib.h>
#include <vector>


using namespace std;

int main () {
    float max, min, prom;
    int i;
    int hora = 0;

    vector <float> temperatura;


    temperatura.resize(6);

    for (i = 0; i< temperatura.size(); i++){
        cout<<hora<<":00" << " Introducza la temperatura del dia: ";
        cin>>temperatura[i];
        hora += 4;
    }

    min = temperatura[0];

    for (i = 0; i < temperatura.size(); i++){
        	prom +=temperatura[i];
            if(temperatura[i] >=max){
                max = temperatura[i];
            }
            if (temperatura[i] <= min){
                min = temperatura[i];
            }
    }
        prom /= temperatura.size();
        cout<< "\nLa temperatura promedio es de : " << prom << endl;
        cout<< "La temperatura maxima del dia fue de: " << max<<endl;
        cout<< "La temperatura minima del dia fue de: " << min<<endl<<endl;
        
        system("pause");
    return 0;
}