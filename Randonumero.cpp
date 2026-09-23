#include<iostream>
using namespace std;
int main(){
    int numero =0;
    cout<<"Ingrese un numero "<<endl;
    cin >> numero;
    if (numero >=1 && numero<=100){
        cout<<"El numero esta entre el rango de 1 y 100"<<endl;
    } else{
        cout<<"Su numero se encuentra fuera del rango de 1 y 100"<<endl;
    }
    return 0;
}