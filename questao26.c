#include <stdio.h>
#include <math.h>

int main(){

    int posicao_1[2];
    int posicao_2[2];

    float distancia = 0;

    printf("Insira a posição 1 (x, y): ");
    scanf("%d, %d", &posicao_1[0], &posicao_1[1]);


    printf("Insira a posição 2 (x, y): ");
    scanf("%d, %d", &posicao_2[0], &posicao_2[1]);


    float diffX = (posicao_1[0] - posicao_2[0])*(posicao_1[0] - posicao_2[0]);
    float diffY = (posicao_1[1] - posicao_2[1])*(posicao_1[1] - posicao_2[1]);
    distancia = sqrt(diffX + diffY);

    printf("Posicao 1: X = %d, Y = %d\n", posicao_1[0], posicao_1[1]);
    printf("Posicao 2: X = %d, Y = %d\n", posicao_2[0], posicao_2[1]);
    printf("Distancia entre os dois pontos: %.2f\n", distancia);

    return 0;
}