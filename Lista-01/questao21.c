#include <stdio.h>

int main(){

    int a = 0, b = 0;

    printf("Insira o primeiro numero: ");
    scanf("%d", &a);

    printf("Insira o segundo numero: ");
    scanf("%d", &b);

    printf("O numero %d %s multiplo de %d.\n", a, (!(a%b) ? "é" : "não é"), b);

    return 0;
}