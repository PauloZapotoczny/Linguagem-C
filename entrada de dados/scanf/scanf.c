#include <stdio.h>

int main ()
{
    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    printf("Digite a idade: ");
    scanf("%i", &idade);
    printf("Digite o salario: ");
    scanf("%lf", &salario);
    printf("Digite a altura: ");
    scanf("%lf", &altura);

    printf("IDADE = %i\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);

    return 0;
}
