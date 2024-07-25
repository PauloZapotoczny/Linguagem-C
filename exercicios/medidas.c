#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    double a, b, c, quadrado, triangulo, trapezio;
    
    printf("Digite a medida A: ");
    scanf("%lf", &a);
    printf("Digite a medida B: ");
    scanf("%lf", &b);
    printf("Digite a medida C: ");
    scanf("%lf", &c);
    
    quadrado = pow(a, 2);
    triangulo = a * b / 2;
    trapezio =  (a + b) * c / 2;
    
    printf("\nAREA DO QUADRADO: %.4lf.", quadrado);
    printf("\nAREA DO TRIANGULO: %.4lf.", triangulo);
    printf("\nAREA DO TRAPEZIO: %.4lf.", trapezio);

    return 0;
}
