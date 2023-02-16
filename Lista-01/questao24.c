#include <stdio.h>


int main(){

    int x = 0;
    int n = 0;
    int resultado = 0;

    printf("Entre com um numero x: ");
    scanf("%d", &x);
    printf("Entre com um numero n: ");
    scanf("%d", &n);


    resultado = x << n;


    printf("Resultado: %d\n", resultado);
}