#include<iostream>
using namespace std;
int main (){
    char R, A, V ;
    char opcion;
     cout<<"Elija una de las siguientes letras"<<endl;
      cout<<"R)"<<endl;
       cout<<"A)"<<endl;
        cout<<"V)"<<endl;
        cin >> opcion ;
    switch (opcion)
    {
    case 'R' :
     cout<<"Alto"<<endl;
        break;
    case 'A':
     cout<<"Precaucion"<<endl;
     break;
     case 'V':
      cout<<"Avance"<<endl;
      break;
      
    default:
     cout<<"Opcion invalida"<<endl;
        break;
    } 
    return 0;
}