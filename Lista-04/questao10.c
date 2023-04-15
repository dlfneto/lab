#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15
#define N 7

void imprimir_vetor(int v[], int t);

int main(){
    srand(time(NULL));

    int vetor[TAM] = {0};

    for(int i = 0; i < TAM; i++)
        *(vetor+i) = rand()%N;

    printf("Vetor = ");
    imprimir_vetor(vetor, TAM);

    int ocorrencias[N] = {0};
    for(int i = 0; i < TAM; i++)
        (*(ocorrencias+(*(vetor+i))))++;

    printf("Ocorrências = ");
    imprimir_vetor(ocorrencias, N);

    return 0;
}

void imprimir_vetor(int v[], int t){
    int i;
    printf("[");
    for(i = 0; i < t; i++)
        printf("%d%s", v[i], (i==t-1)?"]":", ");
    printf("\n");
}