#include <stdio.h>
//Escreva uma função double calcularMediaVetor(float vet[], int tam)
//que receba um vetor de reais e seu tamanho, retornando a média aritmética dos elementos.

double calcularMediaVetor(float vet[], int tam) {
    float media;

    for (int i=0;i<tam;i++) {
        media = media + vet[i];
    }

    media = media/tam;
    return media;
}

int main() {
    float vetor[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int tamanho = 12;
    float media;

    media = calcularMediaVetor(vetor, tamanho);
    printf("A media e: %.2f", media);
}