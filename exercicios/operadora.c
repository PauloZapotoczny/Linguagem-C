#include <stdio.h>

int main()
{
    double glicose;

    printf("Digite a medida da glicose: ");
    scanf("%lf", &glicose);

    if (glicose < 100){
        printf("Classificação: normal");
    } else if (glicose > 100 && glicose < 140) {
        printf("Classificação: elevado");
    } else {
        printf("Classificação: diabetes");
    }

	return 0;
}
