#include <stdio.h>

int main(){

    int min = 0, max = 0, soma = 0;

    printf("Insira o inicio do intervalo: ");
    scanf("%d", &min);

    while(getchar() != '\n') continue;

    printf("Insira o fim do intervalo: ");
    scanf("%d", &max);

    if(max < min){
        max = max ^ min;
        min = max ^ min;
        max = max ^ min;
    }
    
    for(int i = min; i <= max; i++)
        if(!(i%2)) soma += i;

    printf("Soma total dos numeros pares: %d\n", soma);

    return 0;
}
