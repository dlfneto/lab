#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15
#define N 7

void imprimir_vetor(int v[], int t);
void imprimir_matriz(int * v, int r, int c);

int main(){
    srand(time(NULL));

    int vetor_x[TAM] = {0};
    int vetor_y[TAM] = {0};
    int matriz_ocorrencias[N][N] = {0};

    for(int i = 0; i < TAM; i++){
        *(vetor_x+i) = rand()%N;
        *(vetor_y+i) = rand()%N;
    }

    printf("\nVetor X = ");
    imprimir_vetor(vetor_x, TAM);
    printf("Vetor Y = ");
    imprimir_vetor(vetor_y, TAM);


    for(int i = 0; i < TAM; i++){
        // matriz_ocorrencias[vetor_y[i]][vetor_x[i]]++;
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

void imprimir_matriz(int * v, int r, int c){
    int i;
    for(i = 0; i < r*c; i++){

        if((i%c) == 0) printf("\n| ");
        printf("%d ", *(v+i));
        if(((i+1)%c) == 0) printf("|");
    }
    printf("\n");
}