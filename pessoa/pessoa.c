#include <stdio.h>
#include <string.h>

int main () {
    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    idade = 18;
    salario = 5800.5;
    altura = 1.86;
    genero = 'M';
    strcpy(nome, "Paulo Ricardo Fernandes Zapotoczny");

     printf("IDADE = %d\n", idade);
     printf("SALARIO = %.2lf\n", salario);
     printf("ALTURA = %.2lf\n", altura);
     printf("GENERO = %c\n", genero);
     printf("NOME = %s\n", nome);


    return 0;
}
