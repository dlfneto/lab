#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 20

#define MASK(x) "\n%"#x"[^\n]"
#define S_MASK(x) MASK(x)

int main(){

    char string_1[MAX_STR+1] = {0};   
    char string_2[MAX_STR+1] = {0};   
    char string_c[(MAX_STR*2)+1] = {0};

    printf("Insira a primeira string: ");
    scanf(S_MASK(MAX_STR), string_1);

    printf("Insira a segunda string: ");
    scanf(S_MASK(MAX_STR), string_2);


    int index = 0;
    char *p_s1 = string_1;
    while(*p_s1 != '\0'){
        *(string_c+index) = *p_s1;
        index++;
        p_s1++;
    }

    char *p_s2 = string_2;
    while(*p_s2 != '\0'){
        *(string_c+index) = *p_s2;
        index++;
        p_s2++;
    }

    *(string_c+index) = '\0';


    printf("String 1:\t%s\tEND: %p\n", string_1, string_1);
    printf("String 2:\t%s\tEND: %p\n", string_2, string_2);
    printf("Resultado:\t%s\tEND: %p\n", string_c, string_c);
    return 0;
}