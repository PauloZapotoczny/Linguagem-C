#include <stdio.h>

int main ()
{
    int N, M, i, j;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%i", &N);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%i", &M);

    int mat[N][M];
    int vet[N];

    for (i = 0; i < N; i++){
        printf("Digite os conteudos da %ia linha: \n", i + 1);
        for (j = 0; j < M; j++){
            scanf("%i", &mat[i][j]);
        }
    }

    printf("\nVETOR GERADO: \n");
    for (i = 0; i < N; i++){
        vet[i] = 0;
        for (j = 0; j < M; j++){
            vet[i] = vet[i] + mat[i][j];
        }
        printf("\n %i", vet[i]);
    }

    return 0;
}
