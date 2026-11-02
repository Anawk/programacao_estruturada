#include <stdio.h>
//Dados dois vetores A e B de 10 elementos inteiros cada, crie um procedimento
//que gere um terceiro vetor C contendo apenas os elementos presentes em ambos os
//vetores (sem duplicatas).

int main() {
    int vetorA[10] = {1,2,3,4,3,3,7,8,9,3};
    int vetorB[10] = {5,6,7,11,44,1,9,22,3,0};
    int vetorC[10];
    int k=0;
    int repetido;

    for (int i=0;i<10;i++) {
        repetido=0;
        for (int j=0;j<10;j++) {
            if (vetorA[i] == vetorB[j]) {
                for (int n=0;n<k;n++) {
                    if (vetorA[i] == vetorC[n]) {
                        repetido = 1;
                        break;
                    }
                }

                if (repetido==0) {
                    vetorC[k] = vetorA[i];
                    k++;
                }
                break;
            }
        }
    }

    for (int i=0;i<k;i++) {
        printf("%d,", vetorC[i]);
    }
}