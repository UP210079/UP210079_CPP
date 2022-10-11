#include <iostream>
using namespace std;

int main(){
    int edad;
    int precio;
    cout << "Introduce tu edad ";
    cin >> edad;

    if (edad < 4)
        precio = 0;  
    else if (edad >= 4 && edad <= 18)
        precio = 5;
    else if (edad > 18)
        precio = 10;

    cout << "Cantidad a pagar: $" << precio << endl;
    cout << "Bienvenido a Michines Games" << endl;

    return 0;
}