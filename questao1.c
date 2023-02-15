#include <stdio.h>

int main(){

    int x = 0;

    x = 7 + 3*6/2-1;

    puts("x = 7 + 3*6/2-1");
    puts("O cálculo é executado pela ordem: ");

    puts("");
    puts("1: 3*6 = 18");
    puts("2: 18/2 = 9");
    puts("3: 7 + 9 = 16");
    puts("4: 16 - 1 = 15");
    puts("");

    printf("Resultado: %d\n", x);
    puts("+==============================+");

    x = 2%2 + 2*2-2/2;

    puts("x = 2%2 + 2*2-2/2");
    puts("O cálculo é executado pela ordem: ");
    
    puts("");
    puts("1: 2%2 = 0");
    puts("2: 2*2 = 4");
    puts("3: 2/2 = 1");
    puts("4: 0 + 4 = 4");
    puts("5: 4 - 1 = 3");
    puts("");

    printf("Resultado: %d\n", x);
    puts("+==============================+");

    x = (3 * 9 * (3 + (9*3/(3))));

    puts("x = (3 * 9 * (3 + (9*3/(3))))");
    puts("O cálculo é executado pela ordem: ");
    
    puts("");
    puts("1: 9 * 3 = 27");
    puts("2: 27 / 3 = 9");
    puts("3: 3 + 9 = 12");
    puts("4: 3 * 9 = 27");
    puts("4: 27 * 12 = 324");
    puts("");

    printf("Resultado: %d\n", x);

    return 0;
}