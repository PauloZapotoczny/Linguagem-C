#include <stdio.h>
#include <math.h>

int main ()
{
    double base, altura, area, perimetro, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = base + altura;
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    printf("Area do retangulo: %.3lf\n", area);
    printf("Perimetro do retangulo: %.3lf\n", perimetro);
    printf("Diagonal do retangulo: %.3lf\n", diagonal);

    return 0;
}
