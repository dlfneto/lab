#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15
#define N 7
#define RANGE 10
#define SFT 1

void imprimir_vetor(int v[], int t);
void imprimir_matriz(int v[], int r, int c);

int main(){
    srand(time(NULL));

    int vetor_x[TAM] = {0};
    int vetor_y[TAM] = {0};
    int matriz_ocorrencias[N][N] = {0};

    //Valores de X
    for(int i = 0; i < TAM; i++){
        *(vetor_x+i) = rand()%N;
    }

    printf("\nVetor X = ");
    imprimir_vetor(vetor_x, TAM);

    //Definindo Y em função de X
    printf("Valor R = [");
    for(int i = 0; i < TAM; i++){
        int r = SFT + rand()%10;
        int deslocamento = 0;

        printf("%d%s", r, (i == TAM-1) ? "]":", ");

        if(r > 3 && r <= 5) deslocamento = -1;
        else if(r > 5 && r <= 7) deslocamento = 1;
        else if(r > 7 && r <= 9) deslocamento = -2;
        else if(r > 9 && r <= 10) deslocamento = 2;

        *(vetor_y + i) = *(vetor_x+i) + deslocamento;

        if(*(vetor_y+i) >= N) *(vetor_y+i) = N-1;
        if(*(vetor_y+i) < 0) *(vetor_y+i) = 0;
    }

    printf("\nVetor Y = ");
    imprimir_vetor(vetor_y, TAM);


    for(int i = 0; i < TAM; i++){
        (*(matriz_ocorrencias[0] + vetor_y[i] * N + vetor_x[i]))++;
    }

    printf("\nOcorrências = ");
    imprimir_matriz(matriz_ocorrencias[0], N, N);

    return 0;
}

void imprimir_vetor(int v[], int t){
    int i;
    printf("[");
    for(i = 0; i < t; i++)
        printf("%d%s", v[i], (i==t-1)?"]":", ");
    printf("\n");
}

void imprimir_matriz(int v[], int r, int c){
    int i;
    for(i = 0; i < r*c; i++){

        if((i%c) == 0) printf("\n| ");
        printf("%d ", *(v+i));
        if(((i+1)%c) == 0) printf("|");
    }
    printf("\n");
}