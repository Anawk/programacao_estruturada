
#include <stdio.h>
int main() {
    int vetorA[10];
    int vetorB[10];

    for (int i=0; i<10; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &vetorA[i]);
    }

    for (int j=0; j<10; j++) {
        vetorB[j] = vetorA[j] * -1;
    }

    for (int i=0; i<10; i++) {
        printf("vetorA[%d] = %d\n",i, vetorA[i]);
    }

    for (int i=0; i<10; i++) {
        printf("vetorB[%d] = %d\n",i, vetorB[i]);
    }
}