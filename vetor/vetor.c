#include <stdio.h>
#include <string.h>

int main ()
{

    int i, N;

    printf("Escreva quantos numeros serao digitados: ");
    scanf("%i", &N);

    double vet[N];

    for (i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nNUMEROS DIGITADOS: \n");
    for (i = 0; i < N; i++)
    {
        printf("%.2lf \n", vet[i]);
    }

    return 0;
}
