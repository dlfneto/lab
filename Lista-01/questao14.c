#include <stdio.h>

int main(){

    float temp_celsius = 0, temp_fahrenheit = 0;

    printf("Insira o valor da temperatura em Celsius: ");
    scanf("%f", &temp_celsius);

    temp_fahrenheit = (9 * temp_celsius + 160)/5;

    printf("Temperatura em Fahrenheit: %.1fF", temp_fahrenheit);

    return 0;
}