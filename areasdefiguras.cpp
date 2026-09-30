#include <iostream>
using namespace std;
int main()
{
    float radio = 0, base = 0, altura = 0, lado = 0;
    float Area1 = 0, Area2 = 0, Area3 = 0;
    int opcion = 0;
    cout << "Presione 1) para calcular el area de un circulo " << endl;
    cout << "Presione 2) para  calcular el area de un cuadrado " << endl;
    cout << "Presione 3) para calcular el area de triangulo" << endl;
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        cout << "Area de un circulo" << endl;
        cout << "Ingrese el radio de su circulo" << endl;
        cin >> radio;
        Area1 = 3.1415 * radio;
        cout << "El area de su circulo es: " << Area1 << endl;
        break;

    case 2:
        cout << "Area de un cuadrado" << endl;
        cout << "Ingrese un lado de su cuadrado" << endl;
        cin >> lado;
        Area2 = lado * lado;
        cout << "El area de su cuadrado es: " << Area2 << endl;
        break;

    case 3:
        cout << "Area de un triangulo" << endl;
        cout << "Ingrese su base " << endl;
        cin >> base;
        cout << "Ingrese su altura " << endl;
        cin >> altura;
        Area3 = (base * altura) / 2;
        cout << "El area de su triangulo es: " << Area3 << endl;
        break;
    default:
        cout << "Opcion invalida." << endl;
    }

    return 0;
}