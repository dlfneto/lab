#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 100
#define COL 3
#define LIN 3

int main(){
    srand(time(NULL));
    int matriz[LIN][COL] = {0}, numero = 0, encontrado = 0;

    for(int i = 0; i < LIN; i++)
        for(int j = 0; j < COL; j++)
            matriz[i][j] = rand()%RANGE;

    printf("\nMatriz Gerada: \n");
    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Insira um numero: ");
    scanf("%d", &numero);


    for(int i = 0; i < LIN; i++)
        for(int j = 0; j < COL; j++)
            if(matriz[i][j] == numero) encontrado++;
    

    printf("\nO numero %d aparece %d vez(es) na matriz acima.\n", numero, encontrado);

    return 0;
}