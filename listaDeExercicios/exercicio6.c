#include <stdio.h>
#include <math.h>
//Implemente a função double grausParaRadianos(double graus) que converta o ângulo
//e retorne os valores de seno, cosseno e tangente usando as funções sin(), cos() e tan()
//da biblioteca <math.h>.
double grausParaRadianos(double graus) {
    double grau = 3.14159/180;
    double radiano;

    radiano = graus*grau;

    printf("Radiano: %lf\n", radiano);

    return radiano;
}

int main () {

    double anguloemgraus, anguloemrad, seno, cosceno, tangente;

    printf("Digite o valor do angulo: ");
    scanf("%lf", &anguloemgraus);

    anguloemrad = grausParaRadianos(anguloemgraus);

    seno = sin(anguloemrad);
    cosceno = cos(anguloemrad);
    tangente = tan(anguloemrad);

    printf("Seno: %.2f\n", seno);
    printf("Cosceno: %.2f\n", cosceno);
    printf("Tangente: %.2f\n", tangente);
}
