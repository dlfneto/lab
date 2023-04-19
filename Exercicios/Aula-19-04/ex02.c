#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 100

void kill();
void imprimir_vetor(int * v, int s);
void imprimir_vetor_ponteiros(int ** v, int s);

int main(){

    srand(time(NULL));

    /* Definindo as variáveis */
    int *x, **p, **q;
    int s_x = 0, s_p = 0, s_q = 0;

    printf("Insira o tamanho do vetor X: ");
    scanf("%d", &s_x);

    /* Alocando vetor X de forma dinâmica */
    x = (int *) malloc(sizeof(int) * s_x);
    if(!x) kill();


    /* Gerando valores pseudoaleatórios para X */
    for(int i = 0; i < s_x; i++)
        *(x+i) = rand()%RANGE;

    /* Conseguindo a quantidade de números pares e ímpares */
    for(int i = 0; i < s_x; i++)
        if((*(x+i))%2 == 0) s_p++;
        else s_q++;

    imprimir_vetor(x, s_x);
    printf("Numeros pares: %d\nNumeros Impares: %d\n", s_p, s_q);

    /* Alocando vetor de números pares */
    p = (int **) malloc(sizeof(int *) * s_p);
    if(!p) kill();

    /* Alocando vetor de números impares */
    q = (int **) malloc(sizeof(int *) * s_q);
    if(!q) kill();


    /* Guardando os endereços dos números pares e
       ímpares em p e q respectivamente.
    */
    for(int i = 0; i < s_x; i++)
        if((*(x+i))%2 == 0){
            *(p) = x+i;
            p++;
        }else{
            *(q) = x+i;
            q++;
        }
    p -= s_p;
    q -= s_q;

    /* Imprimindo resultado final */
    printf("\nNumeros Pares:\n");
    imprimir_vetor_ponteiros(p, s_p);

    printf("\nNumeros Impares:\n");
    imprimir_vetor_ponteiros(q, s_q);

    /* Desalocando memória utilizada */
    free(x);
    free(p);
    free(q);

    return 0;
}

void kill(){
    puts("Erro de memória!");
    exit(1);
}
void imprimir_vetor(int * v, int s){
    printf("[");
    for(int i = 0; i < s; i++){
        printf("%d%s", *(v+i), (i == s-1) ? "]\n":", ");
    }
}
void imprimir_vetor_ponteiros(int ** v, int s){
    for(int i = 0; i < s; i++){
        printf("END: %p\t VAL: %d\n", *(v+i), **(v+i));
    }
}