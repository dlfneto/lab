#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 30

#define TO_S(x) "\n%"#x"[^\n]"
#define MASK_S(x) TO_S(x)

int main(){

    char string[MAX_STR_LEN];

    printf("Insira a string: ");
    scanf(MASK_S(MAX_STR_LEN), string);

    printf("String informada: \"%s\"\n", string);

    int len = strlen(string);
    for(int i = 0; i < len/2+1; i++){
        char aux = string[i];
        string[i] = string[len-1-i];
        string[len-1-i] = aux;
    }

    printf("String revertida: \"%s\"\n", string);
    return 0;
}