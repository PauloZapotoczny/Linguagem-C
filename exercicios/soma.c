#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int x, y, soma;
    
    printf("Valor do primeiro numero: ");
    scanf("%i", &x);
    printf("\nValor do segundo numero: ");
    scanf("%i", &y);
    
    soma = x + y;
    
    printf("\nSoma = %i", soma);

    return 0;
}
