#include <stdio.h>

int main(){

    int min = 0, max = 0, total = 0;

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
        if(!(i%3)) total++;

    printf("O total de numeros divisiveis por 3 é %d\n", total);

    return 0;
}
