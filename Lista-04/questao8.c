#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 20

#define MASK(x) "\n%"#x"[^\n]"
#define S_MASK(x) MASK(x)

int main(){

    char string[MAX_STR+1] = {0};   
    char caractere;

    printf("Insira a primeira string: ");
    scanf(S_MASK(MAX_STR), string);

    fflush(stdin);

    printf("Insira o caractere para procurar: ");
    scanf("\n%c", &caractere);

    char *p_caractere = string;
    while(*p_caractere != caractere && *p_caractere != '\0'){
        p_caractere++;
    }
    if(*p_caractere != caractere) p_caractere = NULL;

    printf("String 1:\t%s\tEND: %p\n", string, string);

    if(p_caractere != NULL)
        printf("Caractere:\t%c\tEND: %p\n", *p_caractere, p_caractere);
    else
        printf("Caractere não encontrado!\n");


    return 0;
}