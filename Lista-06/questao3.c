#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 100

typedef struct vetor Vetor;
struct vetor{
    int * arr;
    int tam;
    float media;
};

void generate_random_values(Vetor * vetor, int range){
    for(int i = 0; i < vetor->tam; i++)
        *(vetor->arr+i) = rand()%(range+1);
}
void print_vetor(Vetor vetor){
    printf("[");
    for(int i = 0; i < vetor.tam; i++)
        printf("%d%s", *(vetor.arr+i), i != vetor.tam-1 ? ", " : "]\n");
    
    printf("Média: %.2f\n", vetor.media);
}

int main(){
    srand(time(NULL));
    Vetor vetor1;
    int n = 10;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);

    vetor1.media = 0;
    vetor1.tam = n;
    vetor1.arr = (int *) malloc(sizeof(int) * vetor1.tam);

    if(!vetor1.arr){
        fprintf(stderr, "Erro ao criar vetor!\n");
        return 1;
    }

    generate_random_values(&vetor1, RANGE);

    for(int i = 0; i < vetor1.tam; i++)
        vetor1.media += (float) (*(vetor1.arr+i))/ (float) vetor1.tam;

    print_vetor(vetor1);

    return 0;
}