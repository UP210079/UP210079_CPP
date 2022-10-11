#include <iostream>
using namespace std;

int main (){


    int producto;
    float precio;
    float calculo=0;
    float total=0;
    int vuelta;

    cout << "Bienvenido a Michin Store \n";

    do
    {
        
        cout << "Dame el número de productos \n";
        cin  >> producto;

        if (producto !=0 and producto >0){

            cout << "¿Cuál es el precio de el producto? \n";
            cin >> precio;
            total +=(precio*producto);
        }

    } while (producto != 0);
    cout << "El total de tu compra es de: \n" << total << endl;

    //Being a function, it must return a value in this case 0
    return 0;
}