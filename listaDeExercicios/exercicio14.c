#include <stdio.h>
//Declare uma matriz 5x5 e preencha-a automaticamente de forma que os elementos da diagonal
//principal sejam iguais a 1 e todos os demais elementos sejam iguais a 0. Exiba a matriz na tela.

int main() {
    int matriz[5][5];

    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            if (i==j) {
                matriz[i][j] = 1;
            }else {
                matriz[i][j] = 0;
            }
        }
    }

    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }
}