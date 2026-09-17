#include <stdio.h>

int main(void) {
    float salario, retirada1, retirada2, saldo, taxa, retirada;

    printf("Digite o valor do seu salario: ");
    scanf("%f", &salario);

    saldo = salario;

    printf("Digite o valor do primeiro cheque: ");
    scanf("%f", &retirada1);

    taxa = retirada1 * 0.38/100;
    retirada = retirada1 + taxa;

    if (retirada <= saldo) {
        saldo = saldo - retirada1 - taxa;
        printf("Digite o valor do segundo cheque: ");
        scanf("%f", &retirada2);
        taxa = retirada2 * 0.38/100;
        retirada = retirada2 + taxa;
        if (retirada2 <= saldo) {
            saldo -= retirada;
        } else {
            printf("Nao foi possivel fazer a segunda retirada devido a saldo insuficiente. ");
        }
    }else {
        printf("Nao foi possivel retirar o saldo, pois a retirada e maior do que o saldo atual. ");
    }
    printf("Saldo final: %.2f", saldo);
    return 0;
}