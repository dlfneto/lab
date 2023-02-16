#include <stdio.h>

int main(){

    int numero = 0;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    printf("%d^2 = %d\n", numero, (numero * numero));

    return 0;
}