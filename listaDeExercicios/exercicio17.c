#include <stdio.h>
//Crie uma função void gerarFibonacci(int vet[], int n)
//que preencha um vetor de tamanho N (N <= 30) com os primeiros N
//termos da sequência de Fibonacci (0, 1, 1, 2, 3, 5, 8...).

void gerarFibonacci(int vet[], int n) {
    vet[0] = 0;
    vet[1] = 1;
    for (int i=2;i<n;i++) {
        vet[i] = vet[i-1] + vet[i-2];
    }

    for (int i=0;i<n;i++) {
        printf("%d, ",vet[i]);
    }
}

int main() {
    int vetor[30];
    int n = 20;

    gerarFibonacci(vetor,n);

    return 0;
}