#include <stdio.h>
#include <math.h>
//Implemente a função int ehPrimo(int n) que retorne 1 para número primo e 0 para não primo.
//Otimize a verificação testando divisores apenas até sqrt(n) usando <math.h>.

int ehPrimo(int n) {

    for (int i=2; i<=sqrt(n); i++) {
        if (n%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int numero, resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    resultado = ehPrimo(numero);
    if (resultado == 0) {
        printf("O numero nao e primo.");
    }else {
        printf("O numero e primo.");
    }
}