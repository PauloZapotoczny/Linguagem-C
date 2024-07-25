#include <stdio.h>

int main ()
{
    int x, i, mult;

    printf("Deseja a tabuada para qual valor? \n");
    scanf("%i", &x);

    for (i = 1; i <= 10; i++){
        mult = x * i;
        printf("%i X %i = %i\n", x, i, mult);
    }

    return 0;
}
