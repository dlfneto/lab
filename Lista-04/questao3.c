#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(){

    int vetor[TAM];
    int *menor = NULL;

    for(int i = 0; i < TAM; i++){
        printf("Insira o %dº numero: ", i+1);
        scanf("%d", vetor+i);
    }

    menor = vetor;

    for(int i = 0; i < TAM; i++){
        if(*(vetor+i) < *menor) menor = vetor+i;
    }

    printf("O menor número foi: %d, Endereço: %p\n", *menor, menor);

    return 0;
}