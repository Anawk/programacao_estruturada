#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 30
#define MESES 12

int main() {
    int codigo[MAX];
    int tipo[MAX];
    float preco[MAX];
    int visitantes[MAX][MESES];
    int qtd = 10;
    int opcao, numeroconsulta, opcaomodificar;
    int numerorepetido = 0;
    int somavisitantes = 0;
    float somarrecadacao = 0.0;
    int dadosvalidos = 0;
    int codigoaux;
    int tipoaux;
    float precoaux;
    int escolha;
    int pos = -1;
    int perc;
    float novo;
    int mes, visitantesaux;

    srand(time(NULL));

    //vetor codigo
    for (int i=0;i<qtd;i++) {
        codigo[i] = 100 + rand() % 900;
    }

    for (int i=0;i<qtd;i++) {
        printf("%d\t", codigo[i]);
    }

    printf("\n=====================\n");

    //vetor tipo
    for(int i=0;i<qtd;i++){
       tipo[i] = 1 + rand() % 4;
    }

    for(int i=0;i<qtd;i++){
       printf("%d\t", tipo[i]);
    }

    printf("\n=====================\n");

    //vetor preco
    for (int i=0;i<qtd;i++) {
        preco[i] = 10 + (rand() % 7001) / 100.0;
    }

    for(int i=0;i<qtd;i++){
        printf("%.2f\t", preco[i]);
    }

    printf("\n=====================\n");

    //matriz visitantes
    for (int i=0;i<qtd;i++) {
        for (int j=0;j<MESES;j++) {
            visitantes[i][j] = rand();
        }
    }

    for (int i=0;i<qtd;i++) {
        for (int j=0;j<MESES;j++) {
            printf("[%d]", visitantes[i][j]);
        }
        printf("\n");
    }

    do {
        printf("\n===== PARQUE DE DIVERSOES - CONTROLE DE VISITANTES =====\n");
        printf("1 - Incluir atracao\n");
        printf("2 - Excluir atracao\n");
        printf("3 - Consultar atracao\n");
        printf("4 - Modificar dados\n");
        printf("0 - Sair\n");

        scanf("%d", &opcao);

        switch (opcao) {
           case 1: if (qtd == MAX) {
                      printf("Quantidade de registros ja atingiu o maximo de %d.", MAX);
                      break;
                   }

                   do {
                       int repetido = 0;
                       printf("Digite o codigo da atracao: ");
                       scanf("%d", &codigoaux);

                       if (codigoaux < 100 || codigoaux > 999) {
                           printf("O codigo precisa estar entre 100 e 999!\n");
                           continue;
                       }

                       for (int i=0; i<qtd;i++) {
                           if (codigo[i] == codigoaux) {
                               printf("Esse codigo ja existe, digite novamente!\n");
                               repetido = 1;
                               break;
                           }
                       }

                       if (repetido == 1) {
                           continue;
                       }

                       dadosvalidos = 1;
                   }while (dadosvalidos == 0);

                do {
                    dadosvalidos = 0;
                    printf("TIPOS DE ATRACOES\n");
                    printf("1 - Radical\n");
                    printf("2 - Infantil\n");
                    printf("3 - Aquatica\n");
                    printf("4 - Familia\n");
                    printf("Digite o tipo da atracao: \n");
                    scanf("%d", &tipoaux);

                    if (tipoaux < 1 || tipoaux > 4) {
                        printf("Tipo da atracao invalido!\n");
                        continue;
                    }

                    dadosvalidos = 1;
                }while (dadosvalidos == 0);

                do {
                    dadosvalidos = 0;
                    printf("Digite o valor da atracao: ");
                    scanf("%f", &precoaux);

                    if (precoaux <= 0) {
                        printf("Preco invalido!\n");
                        continue;
                    }

                    dadosvalidos = 1;
                }while (dadosvalidos == 0);

                codigo[qtd] = codigoaux;
                for (int i=0;i<MESES;i++) {
                    visitantes[qtd][i] = 0;
                }
                tipo[qtd] = tipoaux;
                preco[qtd] = precoaux;
                qtd++;

                break;
           case 2: printf("Digite o codigo da atracao que voce deseja excluir:  ");
                   scanf("%d", &codigoaux);

                   printf("\nVoce deseja excluir a atracao %d?\n", codigoaux);
                   printf("Digite 1-Sim ou 0-Nao\n");
                   scanf("%d", &escolha);

                   if (escolha == 0) {
                       break;
                   }

                   pos = -1;

                   for (int i = 0;i<qtd;i++) {
                       if (codigo[i] == codigoaux) {
                           pos = i;
                           break;
                       }
                   }

                   for (int i=pos; i<qtd-1;i++) {
                       codigo[i] = codigo[i+1];
                       tipo[i] = tipo[i+1];
                       preco[i] = preco[i+1];
                       for (int j=0;j<MESES;j++) {
                           visitantes[i][j] = visitantes[i+1][j];
                       }
                   }

                   qtd--;
                
            break;


           case 3: printf("Digite o codigo da atracao que voce deseja consultar:  ");
                   scanf("%d", &numeroconsulta);

                   pos = -1;

                   for(int i=0;i<qtd;i++){
                      if(codigo[i] == numeroconsulta){
                        pos = i;
                          break;
                      }
                   }

                   if(pos>=0){
                       somavisitantes = 0;
                       somarrecadacao = 0.0;                      
                       printf("Codigo: %d\n", numeroconsulta);
                       printf("Tipo: %d\n", tipo[pos]);
                       printf("Valor da atracao: %.2f\n", preco[pos]);
                        for(int j=0; j<MESES;j++){
                           switch (j){
                           case 0: printf("JAN = %d\t", visitantes[pos][j]);
                                   somavisitantes = somavisitantes + visitantes[pos][j];
                                   somarrecadacao = somarrecadacao + (visitantes[pos][j] * preco[pos]);
                                   break;
                           case 1: printf("FEV = %d\t", visitantes[pos][j]);
                                   somavisitantes = somavisitantes + visitantes[pos][j];
                                   somarrecadacao = somarrecadacao + (visitantes[pos][j] * preco[pos]);
                                   break;
                           case 2: printf("MAR = %d\t", visitantes[pos][j]);
                                   somavisitantes = somavisitantes + visitantes[pos][j];
                                   somarrecadacao = somarrecadacao + (visitantes[pos][j] * preco[pos]);
                                   break;
                           case 3: printf("ABR = %d\t", visitantes[pos][j]);
                                   somavisitantes = somavisitantes + visitantes[pos][j];
                                   somarrecadacao = somarrecadacao + (visitantes[pos][j] * preco[pos]);
                                   break;
                           case 4: printf("MAI = %d\t", visitantes[pos][j]);
                                   somavisitantes = somavisitantes + visitantes[pos][j];
                                   somarrecadacao = somarrecadacao + (visitantes[pos][j] * preco[pos]);
                                   break;
                               case 5: printf("JUN = %d\t", visitantes[pos][j]);
                                   somavisitantes = somavisitantes + visitantes[pos][j];
                                   somarrecadacao = somarrecadacao + (visitantes[pos][j] * preco[pos]);
                                   break;
                               case 6: printf("JUL = %d\t", visitantes[pos][j]);
                                   somavisitantes = somavisitantes + visitantes[pos][j];
                                   somarrecadacao = somarrecadacao + (visitantes[pos][j] * preco[pos]);
                                   break;
                               case 7: printf("AGT = %d\t", visitantes[pos][j]);
                                   somavisitantes = somavisitantes + visitantes[pos][j];
                                   somarrecadacao = somarrecadacao + (visitantes[pos][j] * preco[pos]);
                                   break;
                               case 8: printf("SET = %d\t", visitantes[pos][j]);
                                   somavisitantes = somavisitantes + visitantes[pos][j];
                                   somarrecadacao = somarrecadacao + (visitantes[pos][j] * preco[pos]);
                                   break;
                               case 9: printf("OUT = %d\t", visitantes[pos][j]);
                                   somavisitantes = somavisitantes + visitantes[pos][j];
                                   somarrecadacao = somarrecadacao + (visitantes[pos][j] * preco[pos]);
                                   break;
                               case 10: printf("NOV = %d\t", visitantes[pos][j]);
                                   somavisitantes = somavisitantes + visitantes[pos][j];
                                   somarrecadacao = somarrecadacao + (visitantes[pos][j] * preco[pos]);
                                   break;
                               case 11: printf("DEZ = %d\t", visitantes[pos][j]);
                                   somavisitantes = somavisitantes + visitantes[pos][j];
                                   somarrecadacao = somarrecadacao + (visitantes[pos][j] * preco[pos]);
                                   break;
                           default: break;
                           }
                        }
                       printf("\nTotal de visitantes: %d\n", somavisitantes);
                       printf("Total de arrecadacao: %.2f\n", somarrecadacao);
                   }else {
                       printf("Essa atracao nao existe!\n");
                   }

                   break;
           case 4: printf("Digite o codigo da atracao que voce deseja modificar:  ");
                   scanf("%d", &codigoaux);

                   pos = -1;

                   for(int i=0;i<qtd;i++){
                      if(codigo[i] == codigoaux){
                        pos = i;
                          break;
                      }
                   }

                   if (pos>= 0) {
                       opcaomodificar = -1;
                       do {
                           printf("===== MENU =====\n");
                           printf("1 - Alterar tipo\n");
                           printf("2 - Alterar preco do ingresso\n");
                           printf("3 - Aplicar reajuste percentual ao preco\n");
                           printf("4 - Registrar os visitantes de um mes\n");
                           printf("5 - Lancar os visitantes dos 12 meses\n");
                           printf("0 - Voltar\n");
                           scanf("%d", &opcaomodificar);

                           switch (opcaomodificar) {
                               case 1:  do {
                                        dadosvalidos = 0;
                                        printf("TIPOS DE ATRACOES\n");
                                        printf("1 - Radical\n");
                                        printf("2 - Infantil\n");
                                        printf("3 - Aquatica\n");
                                        printf("4 - Familia\n");
                                        printf("Digite o tipo da atracao: \n");
                                        scanf("%d", &tipoaux);

                                        if (tipoaux < 1 || tipoaux > 4) {
                                            printf("Tipo da atracao invalido!\n");
                                            continue;
                                        }

                                        dadosvalidos = 1;
                                       }while (dadosvalidos == 0);

                                      tipo[pos] = tipoaux;
                                   break;
                               case 2: do {
                                            dadosvalidos = 0;
                                            printf("Digite o valor da atracao: ");
                                            scanf("%f", &precoaux);

                                            if (precoaux <= 0) {
                                                printf("Preco invalido!\n");
                                                continue;
                                            }

                                            dadosvalidos = 1;
                                        }while (dadosvalidos == 0);

                                        preco[pos] = precoaux;
                                   break;
                               case 3: printf("Qual a percentual do reajuste?\n");
                                       scanf("%d", &perc);

                                       novo = preco[pos] * (1 + perc/100.00);

                                       if (novo > 0) {
                                           preco[pos] = novo;
                                           printf("O novo valor e %.2f\n", preco[pos]);
                                       }
                                   break;
                               case 4: printf("==== MESES ====\n");
                                       printf("0 - Janeiro\n");
                                       printf("1 - Fevereiro\n");
                                       printf("2 - Marco\n");
                                       printf("3 - Abril\n");
                                       printf("4 - Maio\n");
                                       printf("5 - Junho\n");
                                       printf("6 - Julho\n");
                                       printf("7 - Agosto\n");
                                       printf("8 - Setembro\n");
                                       printf("9 - Outubro\n");
                                       printf("10 - Novembro\n");
                                       printf("11 - Dezembro\n");
                                       printf("Qual mes voce deseja registrar? \n");
                                       scanf("%d", &mes);

                                       if (mes < 0 || mes > 11) {
                                           printf("Valor invalido!\n");
                                           break;
                                       }

                                       printf("Quantos visitantes tiveram no mes?  \n");
                                       scanf("%d", &visitantesaux);

                                       if (visitantesaux <= 0) {
                                           printf("Numero precisa ser diferente de zero!\n");
                                           break;
                                       }

                                       visitantes[pos][mes] = visitantesaux;
                                   break;
                               case 5: for (int j=0;j<MESES;j++) {
                                               printf("MES [%d]\n", j);
                                               printf("Quantos visitantes:  \n");
                                               scanf("%d",&visitantesaux);

                                               visitantes[pos][j] = visitantesaux;
                                       }


                                       for(int j=0; j<MESES;j++) {
                                               switch (j){
                                                   case 0: printf("JAN = %d\t", visitantes[pos][j]);
                                                       break;
                                                   case 1: printf("FEV = %d\t", visitantes[pos][j]);
                                                       break;
                                                   case 2: printf("MAR = %d\t", visitantes[pos][j]);
                                                       break;
                                                   case 3: printf("ABR = %d\t", visitantes[pos][j]);
                                                       break;
                                                   case 4: printf("MAI = %d\t", visitantes[pos][j]);
                                                       break;
                                                   case 5: printf("JUN = %d\t", visitantes[pos][j]);
                                                       break;
                                                   case 6: printf("JUL = %d\t", visitantes[pos][j]);
                                                       break;
                                                   case 7: printf("AGT = %d\t", visitantes[pos][j]);
                                                       break;
                                                   case 8: printf("SET = %d\t", visitantes[pos][j]);
                                                       break;
                                                   case 9: printf("OUT = %d\t", visitantes[pos][j]);
                                                       break;
                                                   case 10: printf("NOV = %d\t", visitantes[pos][j]);
                                                       break;
                                                   case 11: printf("DEZ = %d\t", visitantes[pos][j]);
                                                       break;
                                                   default: break;
                                               }
                                       }

                                   break;
                               case 0: break;
                               default: printf("Opcao invalida!");
                           }

                       }while (opcaomodificar != 0);
                   }else {
                       printf("Essa atracao nao existe!\n");
                   }


            break;
           case 0: break;
           default: printf("Opcao invalida!");
       }
    }while (opcao!=0);

    return 0;
}
