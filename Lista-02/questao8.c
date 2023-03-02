#include <stdio.h>

int main(){

    float valor_mercadoria = 0, entrada = 0, parcela_1 = 0, parcela_2 = 0;

    printf("Insira o valor da mercadoria: ");
    scanf("%f", &valor_mercadoria);
    while(getchar() != '\n') continue;

    entrada = (int) valor_mercadoria % 3;
    valor_mercadoria -= entrada;

    parcela_1 = (int) valor_mercadoria/3;
    parcela_2 = (int) valor_mercadoria/3;

    entrada += (int) valor_mercadoria/3 + (valor_mercadoria - (int) valor_mercadoria);

    printf("Valor de entrada: %.2f\n", entrada);
    printf("Valor da 1 parcela: %.2f\n", parcela_1);
    printf("Valor de 2 parcela: %.2f\n", parcela_2);
    
    return 0;
}
