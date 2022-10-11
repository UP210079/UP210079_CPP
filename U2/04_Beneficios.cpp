
#include <iostream>

using namespace std;

int main (){
    double punto;
    double monto = 2400;
    double beneficio = 0;

    cout << "Dame tu cantidad de puntos";
    cin >> punto;

    if(punto == 0.0){
        cout << "Tu nivel es invalido \n";
        beneficio = monto * punto;
            cout << "Tu beneficio es: $" << beneficio << endl;

    }
    else if (punto == 0.4){
        cout << "Tu nivel es valido \n";
        beneficio = monto * punto;
            cout << "Tu beneficio es: $" << beneficio << endl;
    }
    else if (punto > 1){
        cout << "Ingresa una cantidad valida" << endl;
    }

    else if (punto >= 0.6){
        cout << "Tu cantidad es: \n";
         beneficio = monto * punto;
             cout << "Tu beneficio es: $" << beneficio << endl;
    }

    else {
        cout << "Ingresa una cantidad valida" << endl;
    }

return 0;
}