#include <stdio.h>

int main(){

    int a = 0, b = 0, c = 0;

    printf("Insira o valor de A: ");
    scanf("%d", &a);

    printf("Insira o valor de B: ");
    scanf("%d", &b);

    printf("Antes da troca: A = %d e B = %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("Depois da troca: A = %d e B = %d\n", a, b);

    return 0;
}