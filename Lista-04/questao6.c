#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 20

#define MASK(x) "%"#x"s"
#define S_MASK(x) MASK(x)

int main(){

    char string[MAX_STR+1] = {0};   
    char copia[MAX_STR+1] = {0};

    printf("Insira a string: ");
    scanf(S_MASK(MAX_STR), string);


    for(int i = 0; i <= MAX_STR; i++){
        *(copia+i) = *(string+i);
    }

    printf("String:\t%s, END: %p\n", string, string);
    printf("Cópia:\t%s, END: %p\n", copia, copia);

    return 0;
}