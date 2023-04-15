#include <stdio.h>

#define TAM 4

int main(){

    int vetor_int[TAM];
    char vetor_char[TAM];
    float vetor_float[TAM];
    double vetor_double[TAM];


    for(int i = 0; i < TAM; i++){
        printf("Insira o %dº elemento: ", i+1);
        scanf("%d", vetor_int+i);
        *(vetor_char+i) = *(vetor_int+i);
        *(vetor_float+i) = *(vetor_int+i);
        *(vetor_double+i) = *(vetor_int+i);
    }

    printf("+--------- Vetor de Inteiros ---------+\n");
    for(int i = 0; i < TAM; i++){
        printf("| VAL: %d\t| END: %p |\n", *(vetor_int+i), vetor_int+i);
    }
    printf("+-------------------------------------+\n");

    printf("+-------- Vetor de Caracteres --------+\n");
    for(int i = 0; i < TAM; i++){
        printf("| VAL: %d\t| END: %p |\n", *(vetor_char+i), vetor_char+i);
    }
    printf("+-------------------------------------+\n");

    printf("+---------- Vetor de Doubles ----------+\n");
    for(int i = 0; i < TAM; i++){
        printf("| VAL: %.4f\t| END: %p |\n", *(vetor_double+i), vetor_double+i);
    }
    printf("+-------------------------------------+\n");

    printf("+---------- Vetor de Floats ----------+\n");
    for(int i = 0; i < TAM; i++){
        printf("| VAL: %.4f\t| END: %p |\n", *(vetor_float+i), vetor_float+i);
    }
    printf("+-------------------------------------+\n");

    /*
        O endereço é alocado de forma sequencial
        e de acordo com o tamanho do tipo de dado. Por exemplo,
        o endereço do tipo int salta de 4 em 4 bytes na posição
        de memória.
    */

    return 0;
}