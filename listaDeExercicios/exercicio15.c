#include <stdio.h>
//Escreva a função int calcularFatorial(int n) que retorne o fatorial de N (N!).
//Trate casos especiais: N < 0 (retornar -1 para erro) e N = 0 (retornar 1).

int calcularFatorial(int n) {
    int fatorial = 1;

    if (n<0) {
        fatorial = -1;
        return fatorial;
    }

    for (int i=0;i<n;i++) {
        fatorial = fatorial*(n-i);
    }

    return fatorial;
}

int main() {
    int numero, fatorial;

    printf("Digite um numero:  ");
    scanf("%d", &numero);

    fatorial = calcularFatorial(numero);

    printf("%d! = %d", numero, fatorial);
}