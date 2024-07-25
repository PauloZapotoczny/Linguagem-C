#include <stdio.h>

int main ()
{
    int larg, comp, val, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%i", &larg);
    printf("Digite o comprimento do terreno: ");
    scanf("%i", &comp);
    printf("Digite o valor do metro quadrado: ");
    scanf("%i", &val);

    area = larg * comp;
    preco = area * val;

    printf("Area do terreno: %.2i\n", area);
    printf("Valor do terreno: %.2i", preco);

    return 0;
}
