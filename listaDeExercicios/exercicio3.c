#include <stdio.h>
//Crie um programa em C usando do-while que percorra os números inteiros de 1 a 50 e imprima
//apenas os números que NÃO sejam múltiplos de 7, utilizando o comando continue para saltar os múltiplos.

int main() {

    int i = 1;

    do {
        if (i%7 != 0) {
            printf("%d, ", i);
        }

        i++;
    }while (i<=50);
}