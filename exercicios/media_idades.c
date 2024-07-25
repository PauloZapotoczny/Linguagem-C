#include <stdio.h>

int main ()
{
    double soma, x, media, cont;

    cont = 0;
    printf("Digite as idades: \n");
    scanf("%lf", &x);

    if (x > 0){
        while (x > 0){
            soma = soma + x;
            cont = cont + 1;
            scanf("%lf", &x);
        }
        media = soma / cont;
        printf("MEDIA DAS IDADES: %.2lf", media);
    } else {
        printf("IMPOSSIVEL CALCULAR");
    }

    return 0;
}
