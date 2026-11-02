#include <stdio.h>
//Escreva o procedimento void ordenarVetor(int vet[], int tam)
//que ordene os elementos de um vetor em ordem crescente utilizando o
//algoritmo Bubble Sort (troca direta com variável auxiliar).

void ordenarVetor(int vet[], int tam) {
    for (int i=0; i<tam-1;i++) { //controla as passadas
        for (int j=0;j<tam-1-i;j++) { //faz as comparaçoes
            if (vet[j]>vet[j+1]) { //elemento atual maior que o proximo
                int temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
            }
        }
    }

    for (int i=0;i<tam;i++) {
        printf("%d, ",vet[i]);
    }
}

int main() {
    int vetor[5] = {7,2,0,9,1};

    ordenarVetor(vetor, 5);
}