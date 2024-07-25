#include <stdio.h>

int main ()
{
    int menor, a, b, c;

    printf("Primeiro valor: ");
    scanf("%i", &a);
    printf("\nSegundo valor: ");
    scanf("%i", &b);
    printf("\nTerceiro valor: ");
    scanf("%i", &c);

    if (a < b && a < c){
        menor = a;
    } else if (b < c) {
        menor = b;
    } else {
        menor = c;
    }

    printf("\nMENOR VALOR: %i", menor);


    return 0;
}
