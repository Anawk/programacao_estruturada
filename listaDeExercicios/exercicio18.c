#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Preencha um vetor de 30 posições com números aleatórios entre 1 e 100 (rand()).
//Solicite um número X ao usuário e faça uma busca linear: informe se X está presente,
//quantas vezes aparece e em quais índices.

int main() {
    srand(time(NULL));
    int vetor[30];
    int n;
    int vezes = 0;
    int indices[30];

    for (int i=0;i<30;i++) {
        vetor[i] = (rand()%100) + 1;
    }

    for (int i=0;i<30;i++) {
       printf("%d,", vetor[i]);
    }

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &n);

    for (int i=0;i<30;i++) {
        if (n == vetor[i]) {
            indices[vezes] = i;
            vezes++;
        }
    }

    if (vezes>0) {
        printf("O numero %d esta presente.\n", n);
        printf("Ele aparece %d vezes.\n", vezes);
        printf("Nos indices: ");
        for (int i=0;i<vezes;i++) {
            printf("%d, ", indices[i]);
        }
    }else {
        printf("O numero %d nao esta presente.", n);
    }
}