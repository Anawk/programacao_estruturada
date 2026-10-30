#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Utilizando srand(time(NULL)) e rand(), preencha um vetor de 20 posições inteiras
//com números aleatórios entre 1 e 60 (simulando a Mega-Sena). Exiba o vetor gerado na tela.

int main () {
    srand(time(NULL));
    int numeros[20];

    for (int i=0; i<20; i++) {
         numeros[i] = rand();
    }

    for (int i=0; i<20; i++) {
        printf("Numero[%d] = %d\n", i, numeros[i]);
    }
}