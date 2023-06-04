#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 50

void generate_random_values(int * arr, int size, int range){
    for(int i = 0; i < size; i++)
        *(arr+i) = rand()%(range+1);
}
void print_array(int * arr, int size){
    printf("[");
    for(int i = 0; i < size; i++)
        printf("%d%s", *(arr+i), i != size-1 ? ", " : "]\n");
}

int main(){

    srand(time(NULL));
    int * x, * y, tam = 0;

    printf("Insira o tamanho dos Vetores: ");
    scanf("%d", &tam);

    x = (int *) malloc(sizeof(int) * tam);
    y = (int *) malloc(sizeof(int) * tam);

    generate_random_values(x, tam, RANGE);
    generate_random_values(y, tam, RANGE);

    print_array(x, tam);
    print_array(y, tam);

    float sum = 0;
    for(int i = 0; i < tam; i++)
        sum += (*(x+i) - *(y+i)) * (*(x+i) - *(y+i));
    
    sum /= tam; 

    printf("Erro quadrático médio: %.2f\n", sum);

    return 0;
}