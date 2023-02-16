#include <stdio.h>

int main(){

    int a = 0, b = 0;

    printf("Insira o valor do primeiro numero: ");
    scanf("%d", &a);

    printf("Insira o valor do segundo numero: ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, (a+b));
    printf("%d - %d = %d\n", a, b, (a-b));
    printf("%d * %d = %d\n", a, b, (a*b));
    printf("%d / %d = %d\n", a, b, (a/b));
    printf("%d %% %d = %d\n", a, b, (a%b));

    return 0;
}