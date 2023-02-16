#include <stdio.h>

int main(){

    float pagamento_por_dia = 50.25, valor_bruto = 0, valor_liquido = 0;
    int dias_trabalhados = 0;

    printf("Insira a quantidade de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);


    valor_bruto = dias_trabalhados * pagamento_por_dia;

    if(dias_trabalhados > 20) 
        valor_bruto += (30.0/100.0) * valor_bruto;
    else if(dias_trabalhados > 10)
        valor_bruto += (20.0/100.0) * valor_bruto;
    

    valor_liquido = valor_bruto - ((10.0/100.0) * valor_bruto);

    printf("Valor a ser pago: R$ %.2f\n", valor_liquido);

    return 0;
}