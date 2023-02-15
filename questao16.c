#include <stdio.h>

int main(){

    float valor_por_hora = 0, 
    desconto_inss = 0,
    valor_liquido = 0,
    valor_bruto = 0;

    int horas_trabalhadas = 0;

    printf("Insira a valor da hora aula: ");
    scanf("%f", &valor_por_hora);

    printf("Insira a quantidade de horas trabalhadas no mês: ");
    scanf("%d", &horas_trabalhadas);

    printf("Insira a valor de desconto do INSS (em %%): ");
    scanf("%f", &desconto_inss);


    valor_bruto = horas_trabalhadas * valor_por_hora;
    valor_liquido = valor_bruto - ((desconto_inss/100) * valor_bruto);
    
    printf("Salario bruto: R$ %.2f\n", valor_bruto);
    printf("Salario liquido: R$ %.2f\n", valor_liquido);

    return 0;
}