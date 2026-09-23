#include<iostream>
using namespace std;
int main(){
    float cantidad = 0, total = 0, monto= 0, total2= 0, F1= 0, F2= 0;
    cout<<"Bienvenido, cual es el monto de su comprar?"<<endl;
    cin >> monto;
    if (monto > 100 && monto<200){
total = monto * 0.10;
F2 = monto-total;
cout<<"Se le aplico un descuento del 10%: "<<F2<<endl;
    }else if (monto>200){
        total2= monto * 0.20;
        F1 = monto - total2;
        cout<<"Se le aplico un descuento del 20%: "<<F1<<endl;
    }else{
        cout<<"No se le aplico ningun descuento"<<endl;
    }
    return 0;
}