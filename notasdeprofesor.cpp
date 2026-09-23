#include<iostream>
using namespace std;
int main(){
    int nota=0;
    cout<<"Ingrese su nota"<<endl;
    cin >> nota;
    if (nota >= 90){
        cout<<"Excelente, ¡aprobado con honores!."<<endl;
    } else if (nota >=60 && nota<=89){
        cout<<"Buen trabajo, ¡aprobado!"<<endl;
    }else {
        cout<<"Lo siento, no has aprobado. Necesitas estudiar más"<<endl;
    }
return 0;
}
