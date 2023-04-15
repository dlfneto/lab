#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1 = 0, n2 = 0, soma = 0;

    int *p1 = &n1;
    int *p2 = &n2;
    int *p_soma = &soma;

    printf("Insira os valores de N1, N2 respectivamente: ");
    scanf("%d %d", p1, p2);

    *p_soma = *p1 + *p2;

    printf("A soma entre %d e %d é %d!\n", *p1, *p2, *p_soma);
    printf("Endereços de memoria:\n");
    printf("&N1\t\t&N2\t\tSOMA\t\tP1\t\tP2\t\tP_SOMA\n");
    printf("%p\t%p\t%p\t%p\t%p\t%p\n", &n1, &n2, &soma, p1, p2, p_soma);

    return 0;
}