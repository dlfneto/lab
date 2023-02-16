#include <stdio.h>

int main(){

    int numero = 0;
    int numero_absoluto = 0;

    printf("Insira um número inteiro: ");
    scanf("%d", &numero);

    numero_absoluto = numero < 0 ? ~numero + 1 : numero;

    printf("O valor absoluto de %d é: %d\n", numero, numero_absoluto);

    return 0;
}