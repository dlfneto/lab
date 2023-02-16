#include <stdio.h>

int main(){

    float cotacao_dolar = 0, valor_em_real = 0, valor_em_dolar= 0;

    printf("Insira a cotacao atual do dolar: ");
    scanf("%f", &cotacao_dolar);

    printf("Insira o valor em R$ para converter: R$ ");
    scanf("%f", &valor_em_real);

    valor_em_dolar = valor_em_real / cotacao_dolar;

    printf("Atualmente R$ %.2f vale $ %.2f.\n", valor_em_real, valor_em_dolar);

    return 0;
}