#include <iostream>
using namespace std;

int main()

{
    int n = 10;
    int suma = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("Contador %d \n", i);
        }
        suma += i;
    }
    printf("La suma de %d numeros es %d:", n, suma);

    return 0;
}