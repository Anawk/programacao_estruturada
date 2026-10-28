#include <stdio.h>

int main() {

    int hora_entrada, minuto_entrada, hora_saida, minuto_saida, categoria, mensalista, cupom;
    int permanencia, horas, minutos, hora_cobrada, teto, adicional, primeira_hora;
    int valor;

    permanencia = (hora_saida*60 + minuto_saida) - (hora_entrada*60 + minuto_entrada);
    horas = permanencia / 60;
    minutos = permanencia % 60;
    hora_cobrada = horas;

    if (minutos > 0) {
        hora_cobrada++;
    }

    do {
        printf("\tMENU\n");
        printf("------------------------\n");
        printf("CODIGO \t CATEGORIA\n");
        printf("1 \t Moto\n");
        printf("2 \t Carro\n");
        printf("3 \t SUV/Van\n");
        printf("4 \t Caminhonete\n");
        printf("------------------------\n");
        printf("0 - Sair\n");
        printf("Digite o codigo da categoria do veiculo:\n");
        scanf("%d", &categoria);

        printf("Digite a hora que o veiculo entrou:\n");
        scanf("%d", &hora_entrada);
        printf("Digite o minuto que o veiculo entrou:\n");
        scanf("%d", &minuto_entrada);
        printf("Digite a hora que o veiculo saiu:\n");
        scanf("%d", &hora_saida);
        printf("Digite o minuto que o veiculo saiu:\n");
        scanf("%d", &minuto_saida);

        printf("Cliente e mensalista?\n");
        printf("1 - Sim\n");
        printf("2 - Nao\n");
        scanf("%d", &mensalista);

        printf("Cliente tem cupom?\n");
        printf("1 - Sim\n");
        printf("0 - Nao\n");
        scanf("%d", &cupom);

        switch (categoria) {
            case 1: primeira_hora = 4;
                    adicional = 2;
                    teto = 20;
                    break;
            case 2: primeira_hora = 8;
                    adicional = 4;
                    teto = 40;
                    break;
            case 3: primeira_hora = 12;
                    adicional = 6;
                    teto = 60;
                    break;
            case 4: primeira_hora = 15;
                    adicional = 7.50;
                    teto = 75;
                    break;
            default: printf("Categoria inválida");
                     primeira_hora = 0;
                     adicional = 0;
                     teto = 0;
                     break;
        }

        if (permanencia <= 15) {
            valor = 0;
            hora_cobrada = 0;
        } else {


            if (mensalista = 1) {
                valor = 0;
                hora_cobrada = 0;
            }else {
                valor = primeira_hora + (hora_cobrada - 1) * adicional;
                if (valor > teto) {
                    valor = teto;
                }


                if (cupom == 1) {
                    if (permanencia <= 240) {
                        valor = valor * 0.5;
                    }else {
                        valor = valor - 10;
                    }
                }
            }
        }


     printf("%d, h, %d, min", horas, minutos);
        printf("%d, horas cobradas, R$, %d", hora_cobrada, valor);


    }while (categoria != 0);


}
