#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 20

#define MASK(x) "%"#x"s"
#define S_MASK(x) MASK(x)

int main(){

    char string[MAX_STR+1] = {0};   

    printf("Insira a string: ");
    scanf(S_MASK(MAX_STR), string);

    int len = 0;
    while(*(string+len) != '\0') len++;

    printf("O tamanho da string \"%s\": %d caracteres\n", string, len);

    return 0;
}