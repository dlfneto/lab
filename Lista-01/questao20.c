#include <stdio.h>

int main(){

    int numero = 0;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    printf("O numero %d é %s.\n", numero, (!(numero%2) ? "Par" : "Impar"));

    return 0;
}