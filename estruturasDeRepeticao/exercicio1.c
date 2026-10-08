#include <stdio.h>

int main(void) {
    int opcao;

    do {
        printf("\nDigite a opcao \n");
        printf("1- Inserir\n");
        printf("2- Listar\n");
        printf("0- Sair\n");
        printf("->");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1: printf("Inserir");
                break;
            case 2: printf("Listar");
                break;
            case 0: printf("Saindo...");
                break;
            default: printf("Valor invalido");
        }
    } while (opcao != 0);
    return 0;
}