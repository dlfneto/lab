#include <stdio.h>

#define LENGTH 3

int main(){

    char digitos[LENGTH];

    printf("Insira os digitos: ");
    scanf("%s", digitos);

    for(int i = 0; i < LENGTH/2; i++){
        char tmp = digitos[i];
        digitos[i] = digitos[LENGTH - i - 1];
        digitos[LENGTH - i - 1] = tmp;
    }

    printf("Digitos invertidos: %s\n", digitos);
}