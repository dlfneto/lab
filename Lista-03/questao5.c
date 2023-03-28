#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 30

#define TO_S(x) "\n%"#x"[^\n]"
#define MASK_S(x) TO_S(x)

int main(){

    char string_1[MAX_STR_LEN], string_2[MAX_STR_LEN];
    
    char string_cat[MAX_STR_LEN] = {0};
    char string_sm_cat[MAX_STR_LEN*2] = {0};

    printf("Insira a primeira string: ");
    scanf(MASK_S(MAX_STR_LEN), string_1);

    while(getchar() != '\n') continue;

    printf("Insira a segunda string: ");
    scanf(MASK_S(MAX_STR_LEN), string_2);

    printf("\nConcatendando strings utilizando strcat():\n");
    strcat(string_cat, string_1);
    strcat(string_cat, string_2);
    printf("Concatenando as strings \"%s\" e \"%s\":  \"%s\".\n\n", string_1, string_2, string_cat);


    printf("\nConcatendando strings SEM utilizar strcat():\n");
    int index = 0;
    int str_len = 0;
    while(string_1[str_len] != '\0'){
        printf("%d\n", index);
        string_sm_cat[index] = string_1[str_len];
        str_len++;
        index++;
    }
    str_len = 0;
    while(string_2[str_len] != '\0'){
        printf("%d\n", index);
        string_sm_cat[index] = string_2[str_len];
        str_len++;
        index++;
    }
    string_sm_cat[index] = '\0';

    printf("Concatenando as strings \"%s\" e \"%s\":  \"%s\".\n\n", string_1, string_2, string_sm_cat);
    return 0;
}