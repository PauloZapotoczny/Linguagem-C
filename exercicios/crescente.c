#include <stdio.h>

int main ()
{

    int x, y;

    while (x != y) {
        printf("Digite dois numeros: \n");
        scanf("%i", &x);
        scanf("%i", &y);

        if (x > y) {
            printf("\nCRESCENTE!\n");
        } else if (x < y){
            printf("\nDECRESCENTE!\n");
        } else {
        }
    }

    return 0;
}
