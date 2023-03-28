#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 3
#define RANGE 20

int main(){
    srand(time(NULL));

    int vetor[TAM] = {0};
    float media_aritmetica = 0, media_geometrica = 1;

    for(int i = 0; i < TAM; i++){
        vetor[i] = rand()%RANGE;
    }

    for(int i = 0; i < TAM; i++)
        printf("%c%d%c", i == 0 ? '[':' ', vetor[i], i == TAM-1 ? ']':',');
    printf("\n");

    for(int i = 0; i < TAM; i++){
        media_aritmetica += (float) vetor[i]/(float) TAM;
        media_geometrica *= (float) pow(vetor[i], (double) 1/ (double) TAM);
    }



    printf("Media Aritmetica: %.2f\n", media_aritmetica);
    printf("Media Geometrica: %.2f\n", media_geometrica);

    return 0;
}