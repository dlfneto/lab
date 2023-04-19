#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define TAM 1
int main(){

    int *matriz[3];

    for(int i = 0; i < ROWS; i++)
        *(matriz+i) = (int *) malloc(sizeof(int) * TAM);

    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < TAM; j++)
            *(*(matriz+i) + j) = 1;

    for(int i = 0; i < ROWS; i++){

        printf("\nLinha: %d | Endereço: %p\n", i+1, *(matriz+i));

        for(int j = 0; j < TAM; j++)
            printf("%d, ", *(*(matriz+i) + j));

        printf("\n");
    }

    for(int i = 0; i < ROWS; i++)
        free(*(matriz+i));

    return 0;
}