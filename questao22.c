#include <stdio.h>

int main(){

    char caracteres[] = "ABCabc012$*+/ ";

    int i = 0;
    for(i; caracteres[i] != '\0'; i++)
        printf("O caractere '%c' é equivalente ao inteiro %d.\n", caracteres[i], caracteres[i]);

    return 0;
}