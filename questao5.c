#include <stdio.h>

int main(){

    float valor = 0;
    float valor_total = 0;

    printf("Digite o valor da conta: ");
    scanf("%f", &valor);

    valor_total = valor + (valor * (10.0/100.0));

    printf("Valor total a pagar: R$ %.2f\n", valor_total);


    return 0;
}