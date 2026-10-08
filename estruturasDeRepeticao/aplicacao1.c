#include <stdio.h>

int main(void) {

    float saldo_inicial, saque, saldo, deposito, cheque;
    int operacao;

    printf("Digite o valor do seu saldo inicial: ");
    scanf("%f", &saldo_inicial);

    saldo = saldo_inicial;

    do {
        printf("Escolha uma operacao do menu\n");
        printf("\tMENU\n");
        printf("-------------------\n");
        printf("10 - Saque\n");
        printf("33 - Deposito\n");
        printf("4 - Cheque\n");
        printf("0 - Sair\n");
        printf("-------------------\n");
        scanf("%d", &operacao);

        switch (operacao) {
            case 10: printf("Digite o valor que voce deseja sacar: ");
                     scanf("%f", &saque);
                     if (saque < saldo) {
                         saldo = saldo - saque;
                         printf("Saldo foi sacado com sucesso. Seu novo saldo e: %.2f \n", saldo);
                     }else {
                         printf("Voce nao possui saldo suficiente para sacar esse valor.\n");
                     }
                     break;
            case 33: printf("Digite o valor que voce deseja depositar: ");
                     scanf("%f", &deposito);
                         saldo = saldo + deposito;
                         printf("Seu deposito foi registrado com sucesso. Seu novo saldo e: %.2f \n", saldo);
                     break;
            case 4: printf("Digite o valor do seu cheque: ");
                    scanf("%f", &cheque);
                    if (cheque < saldo) {
                        saldo = saldo - cheque;
                        printf("O valor do cheque foi sacado com sucesso. Seu novo saldo e: %.2f \n", saldo);
                    }else {
                        printf("Voce nao possui saldo suficiente para retirar esse valor.\n");
                    }
                    break;
            case 0: printf("Seu saldo acumulado e: %.2f", saldo);
                    break;
            default: printf("Valor invalido\n");
        }

    }while (operacao =! 0);

    return 0;
}

