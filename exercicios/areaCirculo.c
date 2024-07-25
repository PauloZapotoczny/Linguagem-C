#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    double x, area;
    
    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &x);
    
    area = 3.1416 * pow(x, 2); 
    
    printf("\nAREA = %.3lf", area);

    return 0;
}
