#include <stdio.h>

int main()
{
    double glicose;

    printf("Digite a medida da glicose: ");
    scanf("%lf", &glicose);

    if (glicose < 100){
        printf("Classifica��o: normal");
    } else if (glicose > 100 && glicose < 140) {
        printf("Classifica��o: elevado");
    } else {
        printf("Classifica��o: diabetes");
    }

	return 0;
}
