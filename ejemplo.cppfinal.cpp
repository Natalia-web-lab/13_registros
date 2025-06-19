#include <iostream>
#include <string>
using namespace std;

struct EMP{
    int num;
    string nom;
    float ven[12], sal;

};


int main(){
    EMP EMPLEADOS[100];
    int n;
    cout<<"Ingrese la cantidad de empleados: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"n� de empleados:"<<endl;
        cin>>EMPLEADOS[i].num;
        cin.ignore();
        cout<<"Nombre: ";

        getline(cin,EMPLEADOS[i].nom);
        cout<<"ventas: ";
        for(int j=0;j<12;j++)
            cin>>EMPLEADOS[i].ven[j];
        cout<<"Su salario es: ";
        cin>>EMPLEADOS[i].sal;
    }

    return 0;
}

