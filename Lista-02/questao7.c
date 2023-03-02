#include <stdio.h>

int main(){

    float dividendo = 0,  divisor = 0;

    printf("Insira o dividendo: ");
    scanf("%f", &dividendo);
    while(getchar() != '\n') continue;

    while(divisor == 0){
        printf("Insira o divisor: ");
        scanf("%f", &divisor);

        if(divisor == 0) printf("\nO divisor deve ser diferente de 0!\n\n");
        while(getchar() != '\n') continue;
    }

    printf("A divisão de %.2f/%.2f é: %.2f\n", dividendo, divisor, (dividendo/divisor));
    
    return 0;
}
