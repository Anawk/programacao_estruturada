#include <stdio.h>
#define TAM 10
#define TAXA_ICMS 0.18
//Defina as constantes #define TAM 10 e #define TAXA_ICMS 0.18.
//Declare um vetor com os preços de 10 produtos e calcule o valor do imposto ICMS
//para cada item, armazenando em um segundo vetor.

int main() {
    float produtos[] = {33.0,56.0,7.0,15.0,38.0,44.0,25.0,30.0,88.0,11.0};
    float valorICMS[TAM];

    for (int i=0;i<TAM;i++) {
        valorICMS[i] = produtos[i]*TAXA_ICMS;
    }

    for (int i=0;i<TAM;i++) {
        printf("Produto[%d] - %.2f de imposto\n", i, valorICMS[i]);
    }
}