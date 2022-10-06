#include <iostream>
using namespace std;

int main()
{
    int n, i;
    char opcion = 's';
    printf("Tabla de multiplicar\n");
    while (opcion == 's')
        {
            // Entrada
            printf("Numero: ");
            scanf("%d", &n);

            // Proceso
            i = 1;
            do{
                printf("%d x %d = %d \n", n, i, n*i);
                i++;
            } while (i<=10);
            
            printf("\nDesea otro <s/n>");
            scanf("%s", &opcion);
        }
        printf("Hecho");
        return 0;
}