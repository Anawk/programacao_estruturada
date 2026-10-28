#include <stdio.h>
//Escreva 4 funções independentes em C: somar(a, b), subtrair(a, b),
//multiplicar(a, b) e dividir(a, b). A função dividir deve tratar a
//divisão por zero retornando 0.0 e exibindo um alerta. Teste todas na main().

float somar(float a,float b) {
    float soma;
    soma = a + b;
    return soma;
}

float subtrair(float a,float b) {
    float subtracao;
    subtracao = a - b;
    return subtracao;
}

float multiplicar(float a,float b) {
    float multiplicacao;
    multiplicacao = a*b;
    return multiplicacao;
}

float dividir(float a,float b) {
    float divisao;
    if (b == 0) {
        divisao = 0.0;
    }else {
        divisao = a/b;
    }

    return divisao;
}

int main() {

    float numero1, numero2, soma, subtracao, multiplicacao, divisao;

    printf("Digite um numero:");
    scanf("%f", &numero1);
    printf("Digite outro numero:");
    scanf("%f", &numero2);

    soma = somar(numero1, numero2);
    subtracao = subtrair(numero1,numero2);
    multiplicacao = multiplicar(numero1,numero2);
    divisao = dividir(numero1,numero2);

    printf("SOMA: %f\n", soma);
    printf("SUBTRACAO: %f\n", subtracao);
    printf("MULTIPLICACAO: %f\n", multiplicacao);
    printf("DIVISAO: %f\n", divisao);
}

