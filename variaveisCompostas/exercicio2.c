#include <stdio.h>

int main(void) {

    float notas[100]; //[tamanho de elementos reservados para o array]
    int numeros[30];
    int numeros1[] = {1,2,3,4,5}; //tem tamanho 5, mesmo sem colocar o numero
    int numeros2[] = {1,5,6,8,9,4,8};

    int mat[100][50]; //[numero de linhas][numero de colunas], matriz

    //como inicializar
    float vetor[6] = {3.3,4.4,5.5,6.6,7.7,8.8};;
    int matriz[3][4] = {{1,2,3,4}, {5,6,7,8} ,{9,10,11,12}}; //[linhas][colunas] "tres grupos de tres"
    int matriz2[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int matriz3[2][3] = {1,2,3,4,5,6};
    char nome[10] = {'A', 'N', 'A'}; //'\O' finaliza um array do tipo char
    char nome2[10] = {'Joao'};
    char nome3[3][10] = {"Joao", "Maria", "Jose"};

    //atribuicao
    numeros[2] = 8;
    matriz[1][2] = 78;

    //percorrendo um vetor
    for (int i=0; i<5; i++) { //de 0 a 4
        if (numeros1[i]%2 == 0) {
            numeros1[i] = 0; //zera todos os elementos pares
        }
    }

    for (int i=0; i<7; i++) { //de 0 a 6
        if (i%2 != 0) {
            numeros2[i] = 0; //zera todos os elementos impares
        }
    }

    //percorrendo uma matriz
    for (int i=0; i<3; i++) {
        for (int j=0; j<5; j++) {
            matriz2[i][j] = 0; //zera todos os elementos
        }
    }

    //mostrar os valores do array
    for (int i=0; i<5; i++) {
        printf("Numeros[%d] = %d\n",i, numeros1[i]);
    }

    return 0;
}