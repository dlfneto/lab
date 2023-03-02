#include <stdio.h>

int main(){

    int min = 0, max = 0;

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

    printf("A media do intervalo é %.2f\n", (min/2.0) + (max/2.0));

    return 0;
}
