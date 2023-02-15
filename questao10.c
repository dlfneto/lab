#include <stdio.h>

int main(){

    int altura = 0, comprimento = 0, largura = 0, volume = 0;

    printf("Insira as dimensoes da caixa: \n");

    printf("Altura: ");
    scanf("%d", &altura);

    printf("Comprimento: ");
    scanf("%d", &comprimento);

    printf("Largura: ");
    scanf("%d", &largura);

    volume = altura * comprimento * largura;

    printf("O volume da caixa é: %d\n", volume);

    return 0;
}