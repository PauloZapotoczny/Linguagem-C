#include <stdio.h>

int main ()
{
    int N, i, j;

    printf("Qual a ordem da matriz? ");
    scanf("%i", &N);

    int mat[N][N];

    int negativos = 0;
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("Elemento [%i,%i]: ", i, j);
            scanf("%i", &mat[i][j]);
            if (mat[i][j] < 0){
                negativos++;
            }
        }
    }

    printf("\nDIAGONAL PRINCIPAL: \n");
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (j == i){
                printf("%i ", mat[i][j]);
            }
        }
    }

    printf("\nQUANTIDADE DE NEGATIVOS: %i", negativos);

    return 0;
}
