#include <stdio.h>

int main(){

    char sexo = 'f';
    float altura = 0, peso_ideal = 0;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o sexo do individuo (m) ou (f): ");
    scanf(" %c", &sexo);

    if(sexo == 'f') peso_ideal = 62.1 * altura - 44.7;
    else peso_ideal = 72.7 * altura - 58;

    printf("Peso ideal: %.2fkg\n", peso_ideal);

    return 0;
}