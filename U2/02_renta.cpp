#include <iostream>
using namespace std;

int main (){

    int renta;
    int descuento;
    int impuesto;

    cout << "¿Cual es tu renta anual? $";
    cin >> renta;
    
    if (renta < 10000)
        descuento = 5;
    else if (renta < 20000)
        descuento = 15;
    else if (renta < 35000)
        descuento = 20;
    else if (renta < 60000)
        descuento = 30;
    else
        descuento = 45;

    impuesto=renta * descuento / 100;
    
    cout << "Tu impuesto a pagar es de $" << impuesto << endl;
    cout << "Tu descuendo es de " << descuento << "%" << endl;


    return 0;
}