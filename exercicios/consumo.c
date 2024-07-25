#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    double x, y, media;
    
    printf("Distancia percorrida: ");
    scanf("%lf", &x);
    printf("\nCombustível gasto: ");
    scanf("%lf", &y);
    
    media = x / y;
    
    printf("\nConsumo médio: %.3lf.", media);

    return 0;
}
