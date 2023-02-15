#include <stdio.h>

int main(){

    int numero = 0;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    printf("O antecessor de %d é: %d\n", numero, (numero - 1));
    printf("O sucessor de %d é: %d\n", numero, (numero + 1));

    return 0;
}