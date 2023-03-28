#include <stdio.h>

#define ORDEM 3

int main(){

    int matriz[ORDEM][ORDEM] = {0};

    for(int i = 0; i < ORDEM; i++)
        for(int j = 0; j < ORDEM; j++){
            printf("Insira o valor do elemento a%d%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);

            while(getchar() != '\n') continue;
        }

    
    printf("\nMatriz Informada: \n");
    for(int i = 0; i < ORDEM; i++){
        for(int j = 0; j < ORDEM; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal principal: ");
    for(int i = 0; i < ORDEM; i++) printf("%d%c ", matriz[i][i], i < ORDEM-1 ? ',':'.');
    printf("\n");

    return 0;
}