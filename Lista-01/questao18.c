#include <stdio.h>

#define PI 3.14159

int main(){

    float raio = 0, 
    diametro = 0,
    circunferencia = 0,
    area = 0;

    printf("Insira o raio do circulo: ");
    scanf("%f", &raio);

    diametro = 2*raio;
    circunferencia = 2*PI*raio;
    area = PI*(raio*raio);

    printf("Diametro do circulo: %.2f\n", diametro);
    printf("Circunferencia do circulo: %.2f\n", circunferencia);
    printf("Area do circulo: %.2f\n", area);

    return 0;
}