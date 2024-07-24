#include <stdio.h>

int main ()
{
    int soma, x, i, N;

    printf("Quantos numeros serao digitados? ");
    scanf("%i", &N);

    soma = 0;
    for ( i = 1; i <= N; i++)
    {
        printf("Escreva um numero: ");
        scanf("%i", &x);
        soma = soma + x;
    }

    printf("Soma = %i", soma);


    return 0;
}
