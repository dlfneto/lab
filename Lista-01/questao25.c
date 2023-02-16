#include <stdio.h>


int main(){

    int segundos = 0,
    minutos = 0,
    horas = 0;


    printf("Insira o intervalo de tempo em segundos: ");
    scanf("%d", &segundos);

    minutos = segundos/60;
    horas = minutos/60;

    minutos -= horas * 60;
    segundos -= minutos * 60;

    printf("Intervalo de tempo: %dh %dm %ds\n", horas, minutos, segundos);
}