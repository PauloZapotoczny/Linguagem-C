#include <stdio.h>

int main ()
{
    int N, M, i, j;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%i", &N);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%i", &M);

    int mat[N][M];

    for (i = 0; i < N; i++){
        printf("Digite os conteudos da %ia linha: \n", i + 1);
        for (j = 0; j < M; j++){
            scanf("%i", &mat[i][j]);
        }
    }

    printf("\nVETOR GERADO: \n");
    for (i = 0; i < N; i++){
        int soma = 0;
        for (j = 0; j < M; j++){
            soma = soma + mat[i][j];
        }
        printf("\n %i", soma);
    }

    return 0;
}
