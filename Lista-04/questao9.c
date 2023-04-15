#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define RANGE 50


void imprimir_vetor(unsigned v[], int t);

int main(){
    srand(time(NULL));

    unsigned vetor[TAM];

    int i;
    for(i = 0; i < TAM; i++)
        *(vetor+i) = rand()%RANGE;

    imprimir_vetor(vetor, TAM);


    for(i = 1; i <= TAM; i++){
        int j;
        int ordendando = 0;

        for(j = 0; j < TAM-i; j++){
            if(*(vetor+j+1) < *(vetor+j)){
                *(vetor+j) ^= *(vetor+j+1);
                *(vetor+j+1) ^= *(vetor+j);
                *(vetor+j) ^= *(vetor+j+1);
                ordendando++;
            }
        }
        if(!ordendando) break;
    }

    imprimir_vetor(vetor, TAM);    

    return 0;
}

void imprimir_vetor(unsigned v[], int t){
    int i;
    for(i = 0; i < TAM; i++)
        printf(" %d%c", v[i], (i==t-1)?'.':',');
    printf("\n");
}