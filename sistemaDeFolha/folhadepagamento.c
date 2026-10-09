#include <stdio.h>

int main() {
    char funcionario[50];
    int codigo, anos, bonus, imposto, cargo;
    float salario_atual, salario_novo, salario_liquido;

    int i = 0;
    for (i=1; i>0 && i<10;i++) {
        printf("Digite o nome do funcionario: ");
        scanf("%s", &funcionario);

        printf("---------------------\n");
        printf("Codigo\tCargo\n");
        printf("1\tEscriturario\n");
        printf("2\tSecretario\n");
        printf("3\tCaixa\n");
        printf("4\tGerente\n");
        printf("5\tDiretor\n");
        printf("Digite 0 para sair do menu.\n");
        printf("---------------------\n");
        scanf("%d", &codigo);

        if (codigo == 0) {
            break;;
        }

        printf("Qual o salario atual?");
        scanf("%f", &salario_atual);

        printf("Tem quantos anos de servico?");
        scanf("%d", &anos);

        switch (codigo) {
            case 1: salario_novo = salario_atual * 1.50;
                    cargo = 1;
                    break;
            case 2: salario_novo = salario_atual * 1.35;
                    cargo = 2;
                    break;
            case 3: salario_novo = salario_atual * 1.20;
                    cargo = 3;
                    break;
            case 4: salario_novo = salario_atual * 1.10;
                    cargo = 4;
                    break;
            case 5: salario_novo = salario_atual;
                    cargo = 5;
                    break;
            default: printf("Codigo inexistente");
                     break;
        }

        if (anos <= 3) {
            bonus = 50;
        } else if (anos >= 4 && anos <= 6) {
            bonus = 100;
        }else {
            bonus = 150;
        }

        if (salario_novo <1000) {
            imposto = 0;
        }else if (salario_novo >= 1000 && salario_novo <= 3000) {
            imposto = 0.10;
        }else {
            imposto = 0.20;
        }

        salario_liquido = salario_novo - (salario_novo*imposto) + bonus;

        printf("Nome do Funcionario: %s\n", funcionario);
        printf("Cargo: %d\n", cargo);
        printf("Salario Antigo: %f\n", salario_atual);
        printf("Novo Salario: %f\n", salario_novo);
        printf("Bonus: %d\n", bonus);
        printf("Imposto: %d\n", imposto);
        printf("Salario Liquido: %f\n", salario_liquido);
    }
}
