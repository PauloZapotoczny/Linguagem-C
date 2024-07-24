#include <stdio.h>
#include <string.h>

int main ()
{
    int soma, x;

    soma = 0;
    printf("Digite o primeiro numero: ");
    scanf("%i", &x);

    while (x != 0)
    {
        soma = soma + x;
        printf("Digite outro numero: ");
        scanf("%i", &x);
    }

    printf("SOMA = %i", soma);

    return 0;
}
