#include <stdio.h>
//Crie um programa que leia uma matriz 4x4 de inteiros e calcule
//a soma dos elementos situados na diagonal principal
//(onde o índice da linha é igual ao índice da coluna: i == j).

int main() {

    int matriz[4][4];
    int soma = 0;

    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            printf("Digite um numero:  ");
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            if (i==j) {
                soma = soma + matriz[i][j];
            }
        }
    }

    printf("A soma e: %d", soma);
}