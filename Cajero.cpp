#include<iostream>
using namespace std;
int main (){
int opcion = 0;
float Cantidad1 = 0, Cantidad2 = 0;
    cout<<"Elija 1) Para retirar diero "<<endl;
cout<<"Elija 2) Para Ingresar dinero"<<endl;
 cin >> opcion;
switch (opcion ){
 case 1:
 cout<<"Ingrese la cantidad a retrirar"<<endl;
 cin >> Cantidad1;
 if (Cantidad1 > 0){
cout<<"Retiro excitoso : "<<Cantidad1<<endl;
 }else {
    cout<<"No puedes retirar esta cantidad"<<endl;
 }
 break;
 
 case 2 :
 cout<<"Ingrese la cantidad que desea ingresar a la cuenta"<<endl;
 cin >> Cantidad2;
 if (Cantidad2 > 0){
cout<<"Ingreso de monto excitoso : "<<Cantidad2<<endl;
 }else{
cout<<"No puedes ingresar esta cantidad"<<endl;
 }
 break;

 default :
 cout<<"Opcion invalida"<<endl;
}
    return 0;
}
