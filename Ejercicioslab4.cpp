#include<iostream>
using namespace std;
int main (){
int edad = 0;
cout<<"Ingrese su edad"<<endl;
cin >> edad;
if (edad >= 18){
    cout<<"Es mayor de edad"<<endl;
} else {
    cout<<"ES menor de edad"<<endl;
}
return 0;
}