#include <stdio.h>

int main(){

    int numero = 0;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("%d * 3 = %d\n", numero, (numero*3));
    printf("%d^2 = %d\n", numero, (numero*numero));
    printf("%d / 2 = %.2f\n", numero, (((float) numero)/2.0));


    return 0;
}