#include <stdio.h>
#include <string.h>

int main ()
{
    int x, saldo;
    printf("Digite seu saldo: ");
    scanf("%d", &saldo);
    
    int repetir;
    do {
        printf("\nQual operação deseja realizar?");
        printf("\nPara saque digite 1 ");
        printf("\nPara depósito digite 2 ");
        scanf("%d", &x);
        
        switch (x){
            case 1:
                int y;
                printf("\nQual o valor do saque? ");
                scanf("%d", &y);
                if (y > saldo){
                    printf("Saldo insuficiente.\n");
                } else {
                    saldo = saldo - y;
                    printf("\nValor sacado: %d\n", y);
                    printf("Saldo atual: %d\n", saldo);
                };
            break;
            
            case 2:
                printf("\nQual o valor do depósito? ");
                scanf("%d", &y);
                saldo = y + saldo;
                printf("Saldo atual: %d", saldo);
            break;
            
            default:
                printf("teste");
            break;
        }
        printf("\nDeseja repetir a operação?\n");
        printf("1 caso sim: ");
        scanf("%d", &repetir);
    } while (repetir == 1);
    
    printf("\nSeu saldo terminou em: %d", saldo);
    return 0;
}
