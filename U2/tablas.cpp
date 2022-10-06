//Objetivo: For Anidados
// Tablas del 1 al 10
#include <iostream>
using namespace std;

int main()
{
    int N, o,p=1;
    cout << "Introduce el número para ver su tabla de multiplicar: ";
    cin >> N;
    cout << "Hasta cuál número quieres la multiplicación: ";
    cin >> o;
    cout << "Tabla: " << endl;
    for(int i = 1; i <= o; i++)
    {
        for (int j = 1; j<= o; j++)
    {
        cout<<endl;
        cout << i << " x " << j << " = " << i * j << endl;
    }
    }
    return 0;
}