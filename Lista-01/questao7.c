#include <stdio.h>

int main(){

    float horas = 0, minutos = 0, segundos = 0;

    printf("Insira a quantidade de horas: ");
    scanf("%f", &horas);

    printf("Insira a quantidade de minutos: ");
    scanf("%f", &minutos);

    printf("Insira a quantidade de segundos: ");
    scanf("%f", &segundos);


    segundos += (horas * 60 * 60) + (minutos * 60);

    printf("Total: %.2f segundos.\n", segundos);

    return 0;
}