#include <stdio.h>

int main()
{
    int i, N;
    double soma, media, cont;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%i", &N);
    double vet[N];

    for (i = 1; i <= N; i++){
        printf("\nDigite um numero: ");
        scanf("%lf", &vet[i]);
        //media
        cont = cont + 1;
        //soma
        soma = soma + vet[i];
    }

    printf("\nVALORES: ");
    for (i = 1; i <= N; i++){
        printf("%.2lf ", vet[i]);
    }

    media = soma / cont;
    printf("\nSOMA: %.2lf", soma);
    printf("\nMEDIA: %.2lf", media);

    return 0;
}
