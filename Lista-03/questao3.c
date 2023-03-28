#include <stdio.h>

#define MAX_STR_LEN 30

#define TO_S(x) "\n%"#x"[^\n]"
#define MASK_S(x) TO_S(x)

int main(){

    char string[MAX_STR_LEN];
    int str_len = 0;

    printf("Insira a string: ");
    scanf(MASK_S(MAX_STR_LEN), string);
    
    while(string[str_len] != '\0'){
        str_len++;
    }

    printf("A string \"%s\" possui %d caractere(s)\n", string, str_len);

    return 0;
}