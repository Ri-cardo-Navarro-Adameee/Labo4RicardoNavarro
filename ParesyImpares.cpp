#include<iostream>
using namespace std;
int main (){
int n = 0;
int contador = 0;
int suma = 0;
cout<<"Ingrese un numero"<<endl;
cin >> n;
for (int i  = 1; i <=n; i+= 2){
    suma+= i;
    contador++;
}
cout<<"La cantidad de impares es: "<<contador<<endl;
cout<<"La suma total de los imapres"<<suma<<endl;


    return 0;
}