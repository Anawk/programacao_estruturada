#include <stdio.h>

int main() {
    float soma = 0;
    int leitura;
    float numero;

    do {
        printf("Digite um numero: ");
        scanf("%f", &numero);
        leitura = leitura + 1;

        if (numero > 0) {
            soma = soma + numero;
        }

    } while (leitura<10);

    printf("A soma e: %.2f", soma);
}


