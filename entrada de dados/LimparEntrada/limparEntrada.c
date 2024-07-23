#include <stdio.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main ()
{
    int idade;
    char nome[50];

    printf("Escreva a idade: ");
    scanf("%i", &idade);
    limpar_entrada();
    printf("Escreva o nome: ");
    fgets(nome, 50, stdin);

    printf("Idade: %i\n", idade);
    printf("Nome: %s\n", nome);

    return 0;
}
