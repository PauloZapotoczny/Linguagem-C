#include <stdio.h>
#include <math.h>
#include <string.h>

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    double hr, horas, pagamento;
    char nome[50];
    
    printf("Nome: ");
    ler_texto(nome, 50);
    printf("\nValor por hora: ");
    scanf("%lf", &hr);
    printf("\nHoras trabalhadas: ");
    scanf("%lf", &horas);
    
    pagamento = horas * hr;
    
    printf("\nO pagamento de %s deve ser %.2lf.", nome, pagamento);

    return 0;
}
