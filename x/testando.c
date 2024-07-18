#include <stdio.h>
#include <string.h>

int main ()
{
    char nome[50];
    char sexo;
    double salario;
    int idade;

    idade = 32;
    salario = 4560.9;
    strcpy(nome, "Maria Silva");
    sexo = 'F';

    printf("Ola, meu nome e %s, sexo %c, tenho %i anos e ganho %.2lf.", nome, sexo, idade, salario);

    return 0;
}
