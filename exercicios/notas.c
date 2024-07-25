#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, soma;
    
    printf("Digite a primeira nota: ");
    scanf("%lf", &x);
    printf("\nDigite a segunda nota: ");
    scanf("%lf", &y);
    
    soma = x + y;
    
    printf("NOTA FINAL: %.2lf", soma);
    
    if (soma < 60){
        printf("\nREPROVADO");
    } else {
        printf("\nAPROVADO");
    }
    

    return 0;
}
