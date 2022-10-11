#include <iostream>
using namespace std;

int main(){
    float temperatura;
    int contador = 1;
    float tempeAcum = 0;
    int temperatura_min = 9999, temperatura_max = -9999;
    do
    {
        cout << "Dame una temperatura" << endl;
        cin >> temperatura;
        tempeAcum +=temperatura;

        contador ++;
        if (temperatura <= temperatura_min)
        {
            temperatura_min=temperatura;
        }
        if (temperatura >= temperatura_max)
        {
            temperatura_max=temperatura;
        }
    } while (contador <=6);
    cout << "La temperatura de hoy es: " << tempeAcum/6 <<endl;
    cout << "La temperatura mínima es: " << temperatura_min<< endl;
    cout << "La temperatura máxima es: " << temperatura_max << endl;
    return 0;
}