#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1 = 0, n2 = 0;
    int *p1 = &n1, *p2 = &n2;

    printf("Insira os valores de N1, N2 respectivamente: ");
    scanf("%d %d", p1, p2);

    printf("Antes da troca:\n");
    printf("N1 = %d, N2 = %d\n", *p1, *p2);

    *p1 ^= *p2;
    *p2 ^= *p1;
    *p1 ^=  *p2;

    printf("Depois da troca:\n");
    printf("N1 = %d, N2 = %d\n", *p1, *p2);

    return 0;
}