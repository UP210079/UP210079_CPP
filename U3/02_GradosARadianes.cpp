#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

int main( )
{
        float grados,rad;
 
        printf("Introduce los grados");
        scanf("%f",&grados);
        rad=grados*2*PI/360;
        printf("%f grados son: %f radianes",grados,rad);
 
    system("pause");
    return 0;
}