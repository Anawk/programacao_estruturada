#include <stdio.h>

int main() {
    int senha;
    int tentativa = 0;

    while (tentativa <3) {
        printf("Digite uma senha:");
        scanf("%d", &senha);

        if (senha == 1234) {
            printf("Acesso Concedido");
              break;
        } else{
            printf("Senha Invalida\n");
            tentativa = tentativa + 1;
        }

        if (tentativa == 3) {
            printf("Bloqueado");
        }
    }

    return 0;
}

