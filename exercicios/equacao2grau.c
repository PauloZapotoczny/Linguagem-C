#include <stdio.h>
#include <math.h>

int main()
{
    double x1, x2, a, b, c;
    
    printf("Coeficiente a:");
    scanf("%lf", &a);
    printf("Coeficiente b:");
    scanf("%lf", &b);
    printf("Coeficiente c:");
    scanf("%lf", &c);
    
    x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    
    printf("X1 = %.4lf", x1);
    printf("\nX2 = %.4lf", x2);
    
    return 0;
}
