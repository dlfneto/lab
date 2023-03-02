#include <stdio.h>

int main()
{
    unsigned long int graos = 1, soma = 0;
    for(int i = 1; i <= 64; i++){
        soma += graos;
        graos = graos*2;
        printf("%dº quadro:  %lu\n", i, soma);
    }
    return 0;
}