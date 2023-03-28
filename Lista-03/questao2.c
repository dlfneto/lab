#include <stdio.h>

#define MAX_STR_LEN 30

#define TO_S(x) "\n%"#x"[^\n]"
#define MASK_S(x) TO_S(x)

int main(){

    char string[MAX_STR_LEN];
    char caractere;

    printf("Insira a string: ");
    scanf(MASK_S(MAX_STR_LEN), string);

    while(getchar() != '\n') continue;

    printf("Insira o caractere de busca: ");
    caractere = getchar();

    int index = 0;
    int encontrou = 0;
    while(string[index] != '\0'){
        if(string[index] == caractere) encontrou++;
        index++;
    }

    printf("A string informada: \"%s\" possui %d ocorrencia(s) do caractere \'%c\'\n", string, encontrou, caractere);

    return 0;
}