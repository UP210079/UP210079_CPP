#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int edad = 55;
    if (edad >= 1 && edad<= 150) {
        if (edad <= 30){
            cout << "1ra Edad" << endl;
        } else if (edad >=31 && edad <= 60) {
            cout << "2da Edad" << endl;
        } else if (edad >=61 && edad <= 90) {
            cout << "3ra Edad" << endl;
        } else {
            cout << "Horas Extras" << endl;
        }
    }
    else {
        cout << "Rango es Invalido" << endl;
    }

    //getchar();
    return 0;
}