#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 100

void print_vetor(unsigned vetor[], unsigned size);
void selection_sort(unsigned * vetor, unsigned size);
void bubble_sort(unsigned * vetor, unsigned size);

int main(){

    srand(time(NULL));
    unsigned vetor[TAM] = {0};
    int inicio = 0, fim = 0;

    printf("Insira o inicio do intervalo: ");
    scanf("%d", &inicio);
    while(getchar() != '\n') continue;
    printf("Insira o fim do intervalo: ");
    scanf("%d", &fim);

    int clone_vetor[TAM] = {0};
    for(int i = 0; i < TAM; i++){
        vetor[i] = inicio + (rand() % (fim+1-inicio));
        clone_vetor[i] = vetor[i];
    }

    printf("\nVetor Original:\n");
    print_vetor(vetor, TAM);

    printf("Vetor ordenado com a ordenação por SELEÇÃO:\n");
    selection_sort(vetor, TAM);
    print_vetor(vetor, TAM);

    printf("Vetor ordenado com a ordenação BOLHA:\n");
    bubble_sort(clone_vetor, TAM);
    print_vetor(clone_vetor, TAM);

    return 0;
}

void print_vetor(unsigned vetor[], unsigned s){
    for(int i = 0; i < s; i++){
        printf("%c%d%c", i == 0 ? '[':' ', vetor[i], i == s-1 ? ']':',');
    }
    printf("\n\n");
}

void selection_sort(unsigned * vetor, unsigned s){
    for(int i = 0; i < s-1; i++){
        for(int j = i+1; j < s; j++){
            if(vetor[i] > vetor[j]){
                vetor[j] = vetor[j] ^ vetor[i];
                vetor[i] = vetor[j] ^ vetor[i];
                vetor[j] = vetor[j] ^ vetor[i];
            } 
        }
    }
}
void bubble_sort(unsigned * vetor, unsigned s){
    for(int i = 0; i < s; i++){
        int sorting = 0;
        for(int j = 0; j < s-1-i; j++){
            if(vetor[j] > vetor[j+1]){
                vetor[j]   = vetor[j] ^ vetor[j+1];
                vetor[j+1] = vetor[j] ^ vetor[j+1];
                vetor[j]   = vetor[j] ^ vetor[j+1];
                sorting++;
            } 
        }
        if(!sorting) break;
    }
}