#include <iostream>
#include <cmath>

using namespace std;

double fnEcuacion1(double x)
{
    return (pow(x, 2) - 8*x + 15);
}
int main()
{
    double x1 = -10;
    double x2 = 4.5;
    double xPromedio;

    double ErrorEstandar = .00001;
    double ErrorRelativo = abs(x2 - x1); 
    int i = 1;
    while (ErrorRelativo > ErrorEstandar)
    {
        xPromedio = (x1 + x2)/2;
        if (fnEcuacion1(x1) * fnEcuacion1(xPromedio) < 0)
        {
            x2 = xPromedio;
        
        } 
        else 
        {
            x1 = xPromedio;
        }
        ErrorRelativo = abs(x2 - x1);
        i = i + 1;
    }
    cout << "i = " << i << "\nraiz = " << xPromedio << endl;
    cout << "...Hecho :)";
    return 0;
}