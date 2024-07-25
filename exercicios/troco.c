#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    double x, quant, troco, receb;
    
    printf("Preço unitário do produto: ");
    scanf("%lf", &x);
    printf("\nQuantidade comprada: ");
    scanf("%lf", &quant);
    printf("\nDinheiro recebido: ");
    scanf("%lf", &receb);
    
    troco = receb - (x * quant); 
    
    printf("\nTROCO = %.2lf", troco);

    return 0;
}
