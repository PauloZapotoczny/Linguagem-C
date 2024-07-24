#include <stdio.h>

int main ()
{
    int i, j, M, N;

    printf("Quantas linhas a matriz tera? ");
    scanf("%i", &N);
    printf("Quantas colunas a matriz tera? ");
    scanf("%i", &M);

    int mat[N][M];

    for (i = 0; i < N; i++)
    { for (j = 0; j < M; j++)
        {
            printf("Elemento [%i][%i]", i, j);
            scanf("%i", &mat[i][j]);
        }
    }

    printf("MATRIZ INSERIDA: \n");

    for (i = 0; i < N; i++)
    { for (j = 0; j < M; j++)
        {
            printf("%i ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
