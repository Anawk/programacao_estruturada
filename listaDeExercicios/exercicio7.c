#include <stdio.h>
//Declare um vetor de 10 inteiros. Leia os valores fornecidos pelo usuário e,
//em seguida, exiba apenas os elementos armazenados nos índices pares do vetor (0, 2, 4, 6, 8).

int main() {
    int numeros[10];
    int i = 0;
    for (i=0; i<10; i++) {
        printf("Digite um numero:  ");
        scanf("%d", &numeros[i]);
    }

    for (i=0; i<9; i++) {
        if (i%2 == 0) {
            printf("Numero[%d] : %d\n", i, numeros[i]);
        }
    }

}