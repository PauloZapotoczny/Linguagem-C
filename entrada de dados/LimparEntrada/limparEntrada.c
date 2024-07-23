#include <stdio.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main ()
{
    int idade1, idade2;
    char nome1[50], nome2[50];

    printf("Escreva a idade1: ");
    scanf("%i", &idade1);
    limpar_entrada();
    printf("Escreva o nome1: ");
    ler_texto(nome1, 50);

    printf("Escreva a idade2: ");
    scanf("%i", &idade2);
    limpar_entrada();
    printf("Escreva o nome2: ");
    ler_texto(nome2, 50);

    printf("Idade1: %i\n", idade1);
    printf("Nome1: %s\n", nome1);
    printf("Idade2: %i\n", idade2);
    printf("Nome2: %s\n", nome2);

    return 0;
}
