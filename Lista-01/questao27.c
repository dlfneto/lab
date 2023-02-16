#include <stdio.h>
#include <math.h>

int main(){

    float num1 = 0, 
    num2 = 0, 
    num3 = 0,
    media_aritmetica = 0,
    media_geometrica = 0;

    printf("Insira o primeiro numero: ");
    scanf("%f", &num1);

    printf("Insira o segundo numero: ");
    scanf("%f", &num2);

    printf("Insira o terceiro numero: ");
    scanf("%f", &num3);

    media_aritmetica = (num1 + num2 + num3)/3;
    media_geometrica = pow((num1 * num2 * num3), 1.0/3);

    printf("Media Aritmetica: %.2f\n", media_aritmetica);
    printf("Media Geometrica: %.2f\n", media_geometrica);

    return 0;
}