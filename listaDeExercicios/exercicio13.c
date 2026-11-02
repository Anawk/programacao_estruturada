#include <stdio.h>
//Crie um programa que leia um vetor de 15 números inteiros (positivos e negativos).
//Substitua todos os valores negativos por 0 e exiba o vetor resultante.

int main() {
    int vetor[15];

    for (int i=0;i<15;i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for (int i=0;i<15;i++) {
        if (vetor[i]<0) {
            vetor[i] = 0;
        }
    }

    for (int i=0;i<15;i++) {
        printf("%d;", vetor[i]);
    }
}