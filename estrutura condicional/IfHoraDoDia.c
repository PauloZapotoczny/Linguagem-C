#include <stdio.h>
#include <string.h>

int main ()
{
    int hora;
    printf("Digite uma hora do dia: ");
    scanf("%i", &hora);

    if (hora < 12)
    {
        printf("Bom dia!! \n");
    }
    else if (hora > 12 && hora < 18)
    {
        printf("Boa tarde!! \n");
    }
    else
    {
        printf("Boa noite!! \n");
    }

    return 0;
}
