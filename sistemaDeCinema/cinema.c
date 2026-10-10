#include <stdio.h>

int main() {
    int nSessoes, tipoSala, meias, inteiras, arrecadoumais, arrecadoumenos, sessaoanterior;
    float bonus, totalarrecadado, total, totalaux, mediadearrecadacao, porcentagemMeias;
    int qtdLotou = 0;
    float totaldeingressos = 0;
    float totaldemeias = 0;

    do {
        printf("Quantas sessoes ocorreram hoje?\n");
        scanf("%d", &nSessoes);

        if (nSessoes < 1 || nSessoes > 8) {
            printf("Valor invalido. Podem acontecer no minimo 1 sessao e no maximo 8.\n");
        }

    }while (nSessoes < 1 || nSessoes > 8);

    int i = 0;
    for (i=1;i<=nSessoes;i++) {
        printf("--------------------------\n");
        printf("Qual o codigo do tipo de sala?\n");
        printf("CODIGO\tSALA\n");
        printf("1\tComum\n");
        printf("2\t3D\n");
        printf("3\tVIP\n");
        printf("--------------------------\n");
        scanf("%d", &tipoSala);

        int sessaovalida = 0;
        int lotou = 0;

        while (sessaovalida==0) {
            printf("Quantas meias foram vendidas?\n");
            scanf("%d", &meias);

            printf("Quantas inteiras foram vendidas?\n");
            scanf("%d", &inteiras);

            switch (tipoSala) {
                case 1: if ((meias + inteiras) > 80) {
                    printf("Valor passou da capacidade da sala. Digite novamente\n");
                }else if ((meias + inteiras) == 80){
                    printf("Sessao lotada!\n");
                    bonus = 1.005;
                    sessaovalida = 1;
                    lotou = 1;
                }else {
                    sessaovalida = 1;
                    bonus = 1;
                }
                    break;
                case 2:if ((meias + inteiras) > 50) {
                    printf("Valor passou da capacidade da sala. Digite novamente\n");
                }else if ((meias + inteiras) == 50){
                    printf("Sessao lotada!\n");
                    bonus = 1.005;
                    sessaovalida = 1;
                    lotou = 1;
                }else {
                    sessaovalida = 1;
                    bonus = 1;
                }
                    break;
                case 3:if ((meias + inteiras) > 30) {
                    printf("Valor passou da capacidade da sala. Digite novamente\n");
                }else if ((meias + inteiras) == 30){
                    printf("Sessao lotada!\n");
                    bonus = 1.005;
                    sessaovalida = 1;
                    lotou = 1;
                }else {
                    sessaovalida = 1;
                    bonus = 1;
                }
                    break;
                default:"Tipo de sala digitado e inválido\n";
                    bonus = 0;
            }

            totalarrecadado = ((meias*10) + (inteiras*20)) * bonus;
            printf("Total arrecadado nessa sala: %.2f\n", totalarrecadado);

            if (i==1) {
                totalaux = totalarrecadado;
                arrecadoumais = i;
                arrecadoumenos = 0;
                sessaoanterior = i;
            }

            if (i!=1) {
                if (totalaux > totalarrecadado) {
                    arrecadoumais = sessaoanterior;
                    arrecadoumenos = i;
                }else {
                    arrecadoumais = i;
                    arrecadoumenos = sessaoanterior;
                }
            }

            total = total + totalarrecadado;
            totaldemeias = totaldemeias + meias;
            totaldeingressos = totaldeingressos + (meias + inteiras);
        }

        if (lotou == 1) {
            qtdLotou = qtdLotou + 1;
        }
    }

    mediadearrecadacao = total/nSessoes;
    porcentagemMeias = (totaldemeias/totaldeingressos)*100;

    printf("--------------------------------------------------------\n");
    printf("\t\t\tRELATORIO\n");
    printf("--------------------------------------------------------\n");
    printf("Total Arrecadado: %.2f\n", total);
    printf("Sessao que mais arrecadou: Sessao %d\n", arrecadoumais);
    printf("Sessao que menos arrecadou: Sessao %d\n", arrecadoumenos);
    printf("Lotaram %d Sessoes\n", qtdLotou);
    printf("A media de arrecadacao por sessao foi de R$%.2f\n", mediadearrecadacao);
    printf("Foram vendidas aproximadamente %.2f%% de meias entradas\n", porcentagemMeias);
    printf("--------------------------------------------------------\n");
}


