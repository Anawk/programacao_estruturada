#include <stdio.h>
//Crie um procedimento void imprimirCabecalho(char titulo[])
//que receba uma string com o nome da disciplina/aula e imprima uma moldura
//estilizada com caracteres '=' acima e abaixo do título.

void imprimirCabecalho(char titulo[]) {
    printf("======================================\n");
    printf("%s\n", titulo);
    printf("======================================\n");
}

int main() {
    char titulo[30];

    printf("Digite o nome da disciplina/aula: ");
    scanf(" %29[^\n]", &titulo);

    imprimirCabecalho(titulo);

    return 0;
}