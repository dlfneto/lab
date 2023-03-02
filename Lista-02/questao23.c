#include <stdio.h>

int main(){

    int x = 5;

    printf("Valor de x: %d\n", x);
    printf("Aplicando x--: %d\n", x--);
    printf("Novo valor de x: %d\n", x);

    printf("+-------------------------------+\n");

    x = 5;

    printf("Valor de x: %d\n", x);
    printf("Aplicando --x: %d\n", --x);
    printf("Novo valor de x: %d\n", x);

    return 0;
}
