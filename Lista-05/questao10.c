#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir_vetor(int *v, int t);
void imprimir_matriz(int **v, int r, int c);

int main(){
    srand(time(NULL));

    int tam = 0, n = 0;

    printf("Insira o tamanho dos vetores: ");
    scanf("%d", &tam);
    printf("Insira o valor máximo dos elementos: ");
    scanf("%d", &n);

    //Alocando os vetores
    int * vetor_x = (int *) malloc(sizeof(int) * tam);
    int * vetor_y = (int *) malloc(sizeof(int) * tam);

    if(!vetor_x || !vetor_y){
        fprintf(stderr, "Memória insuficiente!\n");
        return 1;
    }

    //Alocando a matriz
    int ** matriz_ocorrencias = (int **) malloc(sizeof(int *) * n);

    if(!matriz_ocorrencias){
        fprintf(stderr, "Memória insuficiente!\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        *(matriz_ocorrencias+i) = (int *) malloc(sizeof(int) * n);
        if(!(*(matriz_ocorrencias+i))){
            fprintf(stderr, "Memória insuficiente!\n");
            return 1;
        }
    }

    //Valores de X e Y
    for(int i = 0; i < tam; i++){
        *(vetor_x+i) = rand()%n;
        *(vetor_y+i) = rand()%n;
    }

    printf("\nVetor X = ");
    imprimir_vetor(vetor_x, tam);
    printf("\nVetor Y = ");
    imprimir_vetor(vetor_y, tam);

    for(int i = 0; i < tam; i++){
        *(*(matriz_ocorrencias + *(vetor_y+i)) + *(vetor_x+i)) += 1;
    }


    printf("\nMatriz Coocorrencia:\n");
    imprimir_matriz(matriz_ocorrencias, n, n);

    return 0;
}

void imprimir_vetor(int *v, int t){
    int i;
    printf("[");
    for(i = 0; i < t; i++)
        printf("%d%s", *(v+i), (i==t-1)?"]":", ");
    printf("\n");
}

void imprimir_matriz(int **v, int r, int c){
    int i, j;
    for(i = 0; i < r; i++){
        printf("|");
        for(j = 0; j < c; j++)
            printf("%*d", 4, *(*(v+i)+j));
        printf("|\n");
    }
    printf("\n");
}