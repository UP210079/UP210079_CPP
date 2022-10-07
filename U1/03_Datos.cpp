#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int entero = 2147483647;
    float flotante = 3.4e38;
    double grande = 2.565465654654;
    char caracter = '@';

    cout << "Este programa muetra los tipos de datos. \n";
    cout << "El numero entero es: " << entero << endl;
    cout << "El tamaño del entero es: " << sizeof(entero) << "Bytes" << endl;
    cout << "El numero flotante es: " << flotante << endl;
    getchar();
    return 0;
}
