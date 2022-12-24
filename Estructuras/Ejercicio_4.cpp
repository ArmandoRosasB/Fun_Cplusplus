#include <iostream>
#include <stdlib.h>

using namespace std;


struct atleta{
    char nombre[40];
    char pais[30];
    int numero_medallas;
} atletas[100];


int main (){
    int n, i;
    cout<<"Ingrese la cantitad de atletas: ";
    cin>>n;

    for(i = 0; i<n; i++){
        fflush(stdin);
        cout<<"Atelta "<< i+1 <<endl;
        cout<<"Digite el nombre: ";
        cin.getline(atletas[i].nombre, 40,'\n');
        cout<<"Digite el pais: ";
        cin.getline(atletas[i].pais, 30,'\n');
        cout<<"Digite el numero de medallas: ";
        cin>>atletas[i].numero_medallas;
        cout<<"\n\n";    
    }

    int max = 0;

    for(i = 0; i<n; i++){
        if(atletas[i].numero_medallas > max){
            max = atletas[i].numero_medallas;

        }
    }

    cout<<"Atleta(s) con mayor numero de medallas: "<<endl;
    for(i = 0; i<n; i++){
        if(atletas[i].numero_medallas == max){
            cout<<"Atelta "<< i+1 <<endl;
            cout<<"Nombre: "<<atletas[i].nombre<<endl;
            cout<<"Pais: "<<atletas[i].pais<<endl;
            cout<<"Numero de medallas: "<<atletas[i].numero_medallas;
            cout<<"\n\n"; 
        }
    }

    system("pause");
    return 0;
}