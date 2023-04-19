#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15
#define N 7
void imprimir_matriz(int * v, int r, int c);

int main(){
    srand(time(NULL));

    int matriz[N][N] = {0};

    int index = 0;
    for(int i = 0; i < N*N; i++){
        *(matriz[0] + i) = index;
        index++;
    }

    printf("Matriz = ");
    imprimir_matriz(matriz[0], N, N);

    return 0;
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