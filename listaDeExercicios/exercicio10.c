#include <stdio.h>
//Leia uma matriz de inteiros 3x3 fornecida pelo usuário utilizando laços for aninhados
//e exiba-a no console na forma de grade (3 linhas x 3 colunas).

int main() {

    int matriz[3][3];

    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            printf("Digite um numero:  ");
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
}
