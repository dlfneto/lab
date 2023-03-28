#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 30

#define TO_S(x) "\n%"#x"[^\n]"
#define MASK_S(x) TO_S(x)

int main(){

    char string_1[MAX_STR_LEN], string_2[MAX_STR_LEN];
    int str_len = 0;

    printf("Insira a primeira string: ");
    scanf(MASK_S(MAX_STR_LEN), string_1);

    while(getchar() != '\n') continue;

    printf("Insira a segunda string: ");
    scanf(MASK_S(MAX_STR_LEN), string_2);

    printf("\nComparando strings utilizando strcmp():\n");
    int iguais = !strcmp(string_1, string_2);
    printf("As strings \"%s\" e \"%s\" são %s.\n\n", string_1, string_2, iguais ? "iguais":"diferentes");


    printf("\nComparando strings SEM utilizar strcmp():\n");
    iguais = 1;
    while(string_1[str_len] != '\0'){
        if(string_1[str_len] != string_2[str_len]){
            iguais = 0;
            break;
        }
        str_len++;
        if(string_1[str_len] == '\0' && string_2[str_len] != '\0') iguais = 0;
    }

    printf("As strings \"%s\" e \"%s\" são %s.\n", string_1, string_2, iguais ? "iguais":"diferentes");

    return 0;
}