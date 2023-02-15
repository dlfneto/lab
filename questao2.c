#include <stdio.h>

int main(){

    int numero_decimal = 0;

    printf("Digite um número: ");
    scanf("%d", &numero_decimal);

    printf("O número decimal %d em base Hexadecimal: %x\n", numero_decimal, numero_decimal);
    printf("O número decimal %d em base Octal: %o\n", numero_decimal, numero_decimal);

    return 0;
}